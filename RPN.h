#ifndef RPN_H
#define RPN_H
#endif

#include <list>
#include <stack>
#include <ctype.h>

using namespace std;

class ReversePolishNotation {
    private:
        
        stack <char> s;


    public:

        ReversePolishNotation () {}

        // For the constructor, simply ignore items in the list
        // that aren't a number or appropriate operator.
        ReversePolishNotation (list<char> l)
        {
            // Iterate through l pushing onto s.
            for (list<char>::iterator it = l.begin(); it != l.end(); ++it) {
                // Confirm that c is an integer or operator.
                if (!isdigit (*it) ||
                    *it != '+' ||
                    *it != '-' ||
                    *it != '*' ||
                    *it != '/')
                    continue;
                
                s.push (*it);
            }
        }

        bool addElem (char c) {
            // Confirm that c is an integer or operator.
            if (!isdigit (c) ||
                c != '+' ||
                c != '-' ||
                c != '*' ||
                c != '/')
                return false;

            s.push (c);

            return true;
        }

        char getElem () {
            char c;

            if (!s.empty())
            {
                c = s.top();
                s.pop();

                return c;
            }
            else
                return '\0';
        }

        int evaluate ();
};

#ifndef RPN_H
#define RPN_H
#endif

#include <list>
#include <stack>

using namespace std;

class ReversePolishNotation {
    private:
        
        stack <char> s;


    public:

        ReversePolishNotation () {}
        ReversePolishNotation (list<char> l)
        {
            // Iterate through l pushing onto s.
            for (list<char>::iterator it = l.begin(); it != l.end(); ++it) {
                s.push (*it);
            }
        }

        void addElem (char c) {
            // Confirm that c is an integer or operator.

            s.push (c);
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

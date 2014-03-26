#ifndef REVERSE_WORDS_H
#define REVERSE_WORDS_H
#endif

#include <string>

class ReverseWords {
    private:
        std::string input;
        std::string output;

    public:
        ReverseWords ()
        {}

        ReverseWords (std::string s) : input (s), output ()
        {}

        void set_input_string (std::string s)
        {
            input = s;
        }

        std::string get_input_string ()
        {
            return input;
        }

        std::string get_output_string ()
        {
            return output;
        }

        std::string reverse();
};

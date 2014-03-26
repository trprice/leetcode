#include "reverse_words.h"

std::string ReverseWords::reverse ()
{
    size_t length = this->input.length();
    
    size_t found = this->input.find_last_of (' ', length);
    size_t last_found = length;

    while (found != std::string::npos)
    {
        if (last_found == length) // Don't include the initial space
            this->output.append (this->input.substr (found+1, last_found-found));
        else
            this->output.append (this->input.substr (found, last_found-found));

        last_found = found;
        found = this->input.find_last_of (' ', found-1);
    }

    // Catch the last/first word
    this->output.append (" ");
    this->output.append (this->input.substr (0, last_found));

    return this->output;
}

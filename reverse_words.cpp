#include "reverse_words.h"

std::string ReverseWords::reverse ()
{
    size_t length = this->input.length();
    
    size_t found = this->input.find_last_of (' ', length);
    size_t last_found = length;

    while (found != std::string::npos)
    {
        // Change this test to make sure that there isn't only 1 word
        // (i.e. no space before the last word)
        if (last_found == length) // Don't include the initial space
            this->output.append (this->input.substr (found+1, last_found-found));
        else
            this->output.append (this->input.substr (found, last_found-found));

        // If the last space found was at the beginning of the line,
        // return since we just appended to the output string.
        if (found == 0)
            return this->output;

        last_found = found;
        found = this->input.find_last_of (' ', found-1);

        // If we found two spaces in a row, look again.
        while ((last_found - found) == 1)
        {
            if (found == 0)
                return this->output;

            found = this->input.find_last_of (' ', found-1);
        }
    }

    // Catch the last/first word
    if (last_found != length)
        this->output.append (" ");

    this->output.append (this->input.substr (0, last_found));

    return this->output;
}

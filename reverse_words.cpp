#include "reverse_words.h"

std::string ReverseWords::reverse ()
{
    bool first_find = true;

    size_t length = this->input.length();
    
    size_t found = this->input.find_last_of (' ', length);
    size_t last_found = length;

    while (found != std::string::npos)
    {
        // Don't include the space before the last word since it will now be
        // the first word.
        if (first_find && ((last_found - found) > 1))
        {
            this->output.append (this->input.substr (found+1, last_found-found));

            first_find = false;
        }
        else if (!first_find)
            this->output.append (this->input.substr (found, last_found-found));

        // If the last space found was at the beginning of the line,
        // return since we just appended to the output string.
        if (found == 0)
            return this->output;

        // last_found needs to be updated differently if there are trailing
        // spaces. It ends up pointing at the spaces at the end so they get
        // printed.
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

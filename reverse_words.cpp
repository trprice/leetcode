#include "reverse_words.h"

std::string ReverseWords::reverse ()
{
    bool first_append = true;

    size_t length = this->input.length();
    
    size_t found = this->input.find_last_of (' ', length);
    size_t last_found = length;

    while (found != std::string::npos)
    {
        // Don't include the space before the last word since it will now be
        // the first word.
        if (first_append && ((last_found - found) > 1))
        {
            this->output.append (this->input.substr (found+1, last_found-found));

            first_append = false;
        }
        else if (!first_append)
            this->output.append (this->input.substr (found, last_found-found));

        // If the last space found was at the beginning of the line,
        // return since we just appended to the output string.
        if (found == 0)
            return this->output;

        // If we haven't done the first append yet, we're going past trailing
        // spaces. Set last_found to find - 1 to go past the space.
        if (first_append)
            last_found = found - 1;
        else
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

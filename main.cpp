#include <iostream>
#include <string>
#include "reverse_words.h"

using namespace std;

int main ()
{
    // ReverseWords tests.
//    ReverseWords blue("the sky is blue");
//    cout << "Input String: " << blue.get_input_string() << endl;
//    cout << "Output String: " << blue.reverse() << endl;
//
//    ReverseWords two_spaces("there  are two spaces");
//    cout << "Input String: " << two_spaces.get_input_string() << endl;
//    cout << "Output String: " << two_spaces.reverse() << endl;
//
//    ReverseWords three_spaces("there   are three spaces");
//    cout << "Input String: " << three_spaces.get_input_string() << endl;
//    cout << "Output String: " << three_spaces.reverse() << endl;
//    
//    ReverseWords beginning_space(" there is a beginning space");
//    cout << "Input String: " << beginning_space.get_input_string() << endl;
//    cout << "Output String: " << beginning_space.reverse() << endl;
//    
//    ReverseWords two_beginning_spaces("  there are two beginning spaces");
//    cout << "Input String: " << two_beginning_spaces.get_input_string() << endl;
//    cout << "Output String: " << two_beginning_spaces.reverse() << endl;
//    
//    ReverseWords three_beginning_spaces("   there are three beginning spaces");
//    cout << "Input String: " << three_beginning_spaces.get_input_string() << endl;
//    cout << "Output String: " << three_beginning_spaces.reverse() << endl;
    
    ReverseWords trailing_space("there is a trailing space ");
    cout << "Input String: " << trailing_space.get_input_string() << endl;
    cout << "Output String: " << trailing_space.reverse() << endl;
    
    ReverseWords two_trailing_spaces("there are two trailing spaces  ");
    cout << "Input String: " << two_trailing_spaces.get_input_string() << endl;
    cout << "Output String: " << two_trailing_spaces.reverse() << endl;
    
    ReverseWords three_trailing_spaces("there are three trailing spaces   ");
    cout << "Input String: " << three_trailing_spaces.get_input_string() << endl;
    cout << "Output String: " << three_trailing_spaces.reverse() << endl;
    
    
    ReverseWords one_word("word");
    cout << "Input String: " << one_word.get_input_string() << endl;
    cout << "Output String: " << one_word.reverse() << endl;

    return 0;
}

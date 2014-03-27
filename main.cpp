#include <iostream>
#include <string>
#include "reverse_words.h"

using namespace std;

int main ()
{
    // ReverseWords tests.
    ReverseWords blue("the sky is blue");
    cout << "Input String: " << blue.get_input_string() << endl;
    cout << "Output String: " << blue.reverse() << endl;

    ReverseWords two_spaces("there  are two spaces");
    cout << "Input String: " << two_spaces.get_input_string() << endl;
    cout << "Output String: " << two_spaces.reverse() << endl;
    
    ReverseWords beginning_space(" there is a beginning space");
    cout << "Input String: " << beginning_space.get_input_string() << endl;
    cout << "Output String: " << beginning_space.reverse() << endl;
    
    ReverseWords one_word("word");
    cout << "Input String: " << one_word.get_input_string() << endl;
    cout << "Output String: " << one_word.reverse() << endl;

    return 0;
}

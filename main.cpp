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

    return 0;
}

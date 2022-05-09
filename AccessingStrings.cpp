/*
Accessing Strings
Pawelski
5/8/2022
Please follow the instructions on the activity guide!
*/

#include <iostream>
#include <string>

int main()
{
    std::string text = "abcdefg";
    std::cout << "Length: " << text.length() << "\n";
    std::cout << "Size: " << text.size() << "\n";

    std::string word = "supercalifragilisticexpialidocious";
    std::cout << word[0] << "\n";
    std::cout << word[5] << "\n";
    std::cout << word[10] << "\n";
    std::cout << word[33] << "\n";
    std::cout << word[word.length() - 1] << "\n";
    return 0;
}

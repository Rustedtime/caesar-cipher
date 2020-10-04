//Main.cpp
#include <iostream>
#include <algorithm>
#include <cctype>
#include <string>

std::string & encrypt(std::string phrase)
{
    std::transform(phrase.begin(), phrase.end(), phrase.begin(),
    [](unsigned char c){ return ((c + 3) % 57) + 65 ; });
    return phrase;
}

int main()
{
    std::cout << "Type a phrase to be encrypted.\n";
    std::string phrase;
    getline(std::cin, phrase);
    encrypt(phrase);
    std::cout << "The new phrase is:\n" << phrase << std::endl;

    return 0;
}
#include <iostream>
#include "lab-1.hpp"

int main()
{
    std::string input;

    std::cout << "Введите строку: ";
    std::getline(std::cin, input);

    int vowelCount = countVowels(input);
    std::cout << "Количество гласных букв: " << vowelCount << std::endl;

    return 0;
}

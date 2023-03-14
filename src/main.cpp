#include <adn.hpp>
#include <iostream>
#include <string>
#include <algorithm>

void ara_yuz()
{
    std::cout << "****************************************************" << "\n";
    std::cout << "1/Kuralllar :: :: :: 2/Girdi" << "\n";
    std::cout << "****************************************************" << "\n";    
}

int main(int argc, char const *argv[])
{    
    ara_yuz();
    
    std::string a;
    
    std::getline(std::cin, a);

    Yazilacak Yazilacak(a);

    Yazilacak.yazma();

    return 0;
}

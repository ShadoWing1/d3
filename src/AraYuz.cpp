#include <adn.hpp>
#include <iostream>
#include <string>
#include <cstdlib>

void AraYuz::arayuz()
{
    std::string girdi_1;
    
    std::cout << "****************************************************" << "\n";
    std::cout << "1/Kuralllar :: :: :: 2/Girdi :: :: :: 3/Kapat" << "\n";
    std::cout << "****************************************************" << "\n";    
    std::cout << "-";std::cin >> girdi_1;
    
    if(girdi_1 == "1"|| girdi_1 == "2")
    {
        int girdi = stoi(girdi_1);
        switch (girdi)
        {
            case 1:
            system("clear");
            std::cout << "****************************************************" << "\n";
            std::cout << "1-Semboller yoktur." << "\n";
            std::cout << "2-Sayilar yoktur." << "\n";
            std::cout << "3-sadece {abcdefghijklmnopqrstuvwxyz} veya {ABCDEFGHIJKLMNOPQRSTUVWXYZ} karakterleri için." << "\n"; // şimdilik
            std::cout << "****************************************************" << "\n";       
            std::cout << "\n";    
            arayuz();
            break;

            case 2:
            system("clear");
            std::cout << "-";
            std::string a;
            std::getline(std::cin, a);
            std::getline(std::cin, a);
            Yazilacak Yazilacak(a);
            Yazilacak.yazma();
            arayuz();
            break;
        }
    }
}
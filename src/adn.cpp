#include <adn.hpp>
#include <string>
#include <thread>
#include <chrono>

#define Big_A 65

#define Small_A 97

Yazilacak::Yazilacak(std::string girdi)
{
    for(const auto& d : girdi)
    {
        h_decimal.push_back(d);
    }
}

void Yazilacak::yazma()
{
    for(const auto& deneme : h_decimal)
    {
        char u = deneme;

        int R = deneme;

        if(R > 64 && R < 91)
        {
            for(int i = 65;i <= deneme; i++)
            {
                u = i;
                std::cout << kelime << u << "\n";
                std::this_thread::sleep_for(std::chrono::duration<double, std::milli>(100));
            }
            kelime += u;
        }

        else if(R > 96 && R <123)
        {
            for(int i = 97; i<=deneme; i++)
            {
                u = i;
                std::cout << kelime << u << "\n";
                std::this_thread::sleep_for(std::chrono::duration<double, std::milli>(100));
            }
            kelime += u;
        }

        else if(R > 47 && R <58)
        {
            for(int i = 48; i<=deneme; i++)
            {
                u = i;
                std::cout << kelime << u << "\n";
                std::this_thread::sleep_for(std::chrono::duration<double, std::milli>(100));
            }
            kelime += u;
        }

        else if(R > 32 && R <48)
        {
            for(int i = 33; i<=deneme; i++)
            {
                u = i;
                std::cout << kelime << u << "\n";
                std::this_thread::sleep_for(std::chrono::duration<double, std::milli>(100));
            }
            kelime += u;
        }

        else if(R > 90 && R <97)
        {
            for(int i = 91; i<=deneme; i++)
            {
                u = i;
                std::cout << kelime << u << "\n";
                std::this_thread::sleep_for(std::chrono::duration<double, std::milli>(100));
            }
            kelime += u;
        }
        
        else if(R > 122)
        {
            std::cout << "Desteklemiyor" << "\n"; // maybe one day but dont now
        }
        if(R == 32)
        {
            u = 32;
            std::cout << kelime << u << "\n";
            kelime += u;
            std::this_thread::sleep_for(std::chrono::duration<double, std::milli>(100));
        }
    }
    std::this_thread::sleep_for(std::chrono::duration<double, std::milli>(500));
    std::cout << "****************************************************" << "\n";   
    std::cout << "\n";
}
#include <adn.hpp>
#include <string>


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

        if(R < 91)
        {
            for(int i = 65;i <= deneme; i++)
            {
                u = i;
                std::cout << kelime << u << "\n";
            }
            kelime += u;
        }

        else if(R > 91)
        {
            for(int i = 97; i<=deneme; i++)
            {
                u = i;
                std::cout << kelime << u << "\n";
            }
            kelime += u;
        }

        if(R == 32)
        {
            u = 32;
            std::cout << kelime << u << "\n";
            kelime += u;
        }
    }
}
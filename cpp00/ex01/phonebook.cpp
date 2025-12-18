#include "iostream"
#include <iomanip>
#include <string>
int main(int ac,char *av[])
{
    (void)av;
    if(ac == 1)
    {
        while(true)
        {
            std::string line;
            std::cout << "Choose one option" << std::endl;
            std::getline(std::cin,line);
            std::cout << line << std::endl;
        }
    }
    else
        std::cout << "No arguments needed" << std::endl;
}
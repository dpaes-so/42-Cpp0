#include "phonebook.hpp"

int main(int ac,char *av[])
{
    phonebook book;
    std::string line;
    (void)av;
    if(ac == 1)
    {
        book.last_added = -1;
        while(true)
        {
            std::cout << "Choose one option:";
            if (!getline(std::cin, line))
                break;
            if(line == "ADD")
                book.add();
            else if(line == "SEARCH")
                book.search();
            else if(line == "EXIT" || line.empty())
                return(0);
            else 
                std::cout << "Unknown option" << std::endl;
        }
    }
    else
        std::cout << "No arguments needed" << std::endl;
}
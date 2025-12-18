#include "phonebook.hpp"

int main(int ac,char *av[])
{
    phonebook book;
    (void)av;
    if(ac == 1)
    {
        book.last_added = -1;
        while(true)
        {
            std::string line;
            std::cout << "Choose one option:" << std::endl;
            std::getline(std::cin,line);
            if(line == "add")
                book.add();
            else if(line == "search")
                book.search();
            else if(line == "exit")
                return(1);
            else 
                std::cout << "Unknown option" << std::endl;
        }
    }
    else
        std::cout << "No arguments needed" << std::endl;
}
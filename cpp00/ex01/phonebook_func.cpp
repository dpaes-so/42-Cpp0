#include "phonebook.hpp"

void phonebook::add()
{
    std::string line;
    if(last_added < 8)
    {
        last_added++;
        while(true)
        {
            while(true)
            {
                std::cout << "First name: ";
                std::getline(std::cin,line);
                if(!line.empty())
                {
                    cont[last_added].add_fname(line);
                    break;
                }
            }
            std::cout << "Last name: ";
            std::getline(std::cin,line);
            cont[last_added].add_lname(line);

            std::cout << "Nickname: ";
            std::getline(std::cin,line);
            cont[last_added].add_nickname(line);

            std::cout << "Number: ";
            std::getline(std::cin,line);
            cont[last_added].add_number(line);

            std::cout << "Darkest secret: ";
            std::getline(std::cin,line);
            cont[last_added].add_secret(line);
        }
    }
    // std::cout << "1" << std::endl;
}
void phonebook::search()
{
    for(int i = 0;i < 8;i++)
    {
        if(i <= last_added)
            cont[i].print_all();
    }
}

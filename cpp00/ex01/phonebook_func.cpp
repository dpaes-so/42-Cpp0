#include "phonebook.hpp"

std::string phonebook::handle_input(std::string str)
{
    std::string line;
    std::cout << str;
    while(std::getline(std::cin,line))
    {
        if(!line.empty())
            return(line);
        std::cout << str;
    }
    return(line);
}

void phonebook::add()
{
    std::string line;

    if(last_added < 8)
    {
        line = handle_input("First name: ");
        cont[last_added].add_fname(line);
        if(line.empty())
            return;
        line = handle_input("Last name: ");
        cont[last_added].add_lname(line);
        if(line.empty())
            return;
        line = handle_input("Nickname: ");
        cont[last_added].add_nickname(line);
        if(line.empty())
            return;
        line = handle_input("Number: ");
        cont[last_added].add_number(line);
        if(line.empty())
            return;
        line = handle_input("Darkest secret: ");
        cont[last_added].add_secret(line);
        if(line.empty())
            return;
        last_added++;
        if(last_added >= 8)
            last_added = 0;
        if (total < 8)
            total++;
    }
}
void phonebook::search()
{
    if (total == 0)
    {
        std::cout << "No contacts" << std::endl;
        return;
    }
    std::cout << "     index|first name| last name|  nickname|" << std::endl;
    for (int i = 0; i < total; i++)
        cont[i].print_line(i);

    std::string input;
    int index;
    std::cout << "Enter index: ";
    if (!std::getline(std::cin, input))
        return;
    if (input.length() != 1 || input[0] < '0' || input[0] > '7')
    {
        std::cout << "Invalid index" << std::endl;
        return;
    }
    index = input[0] - '0';
    if (index >= total)
    {
        std::cout << "Index does not exist" << std::endl;
        return;
    }
    cont[index].print_all();
}




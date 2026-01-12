#include "phonebook.hpp"

void contacts::add_fname(std::string str)
{
    first_name = str;
}
void contacts::add_lname(std::string str)
{
    last_name= str;
}
void contacts::add_nickname(std::string str)
{
    nickname = str;
}
void contacts::add_number(std::string str)
{
    phone_number = str;
}
void contacts::add_secret(std::string str)
{
    darkest_secret = str;
}

void contacts::print_all()
{
    std::cout << "First name: " << first_name << std::endl;
    std::cout << "Last name: " << last_name << std::endl;
    std::cout << "Nickname: "<< nickname << std::endl;
    std::cout << "Phone number: "<< phone_number << std::endl;
    std::cout << "Darkest secret: "<< darkest_secret << std::endl;
}

void contacts::print_field(std::string str)
{
    if (str.length() > 10)
        std::cout << str.substr(0, 9) << ".";
    else
        std::cout << std::setw(10) << str;
}

void contacts::print_line(int index)
{
    std::cout << std::setw(10) << index << "|";
    print_field(first_name);
    std::cout << "|";
    print_field(last_name);
    std::cout << "|";
    print_field(nickname);
    std::cout << "|";
    std::cout << std::endl;
}


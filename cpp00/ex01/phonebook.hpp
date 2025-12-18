#ifndef PHONEBOKK_HPP

#include "iostream"
#include <iomanip>
#include <string>
#include <cstdlib>

class contacts
{
    private:
        std::string first_name;
        std::string last_name; 
        std::string nickname;
        std::string phone_number;
        std::string darkest_secret;
    public:
        void add_fname(std::string str);
        void add_lname(std::string str);
        void add_nickname(std::string str);
        void add_number(std::string str);
        void add_secret(std::string str);
        void print_all();
};

class phonebook
{
    private:
        contacts cont[8];
    public:
        void add();
        void search();
        int last_added;
};
#endif
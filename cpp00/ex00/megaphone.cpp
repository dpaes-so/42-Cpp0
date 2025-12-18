#include "iostream"
#include <algorithm>
int main(int ac,char *av[])
{
    (void)ac;
    if(!av[1])
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return(1);
    }
    for(int i =1;av[i];i++)
    {
        std::string str= av[i];
        std::transform(str.begin(),str.end(),str.begin(),::toupper);
        std::cout << str;
    }
    std::cout << std::endl;
}
/*transform parametros(first is when to start , when to end, size,waht to to do)*/
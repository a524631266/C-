#include <iostream>

int main(int argc, char const *argv[])
{
    int ival = 42;
    int *p = &ival;

    std::cout << &p << std::endl;
    std::cout << &ival << std::endl;
    std::cout << &(*p) << std::endl;
    std::cout << (*p == ival) << std::endl;


    double dval = 3.14;
    double *p1 = &dval;
    double *p2 = p1;
    std::cout << &p1 << std::endl;
    std::cout << &p2 << std::endl;
    
    std::cout << *p1 << std::endl;
    std::cout << *p2 << std::endl;

    return 0;
}

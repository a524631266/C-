#include <iostream>
using std::cout;using std::endl;

int main(int argc, char const *argv[])
{
    int *p1 = 0;
    int *p11 = NULL;
    int *p2 = nullptr;
    int ival = 201;
    int *p3 = &ival;
    std::cout << &p1 << std::endl;
    std::cout << &p2 << std::endl;
    std::cout << p1 << std::endl;
    std::cout << p2 << std::endl;
       std::cout << p3 << std::endl;
        std::cout << &(*p1)<< std::endl;
    std::cout << &(*p2) << std::endl;

    const int i = 1;
    int *a = (int *) 0;
    std::cout << (a) << std::endl;

    int ii =1;
    long *lp = static_cast<long *>(&ii);
    return 0;
}

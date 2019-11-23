#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    // int i, &ri = i;
    // i = 5;ri = 10;
    // std::cout << &i << "   "<<  &ri << std::endl;

    double d = 0, &r2 = d;

    int i = 0, &r1 = i;

    std::cout << "d: "<< &d << std::endl;
    std::cout << "r2: "<< &r2 << std::endl;
    
     std::cout << "i: "<< &i << std::endl;    
    std::cout << "r1: "<< &r1 << std::endl;

    r2 = r1;
    std::cout << "r2: "<< &r2 << std::endl;
    std::cout << "r1: "<< &r1 << std::endl;

    return 0;
}

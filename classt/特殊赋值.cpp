#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a = 1;
    int b(a);
    int c= a;

    std::cout << "&a:" << &a <<"; value: " << a << std::endl;
    std::cout << "&b:" << &b << ";value:" << b << std::endl;
    std::cout << "&c:" << &c << ";value:" << c << std::endl;
    return 0;
}

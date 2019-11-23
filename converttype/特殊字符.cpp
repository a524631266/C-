#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    string i = "asd";
    int d = sizeof(i) / 8;
    std::cout << d << std::endl;
    std::cout << ~d << std::endl;
    std::cout << "\x4d" << std::endl;
    return 0;
}

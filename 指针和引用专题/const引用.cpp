#include <iostream>
using std::cout;using std::endl;
int main(int argc, char const *argv[])
{
    int i = 4;
    const int &ii = i;
    i = 5;
    std::cout << ii << std::endl;
    int j{2};
    std::cout << j << std::endl;
    
    double d = 3.14;
    const int iiij = d;
    std::cout << iiij << std::endl;
    return 0;
}

#include <iostream>
int main(int argc, char const *argv[])
{
     int a[] = {2,3,100,6,7,34,454,4,233,23};
     int * b = a;
     int * b1 = &a[0];
    b[1] = 4;
    b1[2] = 7;
    std::cout << *(b1 + 2) << std::endl;
    std::cout << *(a + 2) << std::endl;
    for(int aa : a)
    {
        std::cout << aa << std::endl;
    }
    return 0;
}

#include <iostream>
#define  TYC int
// typedef int TYC;

int main(int argc, char const *argv[]) {
    bool a = 40;
    int i = a;
    i = 3.66;
    TYC aa = 10;
    signed char ii = 230;
    // printf("%d, %d, %d",a, i,ii);
    std::cout << "/* message */" << std::endl;
    printf("%d", aa);
    return 0;
}

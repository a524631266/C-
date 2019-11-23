#include <iostream>
using namespace std;


void swap(int *a, int * b){
    int c = *a;
    *a = *b;
    *b = c;
}
// 别名
void swap2(int &a,int &b) {
    int c = a;
    a = b;
    b = c;
}

void fiddle(int a, int &b) {
    a = a +100;
    b = b+100;
}

inline void swap3(int a,int b);



int main(int argc, char const *argv[])
{
    int a = 10;
    int b = 93;
    swap(&a, &b);
    swap2(a, b);
    std::cout << "a:" << a << ";b:" <<  b<< std::endl;
    swap3(a,b);
    std::cout << "a:" << a << ";b:" <<  b<< std::endl;
    fiddle(a,b);
    
   std::cout << "a:" << a << ";b:" <<  b<< std::endl; 
    return 0;
}

inline void swap3(int a,int b) {
    int c = a;
    a = b;
    b = c;
}
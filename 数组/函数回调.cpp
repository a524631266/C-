#include <iostream>
int compute(int (*func)(int, int),int a,int b) {
    return func(a, b);
};
int  sum( int a, int b) {
    return a + b;
};
int  reduce( int a, int b) {
    return a - b;
};

int main(int argc, char const *argv[])
{
    /* code */
    int sum1 = compute(sum, 1,2);
    std::cout << "sum:"  << sum1<< std::endl;
    int reduce1 = compute(reduce, 1,2);
    std::cout << "reduce:"  << reduce1<< std::endl;
    return 0;
}

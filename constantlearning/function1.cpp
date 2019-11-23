#include <iostream>
using namespace std;
int add(int a = 9,int b = 10)
{
    return a+ b;
}
// 错误add2 第一个参数有默认，其后的参数必须指定参数，否则报错
int add2(int a = 9,int b)
{
    return a+ b;
}

int main(int argc, char const *argv[])
{
    std::cout << add() << std::endl;// 19
    std::cout << add(10) << std::endl; // 20
    return 0;
}

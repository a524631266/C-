#include <iostream>
int main(int argc, char const *argv[])
{
    // int i = 3;
    // int &r1 = i;
    // const int &r2 = i;
    // r1 = 4;
    // std::cout << r2 << std::endl;
    double i = 3.14;
    double &r1 = i;
    const int &r2 = i;
    r1 = 4.45;
    std::cout << r2 << std::endl;

    const double pi = 3.14;
    double p2 = pi; // 正确，因为赋值就是copy，只是copy到一个新的地址
    // double *p3 = &pi; // 错误 ，因为不能通过p3直接草组pi
    const double *p4 = &pi;
    p4 = &p2;
    // *p4 = 6; // 错误

    double *p41 = &p2;
    *p41 = 4.1;
    std::cout << &pi << std::endl;
    std::cout << &p2 << std::endl;
    double *const p421 = &p2; //  不能修改指针本身和所指变量
    *p421 = 5.1; // 可以改变
    // p421 = &p2; // 错误，不能改变
    std::cout << "p2:" <<  p2 << std::endl;
    
    // 常量指针 const p666ointer
    const double *const p42 = &pi; //  不能修改指针本身和所指变量

    const int i2 = 1;
    // int *const p2 = &i2;
    int iu = 2;
    // const int &const r22= iu; // 引用本身不能为const
    int *p1q,*const p2q;

    int null = 0,*p = &null;
    return 0;
}

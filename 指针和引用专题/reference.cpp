#include <iostream>
#include <memory>

using namespace std;


void swap(int &a, int &b){
    int tmp = a;
    a = b;
    b = tmp;
}

int main(int argc, char const *argv[])
{
    int a = 1;
    int b = 2;
    swap(a, b);
    cout << a << endl;
    cout <<  b << endl;

    return 0;
}
/**
 * 
 * 引用只是堆原变量(非对象打指针)进行别名操作
 * 在函数内不直接使用就像在原作用域中直接操作原对象一样
 * 
 * 
 */ 
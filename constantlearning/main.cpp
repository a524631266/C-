// 预定义
#include <iostream>
// std::cout => cout
using namespace std;
int main(int argc, char const *argv[])
{
    /* code */
    const int Price = 30;
    // Price = 39;
    const int *a = &Price;
    // *a = 29;
    int num,total;
    double v,r,h; // 没有初始化,脏变量 == 垃圾变量
    num = 10;
    cout << total << Price << endl; // << 后面的数据流到左值
    r = 2.5;
    h = 3.2;
    v = 3.14159 * r * r *h;
    cout << v << endl;
    cout << &v << endl;
    double * d = &v;
    *d = 2.0;
    cout << (v==2.0) << endl;
    cout << v++<< endl; // 2
     cout << ++v<< endl; // 3

     // c++ 中只有赋值运算,没有赋值语句的说法
    return 0;
}

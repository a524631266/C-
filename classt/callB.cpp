#include <iostream>
#include <math.h>
#include "Point2.h"
class A
{
public:
    A(){};
    ~A(){};
    void setX(int x) {
        this->x = x;
    };
    void alterB(B &b) {
        // b.setX(10);

    };
    void alterB2(const B &b) { // 2.常引用
        // 
    };
private:
    int x;
};

int aa = 10;
void  const setA(){
    aa +=1;
};

int main(int argc, char const *argv[])
{
    // A a;
    B const  b; // 1.常对像
    b.print();
    B b1;
    b1.print();
    // b.setX(1); // 错误 ,找不到setX
    // a.alterB(b); // 错误 类型不匹配
    setA();
    setA();
    std::cout << aa << std::endl;
    return 0;
}

#include <iostream>
#include <math.h>
using namespace  std;
class A{
    friend class B; // 声明一个友元B,那么友元B可以访问自己这个类中的私有变量与私有方法
public:
private:
    int x;
    void display(){
        std::cout << x << std::endl;
    }
};
class B{
public:
    void set(int i);
    void display();
private:
    A a;
};

void B::set(int i) {
    a.x = i;
}
void B::display(){
    a.display();
}

int main(int argc, char const *argv[])
{
    B b;
    b.set(19);
    b.display();
    return 0;
}

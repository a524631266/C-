#include <iostream>
using namespace std;
class Abc{
private:
    int a;
public:
    // 删除copy构造函数
    Abc(const Abc&) = delete;
    // Abc& operator=(const Abc&) = delete;
    Abc(){
        a = 1;
    };
    Abc(const int a):a(a){};
    void print(){
        cout << "a is " << a << endl;
    }

    ~Abc(){
        cout << "destroy an object Abc" << endl;
    }
};
// 2. copy构造已经去除,不能简单的传递对象
void print(Abc abc) {
    abc.print();
};


int main(int argc, char const *argv[])
{
    // 可以使用
    Abc().print();
    // 1. 不可以赋值copy
    Abc ab = Abc();
    // ab.print();
    // 2. 不能传递,因为会涉及copy构造
    print(Abc(1));
    return 0;
}

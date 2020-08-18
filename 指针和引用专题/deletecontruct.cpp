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

int main(int argc, char const *argv[])
{
    Abc().print();
    // Abc ab = Abc();
    // ab.print();
    return 0;
}

#include <iostream>
#include <memory>

using namespace std;

class A { 
private:
    int a;
public:
    A() {
        cout << "create object of A" << endl;
        a = 1;
    }   

    ~A() {
        cout << "destroy an object A" << endl;
    }
    void print() {
        cout << "a is " << a << endl;
    }
};

template <typename V>
class SmartPtr {
private:
    V * v;
public:
    SmartPtr(V* ptr): v(ptr) {}
    ~SmartPtr() {
        cout << "to delete a smart pointer" << endl;
        delete v;
    }
    V* operator->() const{
        return v;
    } 
};

template <typename T>
void func(auto_ptr<T> ap){
    cout << "func" << endl;
};

class Abc{
private:
    int a;
public:
    // 删除copy构造函数
    Abc(const Abc&) = delete;
    // Abc& operator=(const Abc&) = delete;
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
    // --------- 案例1 --------------
    // SmartPtr<A> sp(new A());

    // // int n;
    // // cin >> n;

    // // if (n < 10) 
    // //     return 0;
    
    // sp->print();

    // --------- 案例2 --------------
    // A* ptrA = new A();
    // SmartPtr<A> sp1(ptrA);
    // SmartPtr<A> sp2(ptrA);

    // sp1->print();
    // sp2 ->print();

    // --------- 案例3 --------------
    // A * ptrA = new A();
    // auto_ptr<A> sp1(ptrA);
    // auto_ptr<A> sp2 = sp1;
    // Segmentation fault (core dumped) sp2=sp1会是否sp1的对象
    // sp1->print();
    // sp2->print();

    // // --------- 案例4 --------------
    // A * ptrA = new A();
    // auto_ptr<A> sp1(ptrA);
    // // copy构造 ,在 auto_ptr中的copy构造函数是要释放原先对象的，
    // func(sp1);
    // // 会出现这个错误Segmentation fault (core dumped)
    // sp1->print();

    // // --------- 案例5 --------------
    // 简单构造函数已经被delete了,报no instance of constructor "abc::abc" matches the argument list
    // Abc * a = new Abc();

    // Abc ab = Abc();
    // Abc abc = ab;
    // // ab->print();
    // ab.print();
    // abc.print();

    // // unique_ptr<Abc> abcc(new Abc(2));
    // // abcc->print();
    return 0;
}

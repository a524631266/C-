#include <iostream>
class A{
    public:
        A(){};
        ~A(){};
        void display();
    private:
        int x;
};
class B: public A{
    public:
        B(){};
        ~B(){};
        void display();
};

class C: public B{
    public:
        C(){};
        ~C(){};
        void display();
};

void A::display() {
    std::cout << "Adisplay" << std::endl;
}
void B::display() {
    std::cout << "Bdisplay" << std::endl;
}
void C::display() {
    std::cout << "Cdisplay" << std::endl;
}
void display(A a){ // 编译器根据指针的类型，来确定调用哪个类的函数，如果使用多态性呢？虚函数
    a.display();
}
void display(A *a) {
    (*a).display();
}
int main(int argc, char const *argv[])
{
    /* code */
    A a;
    B b;
    C c;
    display(c);
    display(&c);
    return 0;
}

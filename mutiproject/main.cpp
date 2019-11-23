#include <iostream>
class B;
class A{
    public:
     void someMethod(B &b);
     void callmethod() {
         std::cout << "aaaaaa" << std::endl;
     }
};

 class B{
     public:
     void someMethod(A &a);
};
void A::someMethod(B &b){
    std::cout << "b.someMethod()" << std::endl;
};
void B::someMethod(A &a) {
    std::cout << "B" << std::endl;
    a.callmethod() ;
};
int main(int argc, char const *argv[])
{
    /* code */
    A a;
    B b;
    a.someMethod(b);
    b.someMethod(a);
    return 0;
}

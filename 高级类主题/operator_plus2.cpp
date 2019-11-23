#include <iostream>

class Real {
    public:
        Real(int r):real(r){};
        ~Real(){};
        int real;
};

class Complex{
    public:
        Complex(int r,int i):real(r),image(i){};
        ~Complex(){};
        void display() {
            std::cout << real  << "+"<< image << "i"<< std::endl;
        };
        friend Complex operator + (const Complex &comp,const Complex &comp2) ;
        friend Complex operator + (const Complex &comp,const Real &real1) ;
    private:
        int real;
        int image;
};

Complex operator + (const Complex &comp,const Complex &comp2) {
    int real = comp.real + comp2.real;
    int imag = comp.image + comp2.image;
    return  Complex(real,imag);
}

Complex operator + (const Complex &comp,const Real &real1) {
    int real = comp.real + real1.real;
    int imag = comp.image ;
    return  Complex(real,imag);
}
int main(int argc, char const *argv[])
{
    Complex com(1,2);
    Complex com2(2,9);
    Real real1(10);
    Complex sumcom = com + com2;
    sumcom.display(); //3+11i
    Complex sumcs = com + real1;
    sumcs.display(); //  11+2i
    // Complex sumcs_trans = real1 + com; // 错误，没有重载real1中的操作符
    return 0;
}

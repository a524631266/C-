#include <iostream>
class Complex{
    public:
        Complex(int r,int i):real(r),image(i){};
        ~Complex(){};
        void display() {
            std::cout << real  << "+"<< image << "i"<< std::endl;
        };
         // 参数传引用节省时间，同时又不能操作引用对象，所以用const做底层const（见C++ （第五版）P57）
        Complex operator + (const Complex & com)  const{ // 同时方法内部不能改变成员，所以用cons
               int real = this->real + com.real;
               int image = this->image + com.image;
               return Complex(real, image);
        };
        // 定义
        Complex operator * (const Complex & com)  const;
    private:
        int real;
        int image;
};
//  此时使用先定义，再使用命名空间作用域符号(::) 定义方法，此时是成员函数
Complex Complex::operator*(const Complex & com) const {
    // int real = this->real * com.real - this->image * com.image ;
    // int image = this->image * com.real + this->real * com.image;
    // return Complex(real, image);

    // 此时的方法，可以不用使用对象的copy函数，所以效率会高很多
    return Complex( 
                        real * com.real - image * com.image ,
                        image * com.real + real * com.image
                                 );
}
int main(int argc, char const *argv[])
{
    Complex com(1,2);
    Complex com2(2,9);

    Complex sumcom = com + com2;
    sumcom.display(); // 3 + 11i
    Complex multcom = com * com2;
    multcom.display(); // -16 + 13i
    return 0;
}

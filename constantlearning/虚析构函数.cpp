#include <iostream>

class Father{
    public:
        virtual ~Father(){
            std::cout << "Father ~" << std::endl;
        };
};

class Son: public Father
{
    public:
        ~Son(){ //默认是一种虚析构
            std::cout << "Son ~" << std::endl;
        };
};

class Son1: public Son
{
    public:
        ~Son1(){ //默认是一种虚析构
            std::cout << "Son1 ~" << std::endl;
        };
};
int main(int argc, char const *argv[])
{
    /* code */
    Father *father = new Son1();
    delete father;
    // Son1 ~
    // Son ~
    // Father ~
    return 0;
}

#include <iostream>


class GrandFather{
    public:
        virtual void display(){
            std::cout << "GrandFather:" << a  << std::endl;
        };
    private:
        int a = 2;
};
class Father: public GrandFather
{
    public:
        void display(){
            std::cout << "Father" << a << std::endl;
        };
    private:
        int a = 3;
};
class Son: public Father
{
    // public:
        // void display(){
        //     std::cout << "Son"  << a << std::endl;
        // };
    private:
        int a = 4;
};

void dispaly(GrandFather g) { // 此时这个函数在编译时就确定了
    g.display();
};

// 如果参数是&，其作用效果类似于指针
// void dispaly(GrandFather &g) { // 此时这个函数在编译时就确定了
//     g.display();
// };


void dispaly(GrandFather *g) {
    (*g).display();
};


int main(int argc, char const *argv[])
{
    GrandFather gf;
    Father f;
    Son son;
    dispaly(gf); // GrandFather:2
    dispaly(f); // GrandFather:2
    dispaly(son);   // GrandFather:2
    GrandFather * gf1 = new GrandFather();
    Father *f1 = new Father();
    Son * s1 = new Son();
    dispaly(gf1);// GrandFather:2
    dispaly(f1);// Father3
    dispaly(s1);// Son4
    

    // 以上方法相当于 下面的两个操作
    GrandFather &gf2 = son;
    gf2.display();  // GrandFather:2 ，并没有像java那样会自动类型转换

    GrandFather *gf3= s1;
    (*gf3).display(); //Son4
    std::cout << &(*gf3) << std::endl;
    std::cout << &(*s1) << std::endl;
    return 0;
}

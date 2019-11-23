#include <iostream>
using std::cout;
void fun(int i){cout<<"1";};
void fun(char *p){cout<<"2";};
int main()
{
    char *i = NULL;
    fun(i);  //输出1，c++中NULL为整数0
    fun(nullptr);//输出2，nullptr 为空指针常量。是指针类型
}
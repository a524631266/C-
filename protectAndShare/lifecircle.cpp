#include <iostream>
using namespace std;
void func(){
    static int a = 0;
    a+=1;
    std::cout << "a:" 
    << a << std::endl;
}
int main(int argc, char const *argv[])
{
    /* code */
    func();
    func();
    return 0;
}

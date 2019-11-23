#include <iostream>
using namespace std;
class ClassInfo{
public:

    ClassInfo(string name,int age,bool pass):name(name),age(age),pass(pass){};
    ClassInfo(string name,int age,char grade):name(name),age(age),grade(grade){};
    ~ClassInfo() {
    };
    void showName();
private:
    string name;
    int age;
    union
    {
        char grade;
        int code;
        bool pass;
    } ;
};
void ClassInfo::showName() {
    std::cout << "classinfo::name:::::" << this->name  <<":::::age:" << this->age
     << ":::: code:"  <<  this->code
     << ":::: grade:"  <<  this->grade
     << ":::: pass:"  <<  this->pass
     << std::endl;
};
int main(int argc, char const *argv[])
{
    ClassInfo clas("zhangll",10,true);
    clas.showName();
    ClassInfo clas2("zhangll",10,'2');
    clas2.showName();
    return 0;

}

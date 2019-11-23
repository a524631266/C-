#include <iostream>
// 群体是什么？
// 群体有些是线性关系（链表，list），有些是非线性关系（图，树）
// 直接访问（索引访问） 顺序访问
// 直接访问群体（数组类），根据数据成员的是否可以扩充性，分静态数据与动态数据

// 静态数据是编译期间就确定的，运行时不再扩展
// 动态数据类型，在运行时可以改变，但是开销较大（vector）
template <typename T>
class Store {
    private:
        T items;
    public:
        void putItem(T item){
            items = item;
        };
        void display(){
            std::cout << items << std::endl;
        };
};
int main(int argc, char const *argv[])
{
    Store<int> i;
    i.putItem(1);
    Store<std::string> s;
    s.putItem("11111");
    i.display();  
    s.display();
    return 0;
}

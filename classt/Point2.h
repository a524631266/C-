class B
{
public:
static const int constb; // 静态成员可以在外部初始化
const int constb2 ;
    B():constb2(10){};  // 非静态成员必须初始化
    ~B(){};
    void setX(int x) {
        this->x = x;
    };
    void print();
    void print() const; // 4常函数
private:
    int x;
};
// hpp 中必须初始化const类变量
const int B::constb = 1000; // 初始化
void B::print() const{
    // x = 2; // B::x’ in read-only object 不能修改x
    std::cout << "const 对象可以调用" << std::endl;
};
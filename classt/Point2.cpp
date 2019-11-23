#include "Point2.h"

const int B::constb = 1000; // 初始化
// void B::print() const{
//     // x = 2; // B::x’ in read-only object 不能修改x
//     std::cout << "const 对象可以调用" << std::endl;
// };
void B::print(){
        std::cout << "普通对象可以调用 constb:"<< constb << std::endl;  
};
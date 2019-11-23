#include <iostream>
template <typename T>
void swap(T &left, T& right) {
        T  temp = left;
        left  = right;
        right = temp;
}
// a = 97
template <typename T>
void patition_main(T & arr, int n = 10 ) {
    int slow = 0;
    
    for(int i = 0 ; i < n ; i++){
        int fast = i;
        int hasswap = false;
        while(fast  > slow && arr[fast] >=97 && arr[--fast] < 97){
            swap(arr[fast], arr[fast + 1]);
            hasswap = true;
        }
        if (hasswap) slow++;
    }
} 
int main(int argc, char const *argv[])
{
    char str[] = {'b','P','F','a','B','c','A','z'};
    // 'a' =  97 , 
    patition_main(str,8);
    std::cout << str<< std::endl;
    return 0;
}

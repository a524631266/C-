#include <iostream>
template <class T>
void swap(T &a, T &b){
    T temp = a;
    a = b;
    b = temp;
}


template <class T>
void insertSort(T *p, T n){
    for (T i = 1; i < n; i++)
    {
        T i1 = i;
        T now = p[i];
        for (T j = i - 1; j >= 0 ; j--)
        {
            // 稳定排序
            if(p[j]> now) {
                // swap(p[j], p[i1--]);
                p[j+1] = p[j]; 
            }else {
                p[j + 1] = now;
                break;
            }
        }
    }
}

int main(int argc, char const *argv[])
{
    /* code */
    int a[] = {2,3,20,6,7,34,454,4,233,23};
    int n = 10;
    
    insertSort(a, n);
    
    
    for(int aa : a)
    {
        std::cout << aa << std::endl;
    }
    return 0;
}

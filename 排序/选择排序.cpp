#include <iostream>
template <class T>
void swap(T &a, T &b){
    T temp = a;
    a = b;
    b = temp;
}


template <class T>
void selectSort(T *p, T n){
    for (T i = 0; i < n; i++)
    {
        // 右边最小的
        T min = i;
        // std::cout << "start:" << min << std::endl;
        for (T j = i+1; j < n; j++)
        {
            if(p[min] > p[j]){
                min = j;
            }
        }
        // std::cout <<"p[i]:"<< p[i] << "---> min:"<<  min<< std::endl;
        // p[i] = min;
        swap(p[i],p[min]);
    }
}

int main(int argc, char const *argv[])
{
    /* code */
    int a[] = {2,3,20,6,7,34,454,4,233,23};
    int n = 10;
    
    selectSort(a, n);
    
    
    for(int aa : a)
    {
        std::cout << aa << std::endl;
    }
    return 0;
}

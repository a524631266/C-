#include <iostream>
using namespace std;

void bucketSorted( int a[], int n){
    
    int max_i = 0;
    for (int i = 0; i < n; i++)
    {
        if(max_i < a[i]) max_i = a[i];
    }
    int nums_buckets = max_i + 1;
    // 创建 max_i 个桶用来装桶数据 初始化为0
    int *buckets= new int[nums_buckets];
    for(int i = 0; i < n;i++) {
        buckets[a[i]]++;
    }
    int j = 0;
    for(int i = 0; i < nums_buckets;i++) {
        while(buckets[i]){
            a[j] = i;
            j++;
            buckets[i]--;
        }
    }
    for(int i = 0; i < n;i++) {
        std::cout << a[i] << std::endl;
    }
    // std::cout << max_i << std::endl;
}

int main(int argc, char const *argv[])
{
    int v[] = {1,2,3,5,8,7,2,4,6,19,21,1,2,4,5,3,2,1,2};
    bucketSorted(v,19);
    // std::cout << v[0] << std::endl;
    
    return 0;
}


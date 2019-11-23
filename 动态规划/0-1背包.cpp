#include <iostream>
int maxX = 0;
const int weight[] = {2, 2, 4, 6 ,3,7 }; // 不可分割物品的重量
const int n = 6; // 总共有6个物品
const int w = 22; // 背包最大承受重量
// 动态规划的第一标准是分n阶段，每一个阶段保留状态
// 目前保留状态策略为创建status[i阶段][m状态]
int status[6][23] = {{0}};
void initstatus(int a, int b) {
    for (int i = a - 1; i >= 0; i--)
    {
        for (int j = b - 1; j >= 0; j--)
        {
            status[i][j] = false;
        }
    };
};

void searchmaxX(){ // i = i stage and  cw = current weight and  i>=0
        for(int i = 0; i < n; i++) {
            status[i][0] = true;
        }
        status[0][weight[0]] = true;
        // 每一步都需要确定是否装入
        for(int j = 1;j < n;j++){
            for(int jj = 0; jj <= w; jj ++) {
                if(status[j-1][jj]) {
                    status[j][jj] = true;
                    if(jj + weight[j] <= w) {
                         status[j][jj + weight[j] ]  = true;
                    }
                }
            }
        }
};

void printMatrix(int a, int b){
    for (int i =  0; i < a; i++)
    {
        for(int j = 0 ; j < b ; j++) {
            std::cout << status[i][j] << " ";
        }
        std::cout << "  " << std::endl;
    }
}
int main(int argc, char const *argv[])
{
    // To init status to false;
    initstatus(n,w + 1);
    searchmaxX();
    std::cout << "" << std::endl;
    printMatrix(n, w +1);
    return 0;
}

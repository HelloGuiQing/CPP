#include <iostream>
/*二维数组定义*/


int main(int argc, char** argv)
{
    // 方式1
    // int array[2][3];
    // array[0][0] = 1;
    // array[0][1] = 2;
    // array[0][2] = 3;
    // array[1][0] = 4;
    // array[1][1] = 5;
    // array[1][2] = 6;

    // 方式2
    // int array[2][3] = {{1, 2, 3}, {4, 5, 6}};

    // 方式3
    // int array[2][3] = {1, 2, 3, 4, 5, 6};

    // 方式4
    // int array[][3] = {1, 2, 3, 4, 5, 6};
    int array[][3] = {1, 2, 3, 4};  // 缺失的补0


    // 打印数组
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            std::cout << array[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

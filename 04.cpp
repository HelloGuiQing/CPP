#include <iostream>


int main(int argc, char** argv)
{
    int array[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    std::cout << "二维数组的内存大小：" << sizeof(array) << std::endl;
    std::cout << "二维数组第一行的内存大小：" << sizeof(array[0]) << std::endl;
    std::cout << "二维数组第一个元素的内存大小：" << sizeof(array[0][0]) << std::endl;

    std::cout << "二维数组首地址：" << (long)array << std::endl;
    std::cout << "二维数组第一行的首地址：" << (long)array[0] << std::endl;
    std::cout << "二维数组第一个元素的首地址：" << (long)&array[0][0] << std::endl;

    return 0;
}
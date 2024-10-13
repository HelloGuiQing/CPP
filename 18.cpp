#include <iostream>
// 指针和数组
// 利用指针访问数组


int main(int argc, char** argv)
{
    int array[] = {0, 1, 2, 3, 4, 5};

    int * p = array;  // 定义一个指针，指向数组array的首地址
    std::cout << "数组的第一个元素是：" << *p << std::endl;

    for (int i = 0; i < sizeof(array) / sizeof(array[0]); i++)
    {
        std::cout << *p << std::endl;
        p++;  // 因为p是一个整型指针，往后+1，刚好就是4个字节
    }

    return 0;
}
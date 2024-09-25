#include <iostream>
/*指针的内存大小
    在32位操作系统中，不管什么类型的指针变量，都是占用4个字节
    在64位操作系统中，不管什么类型的指针变量，都是占用8个字节
*/


int main(int argc, char** argv)
{
    std::cout << "sizeof(int*) = " << sizeof(int*) << std::endl;
    std::cout << "sizeof(short*) = " << sizeof(short*) << std::endl;
    std::cout << "sizeof(long*) = " << sizeof(long*) << std::endl;
    std::cout << "sizeof(float*) = " << sizeof(float*) << std::endl;
    std::cout << "sizeof(double*) = " << sizeof(double*) << std::endl;

    int a = 10;
    int *p = &a;

    std::cout << "a的地址为" << &a << std::endl;
    std::cout << "p = " << p << std::endl;

    return 0;
}
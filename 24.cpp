#include <iostream>


int main(int argc, char** argv)
{
    std::cout << sizeof(int*) << std::endl;
    std::cout << sizeof(float*) << std::endl;
    std::cout << sizeof(double*) << std::endl;
    std::cout << sizeof(char*) << std::endl;

    // 在x86操作系统中，指针占用4个字节；在x64操作系统中，指针占用8个字节。

    return 0;
}
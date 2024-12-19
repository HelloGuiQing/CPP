#include <iostream>


int main(int argc, char** argv)
{
    // 空指针：指向内存地址编号为0的空间的指针，一般用于初始化
    int* p = nullptr;

    // 空指针不能被访问
    *p = 100;
    std::cout << *p << std::endl;  // 出现段错误了

    return 0;
}
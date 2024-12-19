#include <iostream>


int main(int argc, char** argv)
{
    // 野指针：指向非法内存空间的指针
    int* p = (int*)0x0000;  // 随便指向一个空间，该空间是不能被访问的

    std::cout << *p << std::endl;  // 出现段错误了

    return 0;
}
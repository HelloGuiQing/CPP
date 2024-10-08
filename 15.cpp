#include <iostream>
/*空指针
    1.什么是空指针？
    - 指向内存中编号为0的空间的指针变量
    2.空指针的作用是什么？
    - 用来初始化指针变量
    3.注意事项
    - 空指针指向的内存空间是不可以访问的，因为编号为0～255的内存空间是操作系统占用的，我们没有访问权限
*/


int main(int argc, char** argv)
{
    std::cout << "NULL表示的内存地址编号为" << NULL << std::endl;

    int* p = NULL;

    /* 这里p是指针变量，其指向的内存地址编号为0
    *p=100是将100写入指针变量p指向的内存地址中，我们没有权限操作这块内存，会提示段错误
    *p是对指针变量p进行解引用操作，对指针变量p的操作是不被允许的，也会提示段错误
    */
    *p = 100;
    std::cout << "*p = " << *p << std::endl;

    return 0;
}
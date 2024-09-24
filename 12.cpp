#include <iostream>

/*
    指针的练习
    在C++中，声明一个整型指针的方式有int* p或者int *p，这表示p是一个指向整数的指针，这里的*是
    类型修饰符，用来声明p是一个指针变量。而*p表示的是指针所指向的数据，也就是通过指针访问其指向
    的内存地址的内容。
*/

int main(int argc, char** argv)
{
    int a = 10;
    std::cout << "a = " << a << std::endl;
    std::cout << "a的地址为: " << &a << std::endl;

    int *p;
    p = &a;
    std::cout << "p = " << p << std::endl;
    std::cout << "*p = " << *p << std::endl;

    *p = 1000;
    std::cout << "a = " << a << std::endl;
    std::cout << "a的地址为: " << &a << std::endl;

    return 0;
}
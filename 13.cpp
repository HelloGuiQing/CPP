#include <iostream>


int main(int argc, char** argv)
{
    int a = 10000;
    int *p = &a;
    /*
        问chatgpt：int *p到底是在声明*p还是在声明p？
        回答：在C++语句int *p中，实际上是在声明一个指针变量p。这里的*是类型修饰符，它说明
        p是一个指针，其指向的类型是int。所以p是指针变量的名称，而*p表示指针的解引用操作，即访问
        指针所指向的整型变量的值。但是整个声明的核心是声明了一个名为p的指针。
        总结来说，int *p是在声明一个指针变量p，而非直接声明*p。*p是关于如何通过指针使用它所指向
        的值的表述，而不是声明本身的一部分。
    */

    std::cout << "a的地址为" << &a << std::endl;
    std::cout << "p = " << p << std::endl;
    std::cout << "*p = " << *p << std::endl;

    return 0;
}
#include <iostream>


int main(int argc, char** argv)
{
    int a = 10;
    int* p = &a;

    std::cout << "a的地址是" << &a << std::endl;
    std::cout << "p = " << p << std::endl;
    std::cout << "*p = " << *p << std::endl;

    // p就是a的地址
    // *p就是a的值

    return 0;
}
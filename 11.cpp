#include <iostream>


void swap(int a, int b)
{
    std::cout << "函数内，交换前：" << std::endl;
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;

    int temp = a;
    a = b;
    b = temp;

    std::cout << "函数内，交换后：" << std::endl;
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
}


int main(int argc, char** argv)
{
    int a = 10;
    int b = 20;

    std::cout << "函数外，交换前：" << std::endl;
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;

    swap(a, b);

    std::cout << "函数外，交换后：" << std::endl;
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;

    return 0;
}
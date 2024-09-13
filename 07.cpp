#include <iostream>
/*值传递时，如果形参发生改变，并不会影响实参*/


void swap(int num1, int num2)
{
    std::cout << "交换之前: " << std::endl;
    std::cout << "num1 = " << num1 << std::endl;
    std::cout << "num2 = " << num2 << std::endl;

    int temp = num1;
    num1 = num2;
    num2 = temp;

    std::cout << "交换之后: " << std::endl;
    std::cout << "num1 = " << num1 << std::endl;
    std::cout << "num2 = " << num2 << std::endl;
}


int main(int argc, char** argv)
{
    int a = 10, b =20;

    std::cout << "调用swap函数之前: " << std::endl;
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b <<std::endl;

    swap(a, b);  // 在这个函数中，对形参a、b的值进行了交换，但是实参a、b的值没有发生变化

    std::cout << "调用swap函数之后: " << std::endl;
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;

    return 0;
}
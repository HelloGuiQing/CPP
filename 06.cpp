#include <iostream>
/*函数定义的小括号里的参数为形参，函数调用时传入的参数为实参*/


int add(int a, int b)
{
    int c = a + b;
    return c;
}


int main(int argc, char** argv)
{
    int num1 = 10;
    int num2 = 20;

    int sum = add(num1, num2);
    std::cout << "sum = " << sum << std::endl;

    return 0;
}
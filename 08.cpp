#include <iostream>


// 无参数、无返回值
void test01()
{
    std::cout << "hello, world." << std::endl;
}

// 有参数、无返回值
void test02(int a)
{
    std::cout << "a = " << a << std::endl;
}

// 无参数、有返回值
int test03()
{
    return 1000;
}

// 有参数、有返回值
int test04(int a)
{
    return a;
}

int main(int argc, char** argv)
{
    test01();

    test02(100);

    int num1 = test03();
    std::cout << "num1 = " << num1 << std::endl;

    int num2 = test04(1000);
    std::cout << "num2 = " << num2 << std::endl;

    return 0;
}
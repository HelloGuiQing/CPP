#include <iostream>

/*
    值传递和地址传递
    1.值传递不会改变实参的值
    2.地址传递会改变实参的值
*/


void swap01(int x, int y)
{
    int temp = x;
    x = y;
    y = temp;
}

void swap02(int * p1, int * p2)
{
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}


int main(int argc, char** argv)
{
    // 值传递
    int a1 = 10;
    int b1 = 20;

    swap01(a1, b1);
    std::cout << "a1 = " << a1 << std::endl;
    std::cout << "b1 = " << b1 << std::endl;

    // 地址传递
    int a2 = 10;
    int b2 = 20;

    swap02(&a2, &b2);
    std::cout << "a2 = " << a2 << std::endl;
    std::cout << "b2 = " << b2 << std::endl;

    return 0;
}
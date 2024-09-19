#include <iostream>

/*函数的声明*/

int max(int, int);


int main(int argc, char** argv)
{
    std::cout << "max(10, 20) = " << max(10, 20) << std::endl;
    return 0;
}


int max(int a, int b)
{
    return a > b ? a : b;
}
#include <iostream>

int max(int a, int b)
{
    return a > b ? a : b;
}


int main(int argc, char** argv)
{
    int a = 10;
    int b = 20;

    std::cout << max(a, b) << std::endl;
    return 0;
}
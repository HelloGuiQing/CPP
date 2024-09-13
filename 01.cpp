#include <iostream>

/*
    数组逆置
*/


int main(int argc, char** argv)
{
    int array[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++)
    {
        std::cout << array[i] << std::endl;
    }

    std::cout << "----------------" << std::endl;

    int temp  = -1;
    int left  = 0;
    int right = sizeof(array) / sizeof(array[0]) - 1;

    while (left < right)
    {
        temp = array[left];
        array[left] = array[right];
        array[right] = temp;

        left++;
        right--;
    }

    for (int i = 0; i < 5; i++)
    {
        std::cout << array[i] << std::endl;
    }

    return 0;
}
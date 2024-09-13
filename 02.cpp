#include <iostream>

/*
    冒泡排序
*/


int main(int argc, char** argv)
{
    int array[] = {5, 11, 7, 9, 13, 45, 23, 90, 34, 76};

    int temp = -1;
    int array_len = sizeof(array) / sizeof(array[0]);

    for (int j = 0; j < array_len; j++)
    {
        for (int i = 0; i < array_len - 1 - j; i++)
        {
            if (array[i] > array[i + 1])
            {
                temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
            }
        }
    }

    for (int i = 0; i < array_len; i++)
    {
        std::cout << array[i] << std::endl;
    }

    return 0;
}
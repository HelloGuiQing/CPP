#include <iostream>
// 指针、数组、函数


// void bubble_sort(int * array, int len)
void bubble_sort(int array[], int len)
{
    for (int i = 0; i < len - 1; i++)
    {
        for (int j = 0; j < len - 1 - i; j++)
        {
            if (array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}


int main(int argc, char** argv)
{
    int array[] = {4, 3, 6, 9, 1, 2, 10, 8, 7, 5};
    bubble_sort(array, sizeof(array) / sizeof(array[0]));
    std::cout << "array首地址是: " << array << std::endl;
    for (int i = 0; i < sizeof(array) / sizeof(array[0]); i++)
    {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
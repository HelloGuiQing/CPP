#include <iostream>
/*打印成绩*/


int main(int argc, char** argv)
{
    int scores[3][3] = {
        {100, 100, 100},
        {90,  50,  100},
        {60,  70,  80 }
    };

    std::cout << "-------------------" << std::endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            std::cout << scores[i][j] << "\t";
        }
        std::cout << std::endl;
    }

    std::cout << "-------------------" << std::endl;

    std::string names[3] = {"张三", "李四", "王五"};

    for (int i = 0; i < 3; i++)
    {
        int score = 0;
        for (int j = 0; j < 3; j++)
        {
            score += scores[i][j];
        }
        std::cout << names[i] << "的总成绩是：" << score << std::endl;
    }
    std::cout << "-------------------" << std::endl;

    return 0;
}
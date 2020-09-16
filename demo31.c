/*
 * 猜数字
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int count = 6;
    int guess;
    srand(time(NULL));
    // 使用 rand() 生成随机数之前需要用随机发生器的初始化函数
    // srand(unsigned seed)（也位于 stdlib.h 中）进行伪随机数序列初始化
    int num = rand() % 10 + 1;
    printf("Please guess a number:\n");
    while (count > 0)
    {
        scanf("%d", &guess);
        if (guess == num)
        {
            printf("Wonderful, you are right!\n");
            break;
        } else if (guess > num)
        {
            printf("Too high\n");
        } else {
            printf("Too low\n");
        }
        count--;
    }
    printf("The number is %d \n", num);
    printf("GAME OVER!\n\n");
    return 0;
}
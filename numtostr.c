#include <stdio.h>

int main(void)
{
    int num = 0;
    int indx = 0;
    char buff[10];
    printf("Enter a number:");
    scanf("%d", &num);
    do
    {
        buff[indx] = num % 10 + '0';
        num /= 10;
        indx++;
    } while (num != 0);
    buff[indx] = '\0';
    printf("buff = %s\n", buff);
    return 0;
}
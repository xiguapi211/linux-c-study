#include <stdio.h>
#define LEN 12

int main()
{
    char words[LEN];
    printf("Enter a string :\n");
    fgets(words, LEN, stdin);
    printf("Show your string by puts(), then fputs() :\n");
    // fgets 会把回车也保存到变量中。而puts会再自主的添加一个回车，所以实际展示会显示两行
    puts(words);
    fputs(words, stdout);
    // more input
    printf("Enter another string :\n");
    fgets(words, LEN, stdin);
    printf("Show your string by puts(), then fputs() :\n");
    puts(words);
    fputs(words, stdout);
    printf("\nDone!\n");
    return 0;
}

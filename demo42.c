#include <stdio.h>
#include <string.h>
#define SIZE 8

int main()
{
    char *sour = "Linux is a good OS!";
    char *p;
    char sub[SIZE];
    char *ret;

    puts(sour);
    puts("Enter sub str:");
    ret = fgets(sub, SIZE, stdin);
    if (ret != NULL)
    {
        sub[strlen(sub) - 1] = '\0';
        printf("sub str is %s, len is %td\n", sub, strlen(sub));
        p = strstr(sour, sub);
        if (p != NULL)
        {
            printf("get %s\n", p);
        }
        else
        {
            printf("Not found!\n");
        }
    }
    else
    {
        puts("Get sub error!\n");
    }
    return 0;
}
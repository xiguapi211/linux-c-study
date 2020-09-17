#include <stdio.h>
#include <string.h>
#define SIZE 80

char *s_gets(char*, int);

int main()
{
    char flower[SIZE];
    char addon[] = "a smell like old shoes.";
    puts("Whate is your favorite flower?");
    if (s_gets(flower, SIZE))
    {
        strcat(flower, addon);
        puts(flower);
        puts(addon);
    }
    puts("bye!");
    return 0;
}

char *s_gets(char *str, int n)
{
    char *ret_val;
    int i = 0;
    ret_val = fgets(str, n, stdin);
    printf("str len is %td\n", strlen(str));
    // fgets fail return NULL
    if (ret_val)
    {
        while (str[i] != '\n' && str[i] != '\0')
        {
            i++;
        }
        if (str[i] == '\n')
        {
            str[i] = '\0';
        }
        else
        {
            while (getchar() != '\n')
            {
                continue;
            }
            
        }
    }
    return ret_val;
}
#include <stdio.h>
#include <string.h>

#define SIZE 18
#define QUIT "quit"

int main()
{
    char word[SIZE];
    while (1)
    {
        puts("Enter a string ('quit' to exit):");
        if (fgets(word, SIZE, stdin))
        {
            printf("size of word is : %zd\n", strlen(word));
            if (word[strlen(word) - 1] == '\n')
            {
                word[strlen(word) - 1] = '\0';
            }
            if (strcmp(word, QUIT) != 0)
            {
                puts(word);
            }
            else
            {
                break;
            }
            
        }
        else
        {
            puts("input error!");
            break;
        }

    }
    puts("Bye~");
    return 0;
}
#include <stdio.h>
#include <string.h>

#define MAX_TIT 32
#define MAX_AUT 16

void s_gets(char *st, int max);

struct book {
    char title[MAX_TIT];
    char author[MAX_AUT];
    float value;
};

int main()
{
    struct book lib_book;
    printf("Please enter the book title\n.");

    return 0;
}

void s_gets(char *st, int max)
{
    
}
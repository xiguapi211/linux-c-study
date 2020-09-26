#include <stdio.h>
#include <string.h>

void fit(char *, unsigned size);

int main()
{
    char msg[] = "Things should be as simple as possible,"
        "but not simpler.";
    puts(msg);
    fit(msg, 38);
    puts(msg);
    // move
    puts(msg + 39);
    return 0;
}

void fit(char *pstr, unsigned size)
{
    if (strlen(pstr) > size)
    {
        pstr[size] = '\0';
    }
}
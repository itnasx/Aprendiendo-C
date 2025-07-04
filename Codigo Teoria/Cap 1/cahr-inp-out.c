#include <stdio.h>

int main()
{
    int c;

    c = getchar();
    while(c != EOF){
        putchar(c);
        c = getchar();
    }
    printf("se termina el programa");
}
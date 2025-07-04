#include <stdio.h>

int main()
{
    int c;

    /*Como lo viene diciendo el libro. Todo en C es un entero, incluso EOF, por lo que se puede comparar con
    cualquier entero que querramos. Todo devuelve 1, excepto cuando presionamos Control-Z (tal vez dependiendo
    del sitema operativo, la combinacion de teclas cambia)*/
    c = (getchar() != EOF);
    printf("%d",c);
}
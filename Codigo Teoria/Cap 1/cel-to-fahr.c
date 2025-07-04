#include <stdio.h>

int main()
{
    int fahr, celsius;
    int lower, upper, step;
    float celsius2,fahr2;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    printf("Esta tabla muestra dividiendo por 9 al final:\n");
    while(fahr <= upper){
        celsius = 5 * (fahr - 32) / 9;
        printf("%d\t%d\n",fahr,celsius);
        fahr = fahr + step;
    }

    fahr2 = lower;
    printf("Esta tabla muestra dividiendo por 9 al princio:\n");
    while(fahr2 <= upper){
        celsius2 = (5.0/9) * (fahr2 - 32);
        printf("%3.0f\t%6.1f\n",fahr2,celsius2);
        fahr2 = fahr2 + step;
    }

    printf("Ciclo for:\n");
    for (fahr = 0; fahr <= 300; fahr += 20)
        printf("%3d %6.1f\n",fahr,(5.0/9.0) * (fahr2 - 32));


    

    //este comentario lo agrego desde la notebook jejeje

}

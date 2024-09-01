#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, i, j;

    for(i = 0;i < 11;i++) {
        printf("tabuda do %d\n", i);
        for(j = 0; j < 11;j++){
            int resultado = j * i;
            printf("%d x %d = %d\n", j, i, resultado);
        }
        printf("\n");
    }
    return 0;
}

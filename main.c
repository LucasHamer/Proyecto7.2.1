#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matriz[3][3],matriz2[3][3];
    int x,i,num;

    printf("Ingrese numero a multiplicar: ");
    scanf("%d",&num);

    for(x=0;x<3;x++)
    {
        for(i=0;i<3;i++)
        {
            printf("Ingrese fila %d y columna %d: ",x,i);
            scanf("%d",&matriz[x][i]);
        }
    }

    for(x=0;x<3;x++)
    {
        for(i=0;i<3;i++)
        {
            matriz2[x][i]=matriz[x][i]*num;
        }
    }

    for(x=0;x<3;x++)
    {
        printf("\n \n \n");
        for(i=0;i<3;i++)
        {
            printf(" %d",matriz2[x][i]);
        }
    }
    return 0;
}

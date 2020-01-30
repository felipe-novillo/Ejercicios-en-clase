#include <stdio.h>
#define tam 2

void lectura(int[][tam],int);
void imprimir(int[][tam],int);
void main()
{
	int matriz[tam][tam];
	lectura(matriz,tam);
	imprimir(matriz,tam);
}

void lectura(int matriz[][tam],int filas)
{
	int i=0,j;
	while(i<tam)
	{
		j=0;
		while(j<tam)
		{
			printf("Ingrese el elemento [%d][%d]:",i,j);
			scanf("%d",&matriz[i][j]);
			j++;
		}
		i++;
	}
}

void imprimir(int matriz[][tam],int filas)
{
	int i=0,j;
	while(i<tam)
	{
		j=0;
		while(j<tam)
		{
			if(i==j)
			printf("[%d][%d]=%d\n",i,j,matriz[i][j]);
			j++;
		}
		i++;
	}
}

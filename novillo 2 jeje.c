/* Realizar un programa con dos funciones par inicializar un arreglo e ingresar datos usando punteros */
#include<stdio.h>
void inicializarArreglo(int[],int *);
void ingresoElementos(int[],int,int *);
void main()
{
	int arreglo[]={2,4,5,-1},*p,tam;
	inicializarArreglo(arreglo,p);
	printf("Ingrese el tamanio del arreglo");
	scanf("%d",&tam);
	ingresoElementos(arreglo,tam,p);

}

void inicializarArreglo(int arreglo[],int *p)
{
	int i=0;
	p=arreglo;
	while(i<4)
	{
	 printf("%d\n",*p++);
	 i++;	
	}
}

void ingresoElementos(int arreglo[],int tam,int *p)
{
	int i=0;
	while(i<tam)
	{
		printf("Ingrese el elemento:");
		scanf("%d",&arreglo[i]);
		i++;	
	}
	p=arreglo;
	i=0;
	while(i<tam)
	{
		printf("%d\n",*p++);
		i++;	
	}
	
	
	
	
	
}



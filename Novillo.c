/*Realizar un programa que permita ingresar una frase, un numero entero y un  numero flotante*/
#include<stdio.h>
void ingresoDatos(char[],int,float,char *,int *,float *);
void main()
{
	char frase[10],*fra;
	int num,*n;
	float numero,*n1;
	printf("Ingrese la frase:");
	gets(frase);
	printf("Ingrese un numero entero:");
	scanf("%d",&num);
	printf("Ingrese un numero flotante:");
	scanf("%f",&numero);
	ingresoDatos(frase,num,numero,fra,n,n1);
	
}

void ingresoDatos(char frase[],int num,float numero,char *fra,int *n,float *n1)
{
	fra=frase;
	n=&num;
	n1=&numero;
	printf("Frase:%s\nNumero Entero:%d\nNumero Flotante:%f\n",fra,*n,*n1); 
}

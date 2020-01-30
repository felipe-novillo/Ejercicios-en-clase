/*Realizar un programa con funciones que permita generar la serie de los n numeros pares y la tabla de multiplicar de cualquier numero*/

#include<stdio.h>
void Ingresodatospares(int);
void Ingresodatostabla(int,int);
void Seriepares(int);
void Tablamultiplicar(int,int);
FILE *archivo; //Declaracion de variable global

void main()
{
 int cantnum,lim,tabla;
 archivo=fopen("datos.txt","w");
  Ingresodatospares(cantnum);
  Seriepares(cantnum);
  Ingresodatostabla(tabla,lim);
  Tablamultiplicar(tabla,lim);
	
} 


void Ingresodatospares(int cantnum)
{
	printf("Ingrese la cantidad de numeros:");
	fputs("Ingrese la cantidad de numeros:",archivo);
	scanf("%d",&cantnum);
	fprintf(archivo,"%d",cantnum);
	Seriepares(cantnum);
	
}
void Ingresodatostabla(int tabla,int lim )
{
	printf("Ingrese la tabla de multiplicar:");
	fputs("Ingrese la tabla de multiplicar:",archivo);
	scanf("%d",&tabla);
	fprintf(archivo,"%d\n",&tabla);
	printf("Ingrese el limite:");
	scanf("%d",&lim);
	fputs("Ingrese el limite:",archivo);
	fprintf(archivo,"%d\n",&lim);
	
}

void Seriepares(int cantnum)
{
  int cont=1,par=0;
  while(cont<=cantnum){
  	par=par+2;
  	printf("%d\n",par);
  	fprintf(archivo,"%d\n",par);
  	cont++;
  }
	
}

void Tablamultiplicar(int tabla ,int lim)
{
	int cont=1,mult=1;
	while(cont<=lim)
	{
		mult=tabla*cont;
		printf("%d x %d = %d",tabla,cont,mult);
		fprintf(archivo,"%d x %d = %d",tabla,cont,mult);
		cont++;
	}
}







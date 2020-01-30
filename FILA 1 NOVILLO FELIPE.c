/******************************************************************************

Realizar un progrma con funciones que permitan generar una serie de n numeros pares 
y la tabla de multiplicar de cualquier numero 

*******************************************************************************/
#include <stdio.h>

void ingresoDatosPares(int);
void ingresoDatosTabla(int,int);
void seriePares(int);
void tablaMultiplicar(int, int);
void ingresoFactorial(int);
void Factorial(int);
FILE *archivo;//declaracion de variable global

void main()
{
 int cantNum,lim,tabla,num;
 archivo=fopen("datos.txt","w");
 ingresoDatosPares(cantNum);
 ingresoDatosTabla(tabla,lim);
 ingresoFactorial(num);
 
}

void ingresoDatosPares(int cantNum)
{
    printf("Ingrese la cantidad de numeros: ");
    fputs("Ingrese la cantidad de numeros: ",archivo);
    scanf("%d",&cantNum);
    fprintf(archivo,"%d\n",cantNum);
    seriePares(cantNum);
}

void seriePares(int cantNum)
{
    int cont=1,par=0;
    
    while(cont<=cantNum)
    {
        par=par+2;
        printf("%d\n",par);
        fprintf(archivo,"%d\n",par);
        cont++;
    }
}

void ingresoDatosTabla(int tabla,int lim)
{
    printf("Ingrese el numero para la tabla de multiplicar: ");
    fputs("Ingrese el numero para la tabla de multiplicar: ",archivo);
    scanf("%d",&tabla);
    fprintf(archivo,"%d\n",tabla);
    printf("Ingrese el limite de la tabla: ");
    fputs("Ingrese el limite de la tabla: ",archivo);
    scanf("%d",&lim);
    fprintf(archivo,"%d\n",lim);
    tablaMultiplicar(tabla,lim);
}

void tablaMultiplicar(int tabla,int lim)
{
    int mult=1,cont=1;
    
    while(cont<=lim)
    {
        mult=tabla*cont;
        printf("%d X %d = %d\n", tabla,cont,mult);
        fprintf(archivo,"%d X %d = %d\n", tabla,cont,mult);
        cont ++;
    }
}

void ingresoFactorial(int num){
	
 printf("Ingrese el numero para factorial:");
 fputs("Ingrese el numero para factorial:",archivo);
 scanf("%d",&num);
 fprintf(archivo,"%d\n",num);
 while(num<=0)
 {
    printf("Datos erroneos ingresar numero positivo:");
    scanf("%d",&num);
 }
 Factorial(num);
 }
 


void Factorial (int num){
	int fact=1,cont=1;
	while(cont<=num){
	 fact=fact*cont;
	 cont++;
	}
 printf("El factorial es: %d\n",fact);
 fprintf(archivo,"El factorial es: %d\n",fact);
	
}

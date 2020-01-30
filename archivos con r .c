#include <stdio.h>
int Factorial(int);
void leerdatos(int);
FILE *archivo;
 void main()
 {
 int num;
 leerdatos(num);
 }
 
 void leerdatos(int num)
 {
   archivo=fopen("datos.txt","r");
   fscanf(archivo,"Ingrese el numero para factorial:%d\n",&num);
   printf("Ingrese el numero para factorial:%d\n",num);
   fscanf(archivo,"%d",Factorial(num));
   printf("El factorial es: %d\n",Factorial(num));
   fclose(archivo);
 
 }
 int Factorial(int num)
 {
 int fact=1,cont=1;
	while(cont<=num)
	{
	 fact=fact*cont;
	 cont++;
	}
	return fact;
	
 }

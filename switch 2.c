#include<stdio.h>
/*Realizar un programa en c que determine n numeros*/
void main()
{
int cont=1,nnum,num,suma=0;
printf("Cuantos numeros desea generar:");
scanf("%d",&nnum);
while(cont<=nnum)
{
	 printf ("ingrese el numero %d:",cont);
	 scanf("%d",&num);
	 suma=suma+num;
	 cont++; 	
}	
	
printf("las suma de %d numeros es: %d",nnum,suma);
	
}

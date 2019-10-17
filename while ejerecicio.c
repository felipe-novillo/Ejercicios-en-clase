#include<stdio.h>
/*Realizar un programa en c que determine n numeros*/
void main()
{
int cont=1,num,suma=0;
printf("Cuantos numeros desea generar:");
scanf("%d",&num);
while(cont<=num)
{
	 printf("%d\n",cont);
	 suma=suma+cont;
	 cont++; 	
}	
	
printf("las suma de %d numeros es: %d",num,suma);
	
}

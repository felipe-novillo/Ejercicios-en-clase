#include<stdio.h>
/*Realizar un programa en c que determine n numeros*/
void main()
{
int tabla,limite,mul,cont=1,num=0;
printf("Ingrese la tabla:");
scanf("%d",&num);
printf("Ingrese el limite:");
scanf("%d",&limite);

while(cont<=limite)
{
	 mul=num*cont;
	 printf("%dX%d=%d\n",num,cont,mul);
	 cont++; 	
}	
	

	
}

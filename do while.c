#include<stdio.h>

void main()
{
int tabla,limite,mul,cont=1,num=0;

printf("Ingrese la tabla:");
scanf("%d",&num);
printf("Ingrese el limite:");
scanf("%d",&limite);
do{
	mul=num*cont;
	 printf("%dX%d=%d\n",num,cont,mul);
	 cont++;
}while(cont<=limite);
	
	
	
	
	
}





#include<stdio.h>

void main()
{
int tabla,limite,mul,cont,num=0;

printf("Ingrese la tabla:");
scanf("%d",&num);
printf("Ingrese el limite:");
scanf("%d",&limite);
for(cont=1;cont<=limite;cont++)

{
		mul=num*cont;
	 printf("%dX%d=%d\n",num,cont,mul);	
}

	 
}

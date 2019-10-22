/*Realizar un program de n numeros que verifique si es par o impar (numeros positivos)*/
#include<stdio.h>
void main()
{
	int cantnum,cont=1,num;
	printf("ingrese la cantidad de numeros");
	scanf("%d",&cantnum);
	while(cont<=cantnum)
	{
		printf("Ingrese el numero");
		scanf("%d",&num);
		while(num<0)
		{
		 printf("Ingrese un numero positivo");
		 scanf("%d",&num);
		}
		if(num%2==0)
		printf("par\n");
		else
		printf("impar\n");
		cont++;
	}
	
	
}

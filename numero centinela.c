/*Realizar un program de un grupo numeros positivos y verifique si es par o impar (numeros positivos)*/
#include<stdio.h>
void main()
{
	int cont=1,num=1;
	
	while(num>0)
	{
		printf("Ingrese el numero");
		scanf("%d",&num);
		while(num<0)
		{
		 printf("Ingrese un numero positivo");
		 scanf("%d",&num);
		}
		if(num%2==0&&num!=0)
		printf("par\n");
		else if(num%2==1&&num!=0)
		printf("impar\n");
		
	}
	
	
}

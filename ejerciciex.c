/* realizar un programa que permita ingresar un grupo de numeros y realize la suma de los positivos */
#include<stdio.h>
void main()
{
	int num;
	float suma=0;
	printf("INGRESAR UNA SERIE DE NUMEROS: ");
	scanf("%d",&num);
	while(num>0&&num<0)
	{
		scanf("%d",&num);
		while(num>0)
		{
	     suma=num+num;
		}	
	}
	
	printf("la suma de los numeros es:%f",suma);
	
	
}

/*realizar un programa que permita determinar cuantos numeros positivos, negativos y 0 tiene el programa*/
#include<stdio.h>
void main()
{
	int cantnum,cont=1,num,contp=0,contn=0,contzero=0;
	printf("ingrese la cantidad de numeros");
	scanf("%d",&cantnum);
	while(cont<=cantnum){
		printf("Ingrese el numero:");
		scanf("%d",&num);
		if(num>0){
			contp++;
		}else if(num<0)
		{
			contn++;
		}
		else
		contzero++;
		
		cont++;
		
	}
	printf("numeros positivos %d\n",contp);
	printf("numeros negativos %d\n",contn);
	printf("numeros zero %d\n",contzero);
	
}

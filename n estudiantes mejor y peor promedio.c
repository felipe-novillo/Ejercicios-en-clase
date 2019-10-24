#include<stdio.h>
void main()
{
	int nest,nnotas,cont=1,cont1,menor=99999,mayor=0;
	float notas,suma=0,prom=0;
	printf("ingrese el numero de estudiantes:");
	scanf("%d",&nest);
	printf("ingrese el numero de notas:");
	scanf("%d",&nnotas);
	while (cont<=nest){
		printf("estudiante %d:",cont);
		cont1=1;
		while(cont1<=nnotas){
			printf("Ingrese la nota %d",cont1);
			scanf("%f",&notas);
			suma=suma+notas;
			cont1++;
		}
		prom=suma/nnotas;
		suma=0;
		printf("El promedio es %.2f\n",prom);
		cont++;
		if(prom>mayor)
		mayor=prom;
		if(prom<menor)
		menor=prom;
	}
	printf("el estudiante con mejor promedio es %.2d",mayor);
    printf("el estudiante con peor promedio es %.2d",menor);
	
	
}

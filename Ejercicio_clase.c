# include <stdio.h>
# include <string.h>
#define tam 50
void ingreso(int,int,float[][tam]);
void imprimir(int,int,char [][tam],float [tam][tam]);

void main()
{
	int nempl,nvent;
	float ventas[tam][tam];
	printf("Ingrese el numero de empleados:");
	scanf("%d",&nempl);
	printf("Ingrese el numero de ventas:");
	scanf("%d",&nvent);
	ingreso(nempl,nvent,ventas);
}
void ingreso(int nempl,int nvent,float ventas[tam][tam])
{
	int i=0,j=0;
	char nombre[nempl][tam];
	
	while(i<nempl)
	{
		j=0;
		printf("Empleado %d\n",i+1);
		fflush(stdin);
		printf("Ingrese el nombre del empleado:");
		gets(nombre[i]);
		while(j<nvent)
		{
			printf("Ingrese el valor de la venta %d:",j+1);
			scanf("%f",&ventas[i][j]);
			j++;
		}
	i++;
	}
	imprimir(nempl,nvent,nombre,ventas);
}
void imprimir(int nempl,int nvent,char nombre[][tam],float ventas[tam][tam])
{
	float mayor=0,menor=9999,suma=0;
	int i=0,j;
	printf("\nVentas de los empleados:\n");
	while(i<nempl)
	{
		j=0;
		suma=0;
		printf("Empleado %d\n",i+1);
		puts(nombre[i]);
		while(j<nvent)
		{
			printf("Venta %d=%.2f\n",j+1,ventas[i][j]);
			suma=suma+ventas[i][j];
			j++;
		}
		printf("El total de ventas de %s es %.2f\n",nombre[i],suma);
		if(suma>mayor)
			mayor=suma;
		if(suma<menor)
			menor=suma;
	i++;
	}
	printf("Mayor venta realizada %.2f\n",mayor);
	printf("Menor venta realizada %.2f\n",menor);
}


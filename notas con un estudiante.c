/*obtener el promedio de un estudiante con n notas*/
#include<stdio.h>
void main()
{
int cont,nnotas;
float notas,suma=0,promedio=0; 

printf("Ingrese el numero de notas:");
scanf("%d",&nnotas);

for(cont=1;cont<=nnotas;cont++)
{
     printf("ingrese la nota %d:",cont);
     scanf("%f",&notas);
     while(notas<0)
      {
	     printf("ingrese una nota correcta:");
	     scanf("%f",&notas);
      }
      
      suma=suma+notas;    
}
promedio=suma/nnotas;
printf("El promedio es %.2f",promedio);

}

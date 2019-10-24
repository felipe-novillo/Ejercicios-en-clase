#include<stdio.h>
#include<stdlib.h>
void main()
{
int numero,op;
printf("bienvenido al menu principal :)");
printf("1.Serie de Ulam");
printf("2.salir");
printf("ingrese su opcion:");
scanf("%d",op);
switch(op){
	case 1:

     printf("Ingrese el numero para la sucesion de ULAM:");
     scanf("%d",&numero);
     while(numero<0){

          printf("ingrese un numero positivo:");
          scanf("%d",&numero);
        }
     while(numero!=1){
	     if(numero%2==0)
         {
	         numero=numero/2;
	     }
         else
	     {
    	     numero=(numero*3)+1;
	      }	
         printf("%d\n",numero);
        }
  break;
     case 2:
 	     exit(0);
  break;
}
}
 

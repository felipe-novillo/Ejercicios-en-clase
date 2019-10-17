#include<stdio.h>
#include<math.h>
/*realizar un programa con un menu que contenga las siguientes opciones:*/
void main()
{
int op,anio=0,mes=0,dia=0,mesa=0,diaa=0,anioa=0,anios=0,i=0,j=0;
float a,b,c,x1=0,x2=0,base,altura,area=0,edada;
printf("Menu principal\n 1.Ecuacion cuadratica\n 2.Area del triangulo\n 3.Edad de una persona\n");
printf("escoja una opcion:\n");
scanf("%d",&op)	;

switch(op)
{
    	case 1:
	   	printf("Ingrese el coeficinte a\n");
	  	scanf("%f",&a);
	 	printf("Ingrese el coeficinte b\n");
	 	scanf("%f",&b);
	 	printf("Ingrese el coeficinte c\n");
	 	scanf("%f",&c);
	 	x1=(-b+sqrt(pow(b,2)-(4*a*c)))/(2*a);
	 	x1=(-b-sqrt(pow(b,2)-(4*a*c)))/(2*a);
	 	printf("el resultado de x1 es:\n %2.f",x1);
	 	printf("\n el resultado de x2 es:\n %2.f",x2);
	 break;
	   case 2:
	   	printf("ingrese la base del triangulo:\n");
	   	scanf("%f",&base);
		 printf("ingrese la altura del triangulo:\n");
	   	 scanf("%f",&altura);
	   	 area=(base*altura)/2;
	   	 printf("El area del triangulo es:\n %2.f",area);
	 break;
	   case 3:
	   	 printf("introduce tu fecha de nacimiento en el formato dd mm aaaa:\n");
         scanf("%d%d%d",&dia,&mes,&anio);
 
         printf("introduce la fecha actual en el formato dd mm aaaa:\n");
         scanf("%d%d%d",&diaa,&mesa,&anioa);
          
         if(mes==2 && mesa==2){
             for(i=0;i<=28;i++){
                  dia=diaa-dia;
                }
           }
          else{
               for(j=0;j<=31;j++){
                  dia=diaa-dia;
               }
           }
          
          if(mesa>=mes && diaa>=dia){
          	anios=anioa-anio;
          }
          else{
             anios=anioa-anio-1;
            }
         printf("Naciste el %d/%d/%d",dia,mes,anio);
         printf("y  tu edad es: %d",anios);
	 default:
	 	printf("opcion invalida");
	  break;
	   	 
	
	
	
	
	}	
	
	
	
	
	
	
}

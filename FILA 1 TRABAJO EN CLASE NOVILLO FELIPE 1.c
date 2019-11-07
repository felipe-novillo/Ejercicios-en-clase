/*Fila1: Determinar de n números cuántos positivos, negativos o ceros.*/

#include<stdio.h>
#include<math.h>
float areacirculo(float);
int factorial(int);
int tablamult(int,int);
void parimpar(int);
void NumPNO(int);
void main(){
	float radio;
	int cantnum,num,lim,tabla,op;
	do{
	
	printf("Menu principal\n");
	printf("1.Area del circulo\n");
	printf("2.Factorial\n");
	printf("3.Tabla de multiplicar\n");
	printf("4.Par o impar\n");
	printf("5.Contador positivos negativos y ceros\n");
	printf("6. Salir\n");
	printf("Escoja una opcion:");
	scanf("%d",&op);
	switch(op){
		case 1:
		 printf("Ingrese el radio:");
	     scanf("%f",&radio);
	     printf("El area del circulo es:%.2f\n",areacirculo(radio));
	     getch();
	     system("cls");
	 break;
	   case 2:
	   	 printf("Ingrese el numero:");
	     scanf("%d",&num);
	     printf("El factorial es: %d\n",factorial(num));
	     getch();
	     system("cls");
	  break;
	   case 3:
	   	 printf("Ingrese la tabla:");
	     scanf("%d",&tabla);
       	 printf("Ingrese el limite");
	     scanf("%d",&lim);
      	 tablamult(tabla,lim);
      	 getch();
	     system("cls");
	  break;
	  case 4:
	  	 printf("Ingrese el numero:");
	     scanf("%d",&num);
	     parimpar(num); 
	     getch();
	     system("cls");
	  break;
	  case 5:
	  	 printf("ingrese la cantidad de numeros:");
	     scanf("%d",&cantnum);
	     NumPNO(cantnum);
	     getch();
	     system("cls");
	   break;
	   case 6:
	   	printf("Fin del programa");
	   	exit(0);
	  break;
	  default:
	  	printf("opcion invalida\n");
	  break;
	  	
	  
	     
	     
	  	
	  	  	
	}
}while(op<=5);
	
	

	
}
float areacirculo(float radio){
	
	float area=0,pi=3.1416;
	area=pi*pow(radio,2);
	return area;
	
}
int factorial(int num){
	
	int fact=1,cont=1;
	while(cont<=num){
		fact=fact*cont;
		cont++;
	}
	return fact;
}
int tablamult(int tabla,int lim){
	int mult=1,cont=1;
	while(cont<=lim){
		mult=tabla*cont;
		printf("%dX%d=%d\n",tabla,cont,mult);
		cont++;
	}
	return mult;

	
}
void parimpar(int num){
	if(num%2==0 &&num!=0)
	 printf("El numero es par");
   else if(num!=0)
     printf("el numero es impar");
	
	
	
}
void NumPNO(int cantnum){
	
	int cont=1,num,contp=0,contn=0,contzero=0;
	
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

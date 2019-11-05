/*Realizar un programa en c que calcule el area de un circulo*/

#include<stdio.h>
#include<math.h>
float areacirculo(float);//definicion de prototipo de funciones 
/*float areacirculo(float radio);*/
int factorial(int);
int tablamult(int,int);
void main(){
	float radio;
	int num,lim,tabla;
	printf("Area del circulo\n");
	printf("Ingrese el radio:");
	scanf("%f",&radio);
	printf("El area del circulo es:%.2f\n",areacirculo(radio));
	printf("Factorial\n");
	printf("Ingrese el numero:");
	scanf("%d",&num);
	printf("El factorial es: %d\n",factorial(num));
	printf("Tabla de multiplicar\n");
	printf("Ingrese la tabla:");
	scanf("%d",&tabla);
	printf("Ingrese el limite");
	scanf("%d",&lim);
	tablamult(tabla,lim);
	
	
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

/*realizar un programa que sume dos numeros usando funciones con paso por valor y paso por referencia*/
#include<stdio.h>
float Sumavalor(float,float);
float Sumareferencia(float *,float *);
void main(){
	float num1, num2;
	printf("Ingrese el numero 1:");
	scanf("%f",&num1);
	printf("Ingrese el numero 2:");
	scanf("%f",&num2);
	printf("La suma es %f",Sumavalor(num1,num2));
	printf("La suma es %f",Sumareferencia(&num1,&num2));
}

float Sumavalor(float a,float b){
	return a+b;
}
float Sumareferencia(float *a,float *b){
	*a=6;
	return *a+*b; 
	
}




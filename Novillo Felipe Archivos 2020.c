#include<stdio.h>
#include<stdlib.h>
#define tam 50
void inicializaMatriz(float[][tam]);
float ingresoDatosMatriz(int,int);
void promEstudiante(int nEst,int nNotas);
void diagonalMatriz(int fil,int col);
void sumaMatrices(int fil,int col);
FILE *archivo;

void main(){
	float arreglo[][tam]={{5.4,7.3,10.0},{2.5,8.0,5.0}};
	int op=0,nest,nnotas,fil,col;
	archivo=fopen("funciones.txt","w");
	while(op!=5){
		printf("\n 1.Inicializacion Matriz\n2.Ingreso Datos Matriz\n3.Promedio Estudiantes\n4.Diagonal Matriz\n5.Suma Matrices\n6.Salir\n");
		fputs("\n 1.Inicializacion Matriz\n2.Ingreso Datos Matriz\n3.Promedio Estudiantes\n4.Diagonal Matriz\n5.Suma Matrices\n6.Salir\n",archivo);
		printf("Ingrese la opcion:");
		fputs("Ingrese la opcion:",archivo);
		scanf("%d",&op);
		fprintf(archivo,"%d\n",op);
		switch(op){
			case 1:
				inicializaMatriz(arreglo);
				getch();
				system("cls");
			break;
			case 2:
				printf("Ingrese el numero de filas:");
				fputs("ingrese el numero de filas:\n ",archivo);
				scanf("%d",&fil);
				fprintf(archivo,"%d\n",fil);
				printf("Ingrese el numero de columnas:");
				fputs("Ingrese el numero de columnas:\n",archivo);
				scanf("%d",&col);
				fprintf(archivo,"%d\n",col);
				printf("La suma es %.1f\n",ingresoDatosMatriz(fil,col));
				fprintf(archivo,"La suma es %.1f\n",ingresoDatosMatriz(fil,col));
			case 3:
				printf("Ingrese el numero de estudiantes:");
				fputs("Ingrese el numero de estudiantes:\n",archivo);
				scanf("%d",&nest);
				fprintf(archivo,"%d\n",nest);
				printf("Ingrese el numero de calificaciones:");
				fputs("Ingrese el numero de calificaciones:\n",archivo);
				scanf("%d",&nnotas);
				fprintf(archivo,"%d\n",nnotas);
				promEstudiante(nest,nnotas);
			break;
			case 4:
				printf("Ingrese el numero de filas:");
				fputs("Ingrese el numero de filas:\n",archivo);
				scanf("%d",&fil);
				fprintf(archivo,"%d\n",fil);
				printf("Ingrese el numero de columnas:");
				fputs("Ingrese el numero de columnas:\n",archivo);
				scanf("%d",&col);
				fprintf(archivo,"%d\n",col);
				while(fil!=col){
					printf("Ingrese el numero de filas:");
					fputs("Ingrese el numero de filas:\n",archivo);
					scanf("%d",&fil);
					fprintf(archivo,"%d\n",fil);
					printf("Ingrese el numero de columnas:");
					fputs("Ingrese el numero de columnas:\n",archivo);
					scanf("%d",&col);
					fprintf(archivo,"%d\n",col);
				}
				diagonalMatriz(fil,col);
			break;
			case 5:
				printf("Ingrese el numero de filas:");
				fputs("Ingrese el numero de filas:\n",archivo);
				scanf("%d",&fil);
				fprintf(archivo,"%d\n",fil);
				printf("Ingrese el numero de columnas:");
				fputs("Ingrese el numero de columnas:\n",archivo);
				scanf("%d",&col);
				fprintf(archivo,"%d\n",col);
				while(fil!=col){
					printf("Ingrese el numero de filas:");
					fputs("Ingrese el numero de filas:\n",archivo);
					scanf("%d",&fil);
					fprintf(archivo,"%d\n",fil);
					printf("Ingrese el numero de columnas:");
					fputs("Ingrese el numero de columnas:\n",archivo);
					scanf("%d",&col);
					fprintf(archivo,"%d\n",col);
				}
				sumaMatrices(fil,col);
			break;
			case 6:
				exit(0);
			break;
			default:
				printf("Opcion Invalida\n");
				fputs("Opcion Invalida\n",archivo);
			break;
		}
	}
}

void inicializaMatriz(float arreglo[tam][tam]){
	int i=0,j=0;
	while(i<2){
		j=0;
		while(j<3){
			printf("arreglo[%d][%d]=%.2f\n",i,j,arreglo[i][j]);
			fprintf(archivo,"arreglo[%d][%d]=%.2f\n",i,j,arreglo[i][j]);
			j++;
		}
	i++;
	}
}

float ingresoDatosMatriz(int filas, int colum){
	int i=0,j=0;
	float arreglo[filas][colum],suma=0;
	while(i<filas){
		j=0;
		while(j<colum){
			printf("Ingrese el elemento[%d][%d]:",i,j);
			fprintf(archivo,"Ingrese el elemento[%d][%d]:",i,j);
			scanf("%f",&arreglo[i][j]);
			fprintf(archivo,"%f\n",arreglo[i][j]);
			j++;
		}
	i++;
	}
	i=0;
	printf("Elementos de la Matriz\n");
	fputs("Elementos de la Matriz\n",archivo);
	while(i<filas){
		j=0;
		while(j<colum){
			printf("%.2f\t",arreglo[i][j]);
			fprintf(archivo,"%.2f\t",arreglo[i][j]);
			suma=suma+arreglo[i][j];
			j++;
		}
		printf("\n");
		fputs("\n",archivo);
	i++;
	}
	return suma;
}

void promEstudiante(int nestu, int nnota){
	int i=0,j;
	char nombre[nestu][20];
	float notas[nestu][nnota],suma=0,prom=0,mayor=0,menor=9999;
	while(i<nestu){
		j=0;
		printf("Estudiante %d\n",i+1);
		fprintf(archivo,"Estudiante %d\n",i+1);
		fflush(stdin);
		printf("Ingrese el nombre del estudiante:");
		fputs("Ingrese el nombre del estudiante:\n",archivo);
		gets(nombre[i]);
		fprintf(archivo,nombre[i]);
		while(j<nnota){
			printf("Ingrese la calificacion %d:",j+1);
			fprintf(archivo,"\nIngrese la calificacion %d:",j+1);
			scanf("%f",&notas[i][j]);
			fprintf(archivo,"%f\n",notas[i][j]);
			j++;
		}
	i++;
	}
	i=0;
	puts("Calificaciones de Estudiantes\n");
	fputs("Calificaciones de Estudiantes\n",archivo);
	while(i<nestu){
		j=0,suma=0;
		printf("Estudiante %d\n",i+1);
		fprintf(archivo,"Estudiante %d\n",i+1);
		while(j<nnota){
			printf("Nota %d=%.2f\n",j+1,notas[i][j]);
			fprintf(archivo,"Nota %d=%.2f\n",j+1,notas[i][j]);
			suma=suma+notas[i][j];
			j++;
		}
		prom=suma/nnota;
		printf("El promedio de %s es %.2f",nombre[i],prom);
		fprintf(archivo,"El promedio de %s es %.2f",nombre[i],prom);
		printf("\n");
		fputs("\n",archivo);
		if(prom>mayor)
		   mayor=prom;
		if (prom<menor)
		    menor=prom;
	i++;
	}
	printf("El mayor promedio es %.1f\n",mayor);
	fprintf(archivo,"El mayor promedio es %.1f\n",mayor);
	printf("El menor promedio es %.1f\n",menor);
	fprintf(archivo,"El menor promedio es %.1f\n",menor);
}

void diagonalMatriz(int filas, int colum){
	int i=0,j=0;
	float arreglo[filas][colum],suma=0;
	while(i<filas){
		j=0;
		while(j<colum){
			printf("Ingrese el elemento[%d][%d]:",i,j);
			fprintf(archivo,"Ingrese el elemento[%d][%d]:",i,j);
			scanf("%f",&arreglo[i][j]);
			fprintf(archivo,"%f\n",arreglo[i][j]);
		j++;
		}
	i++;
	}
	i=0;
	printf("Elementos de la Matriz\n");
	fputs("Elementos de la Matriz\n",archivo);
	while(i<filas){
		j=0;
		while(j<colum)
		{
			printf("%.2f\t",arreglo[i][j]);
			fprintf(archivo,"%.2f\t",arreglo[i][j]);
			j++;
		}
		printf("\n");
		fputs("\n",archivo);
	i++;
	}
	i=0;
	printf("Elementos de la Diagonal\n");
	fputs("Elementos de la Diagonal\n",archivo);
	while(i<filas){
		j=0;
		while(j<colum){
			if(i==j)
			printf("%.2f\t",arreglo[i][j]);
			fprintf(archivo,"%.2f\t",arreglo[i][j]);
			j++;
		}
		printf("\t");
		fputs("\t",archivo);
	i++;
	}
}

void sumaMatrices(int filas, int colum){
	int i=0,j=0;
	float matrizA[filas][colum],matrizB[filas][colum],matrizC[filas][colum];
	printf("Matriz A\n");
	fputs("Matriz A\n",archivo);
	while(i<filas){
		j=0;
		while(j<colum){
			printf("Ingrese el elemento[%d][%d]:",i,j);
			fprintf(archivo,"\nIngrese el elemento[%d][%d]:",i,j);
			scanf("%f",&matrizA[i][j]);
			fprintf(archivo,"%f\n",matrizA[i][j]);
		j++;
		}
	i++;
	}
	printf("Matriz B\n");
	fputs("Matriz B\n",archivo);
	i=0;
	while(i<filas){
		j=0;
		while(j<colum){
			printf("Ingrese el elemento[%d][%d]:",i,j);
			fprintf(archivo,"\nIngrese el elemento[%d][%d]:",i,j);
			scanf("%f",&matrizB[i][j]);
			fprintf(archivo,"%f",matrizB[i][j]);
		j++;
		}
	i++;
	}
	i=0;
	printf("Elementos de la Matriz A\n");
	fputs("\nElementos de la Matriz A\n",archivo);
	while(i<filas){
		j=0;
		while(j<colum){
			printf("%.2f\t",matrizA[i][j]);
			fprintf(archivo,"%.2f\t",matrizA[i][j]);
			j++;
		}
		printf("\n");
		fputs("\n",archivo);
	i++;
	}
	i=0;
	printf("Elementos de la Matriz B\n");
	fputs("Elementos de la Matriz B\n",archivo);
	while(i<filas){
		j=0;
		while(j<colum){
			printf("%.2f\t",matrizB[i][j]);
			fprintf(archivo,"%.2f\t",matrizB[i][j]);
			j++;
		}
		printf("\n");
		fputs("\n",archivo);
	i++;
	}
	i=0;
	printf("Matriz Resultante\n");
	fputs("Matriz Resultante\n",archivo);
	while(i<filas){
		j=0;
		while(j<colum){
			matrizC[i][j]=matrizA[i][j]+matrizB[i][j];
			printf("%.2f\t",matrizC[i][j]);
			fprintf(archivo,"%.2f\t",matrizC[i][j]);
			j++;
		}
		printf("\n");
		fputs("\n",archivo);
	i++;
	}
}








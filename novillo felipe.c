

#include<stdio.h>
#include<string.h>
#define tam 50
void lecturadatos(char nombre[][tam],char ape[][tam],int ncompras[tam], float valorcompras[tam][tam],int nclientes);
void visualizardatos(char nombre[][tam],char ape[][tam],int ncompras[tam],float valorcompras[tam][tam],int nclientes);
void concatenardatos(int i,char nombre[][tam],char ape[][tam]);



void main()
{
	int op,nclientes,ncompras[tam];
	float valorcompras[tam][tam];
	char nombre[tam][tam];
	char ape[tam][tam];
	do{
    printf("Bienvenidos al menu principal\n");
    printf("1.Lectura de datos\n2.Visualizar Datos\n");
    scanf("%d",&op);
    switch(op){
    	
    	case 1:
    	    printf("Ingrese el numero de clientes:");
    	    scanf("%d",&nclientes);
    		lecturadatos(nombre,ape,ncompras,valorcompras,nclientes);
	   break; 
	    case 2 :
	    	visualizardatos(nombre,ape,ncompras,valorcompras,nclientes);
	   break;
    		
    		
	}
		
	}while(op!=2);
}
	
	
	void lecturadatos(char nombre[][tam],char ape[][tam],int ncompras[tam],float valorcompras[tam][tam],int nclientes)
	{
	  int i=0,j=0;
	  while(i<nclientes)
	  {
	  
	     fflush(stdin);
	     printf("Ingrese el nombre del cliente:");
	     gets(nombre[i]);
	     fflush(stdin);
	     printf("Ingrese el apellido del cliente:");
	     gets(ape[i]);
	     printf("Ingrese el numero de compras del cliente:");
	     scanf("%d",&ncompras[i]);
	     j=0;
	     while(j<ncompras[i])
	     {
	  	     printf("Ingrese el valor de la compra [%d]:",j+1 );
	  	     scanf("%f",&valorcompras[i][j]);
	  	     j++;
	     }
		i++;
	}
}
	
	void visualizardatos(char nombre[][tam],char ape[][tam],int ncompras[tam],float valorcompras[tam][tam],int nclientes)
	{
	  int i=0,j=0;
	  float suma=0;
       while(i<nclientes)
	  {
	     suma=0;
	     j=0;
	     concatenardatos(i,nombre,ape);
	     while(j<ncompras[i])
	     {
	         printf("el valor de la compra[%d] del comprador es: %.2f",j+1,valorcompras[i][j]);
	     	suma=suma+valorcompras[i][j];
	  	     j++;
	     }
		printf("El valor total de las compras es %f",suma);

	      
		i++;	
	}

}
	
	void concatenardatos(int i,char nombre[][tam],char ape[][tam])
	{
    	strcat(nombre[i]," ");
    	printf("El nombre completo del cliente es : %s",strcat(nombre[i],ape[i]));		
	}
	
	
	
	
	
	
	
	














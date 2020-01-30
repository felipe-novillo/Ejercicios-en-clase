#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

#define fil 50

int i=0;

FILE *registro;

void ingreso_datos(int [fil],int [fil],int [fil],int [fil],int [fil],char [fil][fil]);
void modificar(int [fil],int [fil],int [fil],int [fil],int [fil],char [fil][fil]);
void eliminar(int [fil],int [fil],int [fil],int [fil],int [fil],char [fil][fil]);
void buscar(int [fil],int [fil],int [fil],int [fil],int [fil],char [fil][fil]);
void sobreescribir(int [fil],int [fil],int [fil],int [fil],int [fil],char [fil][fil]);
void leer();


int main()
{
	int op=0, dia[fil], mes[fil], an[fil], hora[fil], cedula[fil];
	char nombres[fil][fil];
	do
	{

		printf("*******************************************************************\n");
   		printf("*****  Bienvenido al Programa de Reservaci%cnes de Habitaciones ****\n",162);
	    printf("*******************************************************************\n");
	    printf("***             A continuaci%cn digite su selecci%cn:             ***\n",162,162);
	    printf("*******************************************************************\n");
    	printf("***             1. Para ingresar datos para la reservaci%cn.     ***\n",162);
    	printf("***             2. Para modificar reservaci%cn.                  ***\n",162);
    	printf("***             3. Para eliminar reservaci%cn.                   ***\n",162);
    	printf("***             4. Para buscar reservaci%cn.                     ***\n",162);
    	printf("***             5. Para mostrar todas las reservaci%cnes         ***\n",162);
    	printf("***             6. Para Salir.                                  ***\n");
		printf("*******************************************************************\n");
    	printf("*** ");
    	scanf("%i",&op);
    	switch(op)
    	{
    		case 1:
    			
    			ingreso_datos(dia, mes, an, hora, cedula, nombres);
    			getchar();
    			system("CLS");
    			break;
    		case 2:
    			
    			modificar(dia, mes, an, hora, cedula, nombres);
    			getch();
    			system("CLS");
    			break;
    		case 3:
    			
    			eliminar(dia, mes, an, hora, cedula, nombres);
    			getch();
    			system("CLS");
    			break;
    		case 4:
    			
    			buscar(dia, mes, an, hora, cedula, nombres);
    			getch();
    			system("CLS");
    			break;
    		case 5:
    			imprimir(dia,mes,an,hora,cedula,nombres);
    			getch();
    			system("CLS");
    			break;
    		case 7:
    		
    			getchar();
    			system("CLS");
		}
	}while(op!=6);
	return 0;
}

void ingreso_datos(int dia[fil], int mes[fil], int an[fil], int hora[fil], int cedula[fil], char nombres[fil][fil])
{
	system("CLS");
	registro=fopen("Registro.txt", "a+");
	fflush(stdin);
	printf("Ingresar nombre y apellido del reservador: ");
	gets(nombres[i]);
	fflush(stdin);
	printf("Ingresar n%cmero de identificaci%cn de %s: ",163,162,nombres[i]);
    scanf("%i",&cedula[i]);
    fflush(stdin);
    while(cedula[i]<100000000||cedula[i]>9999999999)
    {
    	printf("\nN%cmero de identificaci%cn no v%clido, ingrese de nuevo\n",163,162,160);
		fflush(stdin);
		printf("Ingresar n%cmero de identificaci%cn de %s: ",163,162,nombres[i]);
    	scanf("%i",&cedula[i]);
    	fflush(stdin);
	}
    printf("***Ingresar fecha a continuaci%cn***\n",162);
    printf("Ingresar d%ca:\n",161);
    scanf("%i",&dia[i]);
    fflush(stdin);
    while(dia[i]>31||dia[i]<=0)
    {
		printf("\nD%ca no v%clido, intente de nuevo\n",161,160);
		fflush(stdin);
		printf("Ingresar d%ca:\n",161);
    	scanf("%i",&dia[i]);
    	fflush(stdin);
	}
	if(isalpha(dia[i])!=0)
	{
		printf("\nMes no v%clido, intente de nuevo\n",160);
		fflush(stdin);
		printf("Ingresar dia:\n");
    	scanf("%i",&dia[i]);
    	fflush(stdin);
	}
    printf("Ingresar mes:\n");
    scanf("%i",&mes[i]);  
    while(mes[i]>12||mes[i]<=0)
    {
    	printf("\nMes no valido, intente de nuevo\n");
		printf("Ingresar mes:\n");
    	scanf("%i",&mes[i]);
	}			
     printf("Ingresar a%co:\n",164);
    scanf("%i",&an[i]);
    while(an[i]<=0||an[i]<2020)
    {
    	printf("\nA%co no v%clido, intente de nuevo\n",164,160);
		printf("Ingresar a%co:\n",164);
    	scanf("%i",&an[i]);
	}
	printf("Ingresar hora en formato 24h:\n");
	scanf("%i",&hora[i]);
	while(hora[i]<0||hora[i]>24)
	{
    	printf("\nHora no v%clida, intente de nuevo\n",160);
    	printf("Ingresar hora en formato 24h:\n");
		scanf("%i",&hora[i]);
	}
    fprintf(registro,"%s\t%i\t%i\t%i\t%i\t%i\n",nombres[i],cedula[i],dia[i],mes[i],an[i],hora[i]);
    fclose(registro);
    printf("\nReservaci%cn registrada con exito",162);
    
	printf("\nPresione enter para continuar\n");
    i=i+1;
}

void eliminar(int dia[fil], int mes[fil], int an[fil], int hora[fil], int cedula[fil], char nombres[fil][fil])
{
	system("CLS");
	int id, x, o, r, xyz;
	xyz=0;
	id=0;
	printf("Ingresar numero de identificaci%cn del reservador: ",162);
	scanf("%i",&id);
    while(id<100000000||id>9999999999)
    {
    	printf("\nN%cmero de identificaci%cn no v%clido, por favor ingrese de nuevo\n",163,162,160);
		printf("Ingresar numero de identificaci%cn del reservador: ",162);
		scanf("%i",&id);
	}
	x=0;
	for(x=0;x<i;x++)
	{
	
		if(id==cedula[x])
		{
			r=x;
			printf("\nReservaci%cn encontrada con %cxito, a continuaci%cn se muestran los datos de la reservaci%cn a eliminar:\n",162,130,162,162);
			printf("\nNombre     \tIdentificaci%cn\tD%ca\tMes\tA%co\tHora",162,161,164);
			printf("\n%s\t\t%i\t%i\t%i\t%i\t%i:00\n",nombres[x],cedula[x],dia[x],mes[x],an[x],hora[x]);
			printf("\n1. Borrar reservaci%cn\n2. Regresar",162);
			printf("\nElija una opci%cn: ",162);
			scanf("%i",&o);
			if(o==1)
			{
				for(r=x;r<i;r++)
				{
					strcpy(nombres[r],nombres[r+1]);
					cedula[r]=cedula[r+1];
					dia[r]=dia[r+1];
					mes[r]=mes[r+1];
					an[r]=an[r+1];
					hora[r]=hora[r+1];
				}
				i=i-1;
				printf("\nReserva eliminada con %cxito",130);
    			printf("\nPresione enter para continuar\n");
			}
		}
		else
		{
			xyz=1;	
		}
		id=0;	
	}
	if(xyz==1)
	{
		printf("\nReserva no encontrada, intente de nuevo");
    	printf("\nPresione enter para continuar\n");
	}
	
	//sobreescribir(dia, mes, an, hora, cedula, nombres);//
}
void modificar(int dia[fil], int mes[fil], int an[fil], int hora[fil], int cedula[fil], char nombres[fil][fil])
{
	system("CLS");
	int id, x=0, xyz;
	id=0;
	xyz=0;
	printf("Ingresar n%cmero de identificaci%cn del reservador: ",163,162);
	scanf("%i",&id);
    while(id<100000000||id>9999999999)
    {
    	printf("\nN%cmero de identificaci%cn no v%clido, por favor ingrese de nuevo\n",163,162,160);
		printf("Ingresar n%cmero de identificaci%cn del reservador: ",163,162);
		scanf("%i",&id);
	}
	for(x=0;x<i;x++)
	{
		if(id==cedula[x])
		{
			printf("\nReserva encontrada con %cxito, a continuaci%cn se muestran los datos de la reserva a modificar:\n",130,162);
			printf("\nNombre     \tIdentificaci%cn\tDia\tMes\tA%co\tHora",162,164);
			printf("\n%s\t\t%i\t%i\t%i\t%i\t%i:00\n",nombres[x],cedula[x],dia[x],mes[x],an[x],hora[x]);
			fflush(stdin);
			printf("\nIngresar nombre y apellido del Reservador: ");
			gets(nombres[x]);
			fflush(stdin);
			printf("Ingresar n%cmero de identificaci%cn de %s: ",163,162,nombres[x]);
    		scanf("%i",&cedula[x]);
    		fflush(stdin);
    		while(cedula[x]<100000000||cedula[x]>9999999999)
    		{
    			printf("\nN%cmero de identificaci%cn no v%clido, ingrese de nuevo\n",163,162,160);
				fflush(stdin);
				printf("Ingresar n%cmero de identificaci%cn de %s: ",163,162,nombres[x]);
    			scanf("%i",&cedula[x]);
    			fflush(stdin);
			}
    		printf("***Ingresar fecha a continuaci%cn***\n",162);
    		printf("Ingresar d%ca:\n",161);
    		scanf("%i",&dia[x]);
    		while(dia[x]>31||dia[x]<=0)
    		{
    			printf("\nD%ca no v%clido, intente de nuevo\n",161,160);
				printf("Ingresar d%ca:\n",161);
    			scanf("%i",&dia[x]);
			}
    		printf("Ingresar mes:\n");
    		scanf("%i",&mes[x]);  
    		while(mes[x]>12||mes[x]<=0)
    		{
    			printf("\nMes no v%clido, intente de nuevo\n",160);
				printf("Ingresar mes:\n");
    			scanf("%i",&mes[x]);
			}			
    		printf("Ingresar a%co:\n",164);
    		scanf("%i",&an[x]);
    		while(an[x]<=0||an[x]<2019)
    		{
    			printf("\nA%co no v%clido, intente de nuevo\n",164,160);
				printf("Ingresar a%co:\n",164);
    			scanf("%i",&an[x]);
			}
			printf("Ingresar hora en formato 24h:\n");
			scanf("%i",&hora[x]);
			while(hora[x]<0||hora[x]>24)
			{
    			printf("\nHora no v%clida, intente de nuevo\n",160);
    			printf("Ingresar hora en formato 24h:\n");
				scanf("%i",&hora[x]);
			}
			printf("\nReserva modificada con %cxito",130);
		    printf("\nPresione enter para continuar\n");
		    xyz=0;
		}
		else
		{
			xyz=1;
		}
	}
	if(xyz==1)
	{
		printf("\nReserva no encontrada, intente de nuevo");
    	printf("\nPresione enter para continuar\n");
	}
	//sobreescribir(dia, mes, an, hora, cedula, nombres);//
}
void buscar(int dia[fil], int mes[fil], int an[fil], int hora[fil], int cedula[fil], char nombres[fil][fil])
{
	system("CLS");
	int id, x=0, xyz;
	id=0;
	xyz=0;
	printf("Ingresar n%cmero de identificaci%cn del reservador: ",163,162);
	scanf("%i",&id);
    while(id<100000000||id>9999999999)
    {
    	printf("\nN%cmero de identificaci%cn no v%clido, por favor ingrese de nuevo\n",163,162,160);
		printf("Ingresar n%cmero de identificaci%cn del reservador: ",163,162);
		scanf("%i",&id);
	}
	for(x=0;x<i;x++)
	{
		if(id==cedula[x])
		{
			printf("\nCita encontrada con %cxito, a continuacion se muestran los datos de la reserva\n",130);
			printf("\nNombre     \tIdentificaci%cn\tD%ca\tMes\tA%co\tHora\n",162,161,164);
			printf("%s\t\t%i\t%i\t%i\t%i\t%i:00\n",nombres[x],cedula[x],dia[x],mes[x],an[x],hora[x]);
		}
		else
		{
			xyz=1;
		}
	}
	if(xyz==1)
	{
		printf("\nReserva no encontrada, intente de nuevo");
	}
	printf("\nPresione enter para continuar\n");
}
//Imprime todas las citas existentes con detalle:
void imprimir(int dia[fil], int mes[fil], int an[fil], int hora[fil], int cedula[fil], char nombres[fil][fil])
{
	system("CLS");
	fflush(stdin);
	int a=0;
	printf("\nNombre     \tIdentificaci%cn\tD%ca\tMes\tA%co\tHora\n",162,161,164);
	for(a=0;a<i;a++)
	{
		printf("%s\t\t%i\t%i\t%i\t%i\t%i:00\n",nombres[a],cedula[a],dia[a],mes[a],an[a],hora[a]);
	}
	printf("\nPresione enter para continuar\n");
}

//Guarda todos los datos almacenados en los arreglos dentro de un archivo txt (sobreescribe)(utilizado en eliminar y modificar)
void sobreescribir(int dia[fil], int mes[fil], int an[fil], int hora[fil], int cedula[fil], char nombres[fil][fil])
{
	int n;
	registro=fopen("Registro.txt", "w");
	for(n=0;n<i;n++)
	{
		fprintf(registro,"%s\t%i\t%i\t%i\t%i\t%i\n",nombres[n],cedula[n],dia[n],mes[n],an[n],hora[n]);
	}
    fclose(registro);
}

//Lee las citas almacenadas en el archivo .txt y las almacena temporalmente en arreglos para manipular los datos (Funcion en desarrollo):
void leer()
{
	char b,nom[fil][fil];
	int a,f,x1,c, numci[fil],t,numd[fil],numm[fil],numa[fil],numh[fil],z1;
	registro=fopen("Registro.txt", "r");
	for(a=0;b!=EOF;a++)
	{
		b=fgetc(registro);
		if(b!='\n')
		{
			if(b!='\t')
			{
				if(isdigit(b) == 0 )
				{
					nom[f][c]=b;
				}
			}
			c++;
		}
		else
		{
			f++;
			c=0;
		}
	}
	for(x1=0;x1<f;x1++)
	{
		printf("%s",nom[x1]);
	}
	fclose(registro);
}


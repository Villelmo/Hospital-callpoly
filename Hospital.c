/*Elaborado por Jeans Real y Fernando Castro.*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<graphics.h>
#include<mouse.h>

/* add variable */
char u[15],file[10],file_name[100];
char kar[100];
char ano[600];
char ce[40];
char nac[50];
char nom1[40];
char nom2[40];
char ape1[40];
char ape2[40];
char ciu[15],mun[35],tel[40];
char sa[40];
char pro[40];
char ase[40];
char se[5];
int a,b,res,ed,rep,x,y,lb;

/* add structure to toy*/
int corazon[218]={138,51,135,45,129,37,123,30,116,25,108,22,99,19,89,19,82,19,72,23,63,28,55,37,49,46,45,58,45,68,46,75,48,82,51,87,63,87,63,87,75,68,77,67,78,67,80,67,81,70,83,73,88,94,101,41,101,41,102,39,104,40,105,40,106,40,107,40,108,40,115,
				96,121,74,122,72,123,72,126,71,128,73,129,75,130,79,132,87,133,98,138,88,140,88,165,88,167,84,171,83,176,84,180,87,180,94,177,98,173,100,169,100,166,98,164,96,143,96,134,114,133,115,131,115,129,114,127,110,124,96,116,121,
				114,123,112,122,110,122,109,119,102,67,90,118,87,118,84,116,83,113,76,83,67,95,56,95,59,100,63,106,67,109,73,115,81,122,90,128,101,136,111,144,120,151,127,157,135,164,140,167,148,158,157,151,168,143,180,133,195,122,210,109,220,
				97,228,82,231,66,230,53,224,39,213,27,201,21,188,18,172,19,160,24,151,31,143,40,138,51};
int hospital[16]={261,101,370,24,480,100,459,100,459,259,282,259,282,101,261,101};
int cruz1[26]={305,148,351,148,351,100,390,100,390,147,435,147,435,189,390,189,390,236,351,236,351,189,305,189,305,148};
int cuadrado[10]={30,172,258,172,258,401,30,401,30,173};
int brazo1[46]={63,237,67,235,71,235,73,238,72,243,72,249,69,260,69,270,70, 281,72, 286,73,292,72,297,72,299,70,302,69,302,66,302,64,299,62,292,60,284,59,273,58,263,60,253,63,236};
int brazo2[34]={100,280,102,274,108,275,117,279,122,281,150,282,153,284,153,286,153,289,151,290,150,291,150,291,123,291,114,287,107,285,102,283,99,280};
int brazo3[28]={220,298,225,299,229,298,231,292,240,240,237,236,236,236,231,236,229,237,228,241,227,245,219,293,220,297,221,297};
int cabeza1[30]={64,210,70,208,77,210,82,214,83,217,83,223,81,228,77,232,70,233,64,232,59,226,58,223,58,216,60,212,64,209};
int cabeza2[26]={78,280,82,272,87,270,92,270,96,274,98,278,98,284,94,290,90,292,84,291,80,287,78,283,78,280};
int cabeza3[30]={224,220,228,212,233,208,237,208,242,208,246,212,249,217,250,221,249,226,244,232,238,233,231,233,227,229,225,224,224,220};
int pc1[64]={61,236,54,242,51,254,47,272,45,291,43,299,48,299,49,298,48,306,46,321,45,334,43,347,42,359,42,364,43,367,47,367,51,367,54,362,56,357,57,348,58,335,60,326,61,316,63,302,60,292,58,283,56,274,56,266,58,257,59, 248,60, 241,61, 235};
int pc2[24]={75,236,80,243,80,254,78,265,76,273,74,283,72,282,70,270,71,263,74,254,75,246,75,235};
int pc3[14]={100,283,117,291,104,292,101,290,99,287,99,284,99,282};
int pc4[42]={105,272,107,269,155,269,155,274,155,277,207,277,210,280,210,284,209,289,206,291,156,291,154,290,155,287,156,284,155,282,150,279,126,279,120,277,115,274,108,273,105,272};
int pc5[20]={219,290,225,238,222,238,220,242,219,246,219,249,211,291,213,291,217,291,219,291};
int pc6[18]={241,236,245,240,246,244,246,252,238,298,234,292,241,244,242,240,242,236};
int pie1[38]={63,319,67,326,63,356,64,359,65,362,67,364,72,363,75,360,76,357,77,352,78,340,81, 327,81,322,69,303,65,303,64,306,63,313,63,318,63,319};
int pie2[18]={216,301,227,317,222,362,219,366,216,367,212,368,209,365,207,362,215,301};
int pie3[36]={221,303,226,303,229,303,230,301,231,298,233,296,246,320,246,321,246,323,242,360,237,363,234,363,230,360,231,352,231,342,232,335,234,322,221,303};
int tabla[10]={74,293,219,293,219,298,72,298,73,293};

void Usuario(void)
{
printf("\nIngrese Su Usuario:\n");
scanf("%s",u);
printf("\n" "Ingrese Su Clave Doctor %s.\n",u);
scanf("%i",&b);
}

void limp(void)
{
cleardevice();
}

void Paciente(void)
{
gotoxy(1,1);
printf("Ingrese El Nombre Del Paciente a Consultar Doctor %s.\n",u);
gets(file);
}

void Registro(void)
{
strcpy(file_name,"C:\\src\\");
strcat(file_name,file);
strcat(file_name,".txt");
}

/* enter data */
void Informacion(void)
{
printf("\n");
printf("Cedula: ");				fflush(stdin);	scanf("%s",&ce);
printf("Primer Nombre: ");		fflush(stdin);	scanf("%s",nom1);
printf("Segundo Nombre: ");		fflush(stdin);	scanf("%s",nom2);
printf("Primer Apellido: ");	fflush(stdin);	scanf("%s",ape1);
printf("Segundo Apellido: ");	fflush(stdin);	scanf("%s",ape2);
printf("Fecha de Nacimiento. DD/MM/AAAA.: ");fflush(stdin);scanf("%s",nac);
printf("Edad: ");				fflush(stdin);	scanf("%i",&ed);
printf("Sexo M/F.: ");			fflush(stdin);	scanf("%s",se);
printf("Cuidad: ");				fflush(stdin);	scanf("%s",ciu);
printf("Municipio: ");			fflush(stdin);	scanf("%s",mun);
printf("Telefono/Celular: ");	fflush(stdin);	scanf("%s",&tel);
printf("Tipo de Sangre: ");		fflush(stdin);	scanf("%s",sa);
printf("Profesion: ");			fflush(stdin);	scanf("%s",pro);
printf("Asegurado. SI/NO.: ");	fflush(stdin);	scanf("%s",ase);
}

void Clave(void)
{
printf("\nClave Incorrecta. El Programa se Cerrara.");
getch();
}

void Difault(void)
{
printf("\nOpcion Incorrecta. El Programa se Cerrara.\n");
printf("\n");
system("PAUSE");
}

void loadingbar(void)
{
setbkcolor(1);		setcolor(14);		outtextxy(5,5,"Cargando el Programa. Espere Por Favor.");
rectangle(21,20,450,30);
sleep(1);
for (lb=11;lb<=430;lb++)
	{
	bar(10+lb,20,20+lb,30);
	delay(5000);
	if (lb==430)
		{
		outtextxy(470,400,"Base de Datos Lista.");
		}
	}
sleep(1);
}

void base (void)
{
do{
limp();
setbkcolor(9);
settextstyle(7,0,1);
setcolor(5);	outtextxy(20,1,"Base de Datos de Un Paciente.");
setcolor(4);
outtextxy(120,22,"1-Modo Escritura.");
outtextxy(120,44,"2-Modo Lectura.");
outtextxy(120,66,"3-Modo Lectura/Escritura.");
outtextxy(120,88,"4-Para Agregar Una Nota");
outtextxy(120,110,"5-Para Salir.");
gotoxy(1,9);	printf("\n");
scanf("%i",&a);

switch(a)
{

case 1:

	Usuario();
	if (b==1234)
	{
	printf("\n" "Bienvenido Al Modo de Escritura Doctor %s.\n",u);
	printf("\n");
	system("PAUSE");
		{
		FILE *Archivo;
		limp();
		setbkcolor(0);
		gotoxy(1,1);		printf("De Un Nombre Al Registro del Paciente Doctor %s.\n",u);		fflush(stdin);		gets(file);
		Registro();
		gotoxy(20,3);		printf("\n" "Ingrese Los Datos del Paciente:\n");
		Informacion();
		Archivo=fopen(file_name,"w");
		fprintf(Archivo,"%s\n %s\n %s\n %s\n %s\n %s\n %i\n %s\n %s\n %s\n %s\n %s\n %s\n %s\n",ce,nom1,nom2,ape1,ape2,nac,ed,se,ciu,mun,tel,sa,pro,ase);
		printf("\nRegistro Creado Exitosamente.\n");
		printf("\n");
		system("PAUSE");
		fclose(Archivo);
		break;
		}
		}
	else
		Clave();
		break;

case 2:

	Usuario();
	if (b==123)
	{
	printf("\nBienvenido Al Modo de Lectura Doctor %s.\n",u);
	printf("\n");
	system("PAUSE");
		{
		FILE *Archivo;
		char fil[100];
		limp();
		setbkcolor(0);
		Paciente();
		Registro();
		Archivo=fopen(file_name,"r");
		if (Archivo==NULL)
			{
			setbkcolor(4);
			printf("\nError Al Cargar El Archivo: %s.\n",file);
			printf("\n");
			system("PAUSE");
			break;
			}
	setbkcolor(4);
	gotoxy(20,3);
	printf("Datos del Paciente %s.\n",file);
	fscanf(Archivo,"%s",fil);	printf("\nSu Cedula: %s\n",fil);
	fscanf(Archivo,"%s",fil);	printf("1er Nombre: %s\n",fil);
	fscanf(Archivo,"%s",fil);	printf("2do Nombre: %s\n",fil);
	fscanf(Archivo,"%s",fil);	printf("1er Apellido: %s\n",fil);
	fscanf(Archivo,"%s",fil);	printf("2do Apellido: %s\n",fil);
	fscanf(Archivo,"%s",fil);	printf("Nacimiento: %s\n",fil);
	fscanf(Archivo,"%s",fil);	printf("Edad %s\n",fil);
	fscanf(Archivo,"%s",fil);	printf("Sexo: %s\n",fil);
	fscanf(Archivo,"%s",fil);	printf("Cuidad de Origen: %s\n",fil);
	fscanf(Archivo,"%s",fil);	printf("Municipio: %s\n",fil);
	fscanf(Archivo,"%s",fil);	printf("Telefono o Celular: %s\n",fil);
	fscanf(Archivo,"%s",fil);	printf("Tipo Sanguineo: %s\n",fil);
	fscanf(Archivo,"%s",fil);	printf("Oficion: %s\n",fil);
	fscanf(Archivo,"%s",fil);	printf("Asegurado: %s\n",fil);
	fscanf(Archivo,"%s",fil);	printf("Anotaciones: %s\n",fil);
		printf("\n");
		system("PAUSE");
		fclose(Archivo);
		break;
		}
		}
	else
		Clave();
		break;

case 3:

	Usuario();
	if (b==12)
	{
	printf("\n" "Bienvenido Al Modo Dios, Administrador %s.\n",u);
	printf("\n");
	system("PAUSE");
		{
		FILE *Archivo;
		limp();
		setbkcolor(8);
		Paciente();
		Registro();

		Archivo=fopen(file_name,"r+");
		if (Archivo==NULL)
			{
			setbkcolor(0);
			printf("\nError Al Cargar El Archivo: %s.\n",file);
			printf("\n");
			system("PAUSE");
			break;
			}
		printf("\nPara Vizualizar el Archivo Nativamente Escriba 1.\n");
		printf("Para Reescribir Las Areas Escriba 2.\n");
		scanf("%i",&res);

	switch (res)
	{
	case 1:
		setbkcolor(1);
		printf("\n");
		while(fgets(kar,100,Archivo)!=NULL)
			{
			printf("%s",kar);
			}
		printf("\n");
		system("PAUSE");
		break;

	case 2:
		setbkcolor(6);
		printf("\n" "Ingrese Nuevamente Los Datos del Paciente:\n");
		Informacion();
		fprintf(Archivo,"%s\n %s\n %s\n %s\n %s\n %s\n %i\n %s\n %s\n %s\n %s\n %s\n %s\n %s\n",ce,nom1,nom2,ape1,ape2,nac,ed,se,ciu,mun,tel,sa,pro,ase);
		fclose(Archivo);
		printf("\nRegistro Modificado Exitosamente\n.");
		printf("\n");
		system("PAUSE");
		break;

	default:
		Difault();
		break;
	}
	}
	}
	else
		Clave();
		break;

case 4:

	Usuario();
	if (b==1)
	{
	printf("\n" "Bienvenido, Agregue su Nota Doctor %s.\n",u);
	printf("\n");
	system("PAUSE");
		{
		FILE *Archivo;
		limp();
		setbkcolor(0);
		Paciente();
		Registro();

		Archivo=fopen(file_name,"a+");

			setbkcolor(5);
			printf("\nAgregue Anotaciones Sin Tabulaciones.\n");
			scanf("%s",ano);
			fprintf(Archivo,"%s",ano);
			fclose(Archivo);
			printf("\nAnotaciones Agregadas Exitosamente.\n");
			printf("\n");
			system("PAUSE");
			break;
		}
		}
	else
		Clave();
		break;

case 5:
	restorecrtmode();
	gotoxy(38,13);	printf("Adios.");
	getch();
	break;

default:
	Difault();
	break;
}

limp();
setbkcolor(0);
gotoxy(1,1);
	printf("Presione 1 Para Regresar Al Menu Principal.\n");
	printf("Presione 2 Para Probar el Mouse.\n");
	printf("U Otro Numero Para Salir.\n");
	scanf("%i",&rep);
	}
	while(rep==1);

	if (rep==2)
	{
		limp();
		gotoxy(1,1); 	printf("Presione Cualquier Tecla Para Salir.");
		setbkcolor(BLUE);
		do
		{
			mver();
			x=mxpos(1);
			y=mypos(1);
			if(mclick()==1)
			{
				setcolor(GREEN);	outtextxy(x+30,y,"Diste un Click Izquierdo");
			}
			if(mclick()==2)
			{
				setcolor(RED);		outtextxy(x+30,y,"Diste un Click Derecho");
			}
			delay(10000);
			setcolor(BLACK);
			outtextxy(x+30,y,"Diste un Click Izquierdo");
			outtextxy(x+30,y,"Diste un Click Derecho");

		}
		while(!kbhit());
	}

closegraph();
gotoxy(38,13);  printf("Adios.");
getch();
}

void main()
{
	int Plup=DETECT,plup;
	initgraph(&Plup,&plup,"C:\\TC20\\BIN");
	
	loadingbar();
	limp();
	
	setbkcolor(15);
	setcolor(1);
	settextstyle(1,0,9);	outtextxy(280,250,"UNI");
	settextstyle(7,0,9);	outtextxy(443,250,"-ies");
	setcolor(3);			line(282,357,618,357);

	settextstyle(1,0,2);	setcolor(5);	outtextxy(270,370,"Uso de Ficheros Para Base de Datos");
	settextstyle(7,0,4);	setcolor(3);	outtextxy(330,400,"De Un Hospital.");

	setfillstyle(SOLID_FILL,12);	setcolor(4);	fillpoly(108,corazon);
	setfillstyle(SOLID_FILL,9);		setcolor(6);	fillpoly(7,hospital);
	setfillstyle(1,15);				setcolor(8);	fillpoly(12,cruz1);
	setfillstyle(SOLID_FILL,11);	setcolor(14);	fillpoly(4,cuadrado);

	setfillstyle(1,15);				setcolor(1);
	fillpoly(22,brazo1);
	fillpoly(14,cabeza1);
	fillpoly(31,pc1);
	fillpoly(11,pc2);
	fillpoly(15,pie1);

	setcolor(4);
	fillpoly(12,cabeza2);
	fillpoly(16,brazo2);
	fillpoly(6,pc3);
	fillpoly(20,pc4);

	setcolor(5);
	fillpoly(13,brazo3);
	fillpoly(14,cabeza3);
	fillpoly(9,pc5);
	fillpoly(8,pc6);
	fillpoly(8,pie2);
	fillpoly(17,pie3);
	
	setcolor(2);	fillpoly(4,tabla);

	system("PAUSE");

base();
}

/*Elaborado por Jeans Real y Fernando Castro.*/

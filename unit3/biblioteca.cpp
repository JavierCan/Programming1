
/* Crear una structura que almacene los siguientes dattos de una persona:
-Nombre
-Edad
-Cuidad de residencia

Pedir al usuario esos datos de una persona y guardarlos en un fichero llamado "gente.dat". Cerrar el ficehro, volverlo a
 abrir para lectura y mostrar los datos que se habían guardado */

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include <iostream>


using namespace std;
int main(){
	cout <<  "***************  \\\\\ biblioteca UPY /////******************";
	struct datos{
		char libro[21];
		char autor[21];
		} cantidad[10];
		
	FILE* fichero;
	int i, numero=0;
	
	fichero = fopen("registro de libros.txt", "wt");
	if(fichero == NULL){
		printf("No se pudo encontrar el archivo. \n");
	} else{
		cout << "************************BIBLIOTECA UPY********************************";
		cout << "**********************registro de libros*********************";
		for(i=0; i<10; i++){
			
			
			
			cout<<"\n\a\t ** libro : "<<i+1<<" ****\n";
		
			puts("\n LIBRO: ");
			gets(cantidad[i].libro);
			fprintf(fichero, "%s \n", cantidad[i].libro);
			
			
			
			puts("\n autor :  ");
			gets(cantidad[i].autor);	
			fprintf(fichero, "%s \n", cantidad[i].autor);	
		}
					
	}
			fclose(fichero);
			
		
			fichero =fopen("registro de libros.txt", "rt");
			if(fichero == NULL){
				printf("No se pudo abrir el archivo \n");
			} else {
				do{
					puts("\n \n Escriba el numero del fichero a leer: \n""(Para salir, digite 0).");
					scanf("%d", &numero);
					
					for(i=0; i<numero; i++){ 
						if(i==(numero-1)){
							cout<<"Nombre: "<<cantidad[i].libro<<endl<<"autor: "<<cantidad[i].autor <<endl;
							getchar();
						}
					}
				} while(numero !=0);
				
				fclose(fichero);				
			}
		return 0;
	
	fichero = fopen("registro de libros.txt", "rt");
	if (fichero == NULL){
		printf("\n No se pudo abrir el archivo. \n");
	}else{
		while(!feof(fichero)){ //mientras exista el fichero se va realizar lo que hay en el while
			fgets(cantidad[i].libro, 60, fichero);			
			puts(cantidad[i].libro);
			
			fgets(cantidad[i].autor, 60, fichero);
			puts(cantidad[i].autor);			
		}
		fclose(fichero);
	}
	return 0;
}

/* Ampliar el programa anterior para que sea un "array structs", de forma que se puedan tener los datos de 10 personas. Se debera pedir
al usuario las 10 personas y guardarlas, entonces debemos escoger entre 1 y 10 e imprimir su info. */





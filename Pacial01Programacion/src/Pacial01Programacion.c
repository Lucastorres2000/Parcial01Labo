/*
 ============================================================================
 Name        : Pacial01Programacion.c
 Author      : Torres lucas
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "Censista.h"
#include "UTN.h"
#include "ViviendasyCensistas.h"
#define CANTIDAD_CENSISTAS 3

int main(void) {
	setbuf(stdout,NULL);

	int  legajoCensista=1;
	int opcion;


	eCensista Lista_Censistas[CANTIDAD_CENSISTAS];

	inicializarCensista(Lista_Censistas,CANTIDAD_CENSISTAS);

	if(inicializarCensista(Lista_Censistas,CANTIDAD_CENSISTAS) == SUCCESS)

		{
				do{

								if(utn_getNumber(&opcion," 1--> Cargar Datos \n "
														"2--> Modificar Datos \n "
														"3--> Eliminar Datos \n "
														"4--> Mostrar datos \n "
														"5--> Forzar carga de datos \n "
														"6--> Salir \n Ingese una opcion --> ", "Ingrese una opcion valida ...  ", 1, 6,9999)==SUCCESS)

									{

										switch(opcion)

											{
													case 1:

															if( menuOpcionesCarga(Lista_Censistas, CANTIDAD_CENSISTAS, &legajoCensista))

																	printf("\n-----Carga realizada con exito ....----\n");

															else{

																	printf("\n ----Error en la carga ...----\n");

															}

														break;

													case 2:

															if(noData(Lista_Censistas,CANTIDAD_CENSISTAS))

																	menuOpcionesModificar(Lista_Censistas,CANTIDAD_CENSISTAS,&legajoCensista);

															else{

																	printf("\nPrimero  debes cargar un dato ....\n");

															}

														break;

													case 3:

															if(noData(Lista_Censistas, CANTIDAD_CENSISTAS))

																	menuOpcionesBorrar(Lista_Censistas,CANTIDAD_CENSISTAS,&legajoCensista);

															else{

																	printf("\nPrimero  debes cargar un dato ....\n");

															}

														break;


													case 4:
															if(noData(Lista_Censistas, CANTIDAD_CENSISTAS))

																	menuOpcionesMostrar(Lista_Censistas,CANTIDAD_CENSISTAS,&legajoCensista);

															else{

																	printf("\nPrimero  debes cargar un dato ....\n");

															}

														break;


													case 5:
															if(forzarDatos(Lista_Censistas,CANTIDAD_CENSISTAS)==SUCCESS){

																	printf("\n----Carga Exitosa ...\n----");

															}else{

																	printf("\n----Error en la carga de datos ----");

															}

														break;
													case 6:
																	printf("\n----Cerrando programa...----");

														break;
											}

									}

								system("cls");

				}while(opcion != 6 );

	}

	return EXIT_SUCCESS;
}

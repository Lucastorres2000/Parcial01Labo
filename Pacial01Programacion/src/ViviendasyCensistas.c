/*
 * ViviendasyCensistas.c
 *
 *  Created on: 25 may. 2022
 *      Author: lucas
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Censista.h"
#include "UTN.h"
#include "ViviendasyCensistas.h"

int menuOpcionesCarga(eCensista* listaCensista,int cantidadCensista, int* ID){
	int opcion;
	int retorno=ERROR;

	if(listaCensista != NULL && cantidadCensista> 0 )
			{
				do{

						system("cls");

						if(utn_getNumber(&opcion,"1--> Cargar Censista \n "
												"2--> Cargar Vivienda \n "
												"3-->Salir \n "
												"Ingrese una opcion --> ","Ingrese una opcion Valida ....",0,3,3)==SUCCESS)

							{

								switch(opcion){

									case 1:
										cargarCensista(listaCensista,cantidadCensista,ID);

										break;

									case 2:

										break;

									case 3:

										printf("\n----------Volviendo al menu Principal ...-------\n");

										break;

								}

							}

				}while(opcion != 3);
				retorno=SUCCESS;
			}



	return retorno;

}

int menuOpcionesModificar(eCensista* listaCensista,int cantidadCensista, int* ID){
	int opcion;
	int retorno=ERROR;
		if(listaCensista != NULL && cantidadCensista> 0 )
			{
				do{

						system("cls");

						if(utn_getNumber(&opcion,"1--> Modificar Censista \n "
												"2--> Modificar Vivienda \n "
												"3-->Salir \n "
												"Ingrese una opcion --> ","Ingrese una opcion Valida ....",0,3,3)==SUCCESS)

							{

								switch(opcion){

									case 1:

										break;

									case 2:

										break;

									case 3:

										printf("\n-------Volviendo al menu Principal ...-------\n");

										break;

								}

							}

				}while(opcion != 3);
				retorno=SUCCESS;
			}
 return retorno;
}
int menuOpcionesBorrar(eCensista* listaCensista,int cantidadCensista, int* legajoCencista){
	int opcion;
	int bufferLegajoCencista;
	int retorno=ERROR;
		if(listaCensista != NULL && cantidadCensista> 0 )
			{
				do{

						system("cls");

						if(utn_getNumber(&opcion,"1--> Borrar Censista \n "
												"2--> Borrar Vivienda \n "
												"3-->Salir \n "
												"Ingrese una opcion --> ","Ingrese una opcion Valida ....",0,3,3)==SUCCESS)

							{

								switch(opcion){

									case 1:
										mostrarCensistas(listaCensista, cantidadCensista );
											if(utn_getNumber(&bufferLegajoCencista,"Ingese el legajo que desea eliminar","Legajo erroneo ... Pruebe nuevamente",0,999,3) == SUCCESS &&

												borrarCensista(listaCensista,cantidadCensista,(*legajoCencista))==SUCCESS)

													{
															printf("\n---- / Borrado Exitoso / ----");

													}else{

															printf("\n---- / No se puedo realizar la baja o no existen cargas con ese id / ----\n");

													}




										break;

									case 2:

										break;

									case 3:

										printf("\n-------Volviendo al menu Principal ...\n-------");

										break;

								}

							}

				}while(opcion != 3);
				retorno=SUCCESS;
			}
 return retorno;
}
int menuOpcionesMostrar(eCensista* listaCensista,int cantidadCensista, int* ID){
	int opcion;
	int retorno=ERROR;
		if(listaCensista != NULL && cantidadCensista> 0 )
			{
				do{

						system("cls");

						if(utn_getNumber(&opcion,"1--> Mostrar Censista \n "
												"2--> Mostrar Vivienda \n "
												"3-->Salir \n "
												"Ingrese una opcion --> ","Ingrese una opcion Valida ....",0,3,3)==SUCCESS)

							{

								switch(opcion){

									case 1:
										mostrarCensistas(listaCensista,cantidadCensista);
										break;

									case 2:

										break;

									case 3:
										printf("\n --------- Volviendo al menu Principal ...-------------\n");

										break;

								}

							}

				}while(opcion != 3);
				retorno=SUCCESS;
			}

 return retorno;
}

/*
 * Censista.c
 *
 *  Created on: 25 may. 2022
 *      Author: lucas
 */

#include <stdio.h>
#include <string.h>
#include "Censista.h"
#include "UTN.h"

int inicializarCensista(eCensista* lista, int len){

	int i;
	int retorno = ERROR;

	if( lista != NULL && len > 0 )
		{
			for(i = 0 ; i < len ; i++ )
				{
					lista[i].isEmpty=TRUE;

				}

			retorno=SUCCESS;

		}

	return retorno;
}

void mostrarUnCensista(eCensista lista){

	printf("%d\t %s\t %d\t %s \n",	lista.legajoCensista,
									lista.nombre,
									lista.edad,
									lista.telefono);


}

int mostrarCensistas(eCensista* lista,int len ){

	int retorno=ERROR;
	int i;

	if( lista != NULL && len > 0 )
		{

			for(i = 0 ; i < len ; i++ )
				{
					if(lista[i].isEmpty==FALSE)
					{
						mostrarUnCensista(lista[i]);

					}

				}

			retorno=SUCCESS;
		}

	return retorno;

}

int forzarDatos(eCensista* lista,int len){
	int retorno=ERROR;

		if( lista != NULL && len > 0 )
			{
				int i;

				int   auxLegajoCensista[3]={100,101,102};
				char  auxNombre[25][25]={"Ana","Juan","Sol"};
				int   auxEdad[3]={34,24,47};
				char  auxTelefono[3][12]={"1023-2345","4301-54768","5902-37487"};

					for( i = 0 ; i < len ; i++ )
						{
							lista[i].legajoCensista = auxLegajoCensista[i];

							strcpy(lista[i].nombre, auxNombre[i]);

							lista[i].edad = auxEdad[i];

							strcpy(lista[i].telefono, auxTelefono[i]);

							lista[i].isEmpty = FALSE;


						}

					retorno=SUCCESS;


			}
		return  retorno;

}

int buscarVacio(eCensista* lista, int len){
	int result = ERROR;
	int i;

	if(lista!=NULL && len>0)
	{
		for(i=0;i<len;i++)
		{
			if(lista[i].isEmpty)
			{
				result = i;
				break;
			}
		}
	}
	return result;
}

int cargarCensista(eCensista* lista, int  len,int* ID){

	int retorno = ERROR;
	eCensista  bufferCensista;
		if(lista != NULL && len > 0  && buscarVacio(lista,len) != ERROR)
			{
			 if( utn_getNumber(&bufferCensista.legajoCensista,"Ingrese el Legajo --> ","Legajo erroneo ... Pruebe nuevamente \n -->", 0 , 999 , 3) == SUCCESS &&
					 utn_getName(bufferCensista.nombre, 25 ,"Ingrese el nombre --> ","Nombre erroneo ... Pruebe nuevamente\n--> ",3) == SUCCESS &&
					 utn_getNumber(&bufferCensista.edad,"Ingrese la Edad --> ","Edad incorrecta ... Pruebe nuevamente\n -->", 18 , 70 , 3) == SUCCESS &&
					 utn_getAlphanumeric(bufferCensista.telefono,25,"Ingrese Numero de  telefono  (XXXX-XXXX ) --> ","Numero telefonico incorrecto ... Pruebe nuevamente",3)== SUCCESS &&
					agregarCensista(lista,len, ID , bufferCensista.legajoCensista , bufferCensista.nombre , bufferCensista.edad , bufferCensista.telefono ) == SUCCESS )
				 {
					retorno=SUCCESS;
				 }



			}


	return retorno;
}

int agregarCensista(eCensista* lista, int len, int* ID, int auxLegajoCensista, char auxNombre[], int auxEdad, char auxTelefono[] ){

	int retorno=ERROR;
	int index;
		if(lista != NULL && len > 0 && ID != NULL && auxLegajoCensista>0 && auxNombre !=NULL && auxEdad > 0 && auxTelefono != NULL )
			{

						index=buscarVacio(lista,len);
						lista[index].legajoCensista = auxLegajoCensista;

						strcpy(lista[index].nombre, auxNombre);

						lista[index].edad = auxEdad;

						strcpy(lista[index].telefono, auxTelefono);

						lista[index].isEmpty = FALSE;

				retorno=SUCCESS;
			}
	return retorno;
}

int noData(eCensista* lista, int len)
{
	int i;
	int result = FALSE;

	if(lista!=NULL && len>0)
	{
		for(i=0;i<len;i++)
		{
			if(lista[i].isEmpty == FALSE)
			{
				result = TRUE;
				break;
			}
		}
	}
	return result;
}

int buscarCencistaPorLegajo(eCensista* lista, int len, int id){
	int result = ERROR;
		int i;

		if(lista!=NULL && len>0)
		{
			for(i=0;i<len;i++)
			{
				if(lista[i].isEmpty == FALSE && lista[i].legajoCensista == id)
				{
					result = i;
					break;
				}
			}
		}
		return result;
};

int borrarCensista(eCensista* lista, int len, int legajoCencista){

	int result = ERROR;
		int index;
		char bufferAnswer[10];
		index = buscarCencistaPorLegajo(lista,len,legajoCencista);
		mostrarUnCensista(lista[index]);
		if(lista !=NULL && len > 0 && index != ERROR && lista[index].isEmpty == FALSE)
		{
			if(utn_getName(bufferAnswer,10,"\nSeguro que desea eliminar? Debe ingresar 'Si' para proseguir con la baja ", "\nError,ingrese una respuesta valida.",3)== SUCCESS && strncasecmp(bufferAnswer,"si",10)==0)
			{
			lista[index].isEmpty = TRUE;
			result = SUCCESS;
			}
		}
		return result;
};

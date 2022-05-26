/*
 * Censista.h
 *
 *  Created on: 25 may. 2022
 *      Author: Torres  Lucas
 */

 #ifndef CENSISTA_H_
 #define CENSISTA_H_

 #define SUCCESS 0
 #define ERROR -1
 #define TRUE 1
 #define FALSE 0

 typedef struct{
	int legajoCensista;
	char nombre[25];
	int edad;
	char telefono[12];
	int isEmpty;
 }eCensista;

 /// \fn int inicializarCensista(eCensista*, int)
 /// \brief
 ///
 /// \pre
 /// \post
 /// \param lista
 /// \param len
 /// \return
 int inicializarCensista(eCensista* lista, int len);

 /// \fn void mostrarUnCensista(eCensista)
 /// \brief
 ///
 /// \pre
 /// \post
 /// \param lista
 void mostrarUnCensista(eCensista lista);

 /// \fn int mostrarCensistas(eCensista*, int)
 /// \brief
 ///
 /// \pre
 /// \post
 /// \param lista
 /// \param len
 /// \return
 int mostrarCensistas(eCensista* lista,int len );

 /// \fn int forzarDatos(eCensista*, int)
 /// \brief
 ///
 /// \pre
 /// \post
 /// \param lista
 /// \param len
 /// \return
 int forzarDatos(eCensista* lista,int len);

 /// \fn int cargarCensista(eCensista*, int)
 /// \brief
 ///
 /// \pre
 /// \post
 /// \param lista
 /// \param len
 /// \return
 int cargarCensista(eCensista* lista, int  len, int* legajoCencista);

 /// \fn int agregarCensista(eCensista*, int, int*, int, char[], int, char[])
 /// \brief
 ///
 /// \pre
 /// \post
 /// \param lista
 /// \param len
 /// \param ID
 /// \param auxLegajoCensista
 /// \param auxNombre
 /// \param auxEdad
 /// \param auxTelefono
 /// \return
 int agregarCensista(eCensista* lista, int len, int* ID, int auxLegajoCensista, char auxNombre[], int auxEdad, char auxTelefono[] );

 /// \fn int buscarVacio(eCensista*, int)
 /// \brief
 ///
 /// \pre
 /// \post
 /// \param lista
 /// \param len
 /// \return
 int buscarVacio(eCensista* lista, int len);

 /// \fn int noData(eCensista*, int)
 /// \brief
 ///
 /// \pre
 /// \post
 /// \param list
 /// \param len
 /// \return
 int noData(eCensista* list, int len);

 /// \fn int buscarSencistaPorID(eCensista*, int, int)
 /// \brief
 ///
 /// \pre
 /// \post
 /// \param list
 /// \param len
 /// \param id
 /// \return
 int buscarCencistaPorID(eCensista* lista, int len, int legajoCensista);

 /// \fn int borrarCensista(eCensista*, int, int)
 /// \brief
 ///
 /// \pre
 /// \post
 /// \param lista
 /// \param len
 /// \param legajoCencista
 /// \return
 int borrarCensista(eCensista* lista, int len, int legajoCencista);
 #endif /* CENSISTA_H_ */

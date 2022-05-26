/*
 * ViviendasyCensistas.h
 *
 *  Created on: 25 may. 2022
 *      Author: lucas
 */

#ifndef VIVIENDASYCENSISTAS_H_
#define VIVIENDASYCENSISTAS_H_

/// \fn int menuOpcionesCarga(eCensista*, int, int*)
/// \brief
///
/// \pre
/// \post
/// \param listaCensista
/// \param cantidadCensista
/// \param ID
/// \return
int menuOpcionesCarga(eCensista* listaCensista,int cantidadCensista, int* ID);

/// \fn int menuOpcionesModificar(eCensista*, int, int*)
/// \brief
///
/// \pre
/// \post
/// \param listaCensista
/// \param cantidadCensista
/// \param ID
/// \return
int menuOpcionesModificar(eCensista* listaCensista,int cantidadCensista, int* ID);

/// \fn int menuOpcionesBorrar(eCensista*, int, int*)
/// \brief
///
/// \pre
/// \post
/// \param listaCensista
/// \param cantidadCensista
/// \param ID
/// \return
int menuOpcionesBorrar(eCensista* listaCensista,int cantidadCensista, int* legajoCencista);

/// \fn int menuOpcionesMostrar(eCensista*, int, int*)
/// \brief
///
/// \pre
/// \post
/// \param listaCensista
/// \param cantidadCensista
/// \param ID
/// \return
int menuOpcionesMostrar(eCensista* listaCensista,int cantidadCensista, int* ID);

#endif /* VIVIENDASYCENSISTAS_H_ */

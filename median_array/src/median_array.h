/*
 * median_array.h
 *
 *  Created on: 25 settembre 2017
 *      Author: Maddalena Fossati
 */

#ifndef MEDIAN_ARRAY_H_
#define MEDIAN_ARRAY_H_

#include <assert.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ZERO            0
#define ONE             1
#define TWO          	2
#define MAX_LENGTH      20
#define MAX_ELEMENT     100
#define FILE_NAME       "median_array.txt"
#define FILE_MODE       "w"
#define SEPARATOR_LINE  "-"
#define PRINT_ARRAY     "\nArray generato: "
#define PRINT_ELEMENT   "%d"
#define PRINT_MEDIAN    "\nElemento mediano dell'array: %.2d"

/**
 * Assicura che ad ogni lancio il programma
 * generi in maniera casuali numeri sempre diversi
 */
void srand_time();

/**
 * Genera in maniera casuale la lunghezza dell'array
 * @post il numero generato deve essere un numero intero maggiore di 0
 * @return
 */
int get_length();

/**
 * Verifica che gli elementi dell'array di dimennsione stabilita
 * dal parametro length siano ordinati in maniera crescente
 * @pre il parametro length deve essere un numero intero maggiore di zero
 * @param array
 * @param length
 * @return
 */
bool ordered_array(int* array, int length);

/**
 * Ordina in maniera crescente gli elementi dell'array
 * di dimensione stabilita dal parametro length
 * @pre il parametro length deve essere un numero intero maggiore di 0
 * @pre gli elementi dell'array non sono ordinati in maniera crescente
 * @post gli elementi dell'array sono ordinati in maniera crescente
 * @param array
 * @param length
 */
void bubble_sort(int* array, int length);

/**
 * Genera in modo casuale gli elementi di un array di lunghezza
 * stabilita dal parametro length e li ordina in maniera crescente
 * @pre il parametro length deve essere un numero intero maggiore di 0
 * @post gli elementi sono ordinati in maniera crescente
 * @param length
 * @return
 */
int* generate_ordered_array(int length);

/**
 * Stampa su file gli elementi dell'array di dimensione
 * stabilita dal parametro length
 * @pre il parametro length deve essere un numero intero maggiore di 0
 * @pre il file deve essere aperto
 * @param file
 * @param array
 * @param length
 */
void print_array(FILE* file, int* array, int length);

/**
 * Restituisce l'elemento mediano dell'array ordinato
 * di dimensione stabilita dal parametro length
 * @pre il parametro length deve essere un numero intero maggiore di 0
 * @pre gli elementi dell'array sono ordinati in maniera crescente
 * @param array
 * @param length
 * @return
 */
int median(int* array, int length);

/**
 * Stampa su file l'elemento mediano dell'array ordinato
 * @pre il file deve essere aperto
 * @param file
 * @param array
 * @param length
 */
void print_median(FILE* file, int* array, int length);

#endif /* MEDIAN_ARRAY_H_ */

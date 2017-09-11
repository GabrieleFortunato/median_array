/*
 * median_array.c
 *
 *  Created on:
 *      Author:
 */

#include "median_array.h"

void srand_time(){
	srand(time(NULL));
}

int get_length(){
	int length = ONE+rand()%MAX_LENGTH;
	assert(length>ZERO);
	return length;
}

bool ordered_array(int* array, int length){
	assert(length>ZERO);
	bool result = true;
	for (int i = ZERO;i<(length-ONE);i++){
		if (array[i]>array[i+ONE]){
			result = false;
			break;
		}
	}
	return result;
}

void bubble_sort(int* array, int length){

}

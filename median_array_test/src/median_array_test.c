/*
 ============================================================================
 Name        : median_array_test.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <CUnit/basic.h>
#include "median_array.h"


int init_suite_default(){
	return ZERO;
}

int clear_suite_default(){
	return ZERO;
}

void test_length(){
}

void test_ordered(){
}

void test_bubble(){
}

void test_generate_ordered_array(){
}

void test_median(){
}

int main(void) {
	CU_initialize_registry();
	CU_pSuite pSuite_A = CU_add_suite("SUITE A",init_suite_default,clear_suite_default);
	CU_add_test(pSuite_A,"test of generate_number()",test_length);
	CU_pSuite pSuite_B = CU_add_suite("SUITE B",init_suite_default,clear_suite_default);
	CU_add_test(pSuite_B,"test of ordered_array()",test_ordered);
	CU_pSuite pSuite_C = CU_add_suite("SUITE C",init_suite_default,clear_suite_default);
	CU_add_test(pSuite_C,"test of bubble_sort()",test_bubble);
	CU_pSuite pSuite_D = CU_add_suite("SUITE D",init_suite_default,clear_suite_default);
	CU_add_test(pSuite_D,"test of generate_ordered_array()",test_generate_ordered_array);
	CU_pSuite pSuite_E = CU_add_suite("SUITE E",init_suite_default,clear_suite_default);
	CU_add_test(pSuite_E,"test of median()",test_median);
	CU_basic_set_mode(CU_BRM_VERBOSE);
	CU_basic_run_tests();
	CU_cleanup_registry();
	return CU_get_error();
}

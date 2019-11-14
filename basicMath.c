/*
 * basicMath.c
 *
 *  Created on: Nov 5, 2019
 *      Author: yevgenylashtchionov
 */
#include <stdio.h>

/*
 * Function add(x,y) - Mathematical function for x + y.
 * Parameter1: float x.
 * Parameter2: float y.
 * Return: float - The answer of x + y.
 */
float add(float x, float y) {
	return x + y;
}

/*
 * Function sub(x,y) - Mathematical function for x - y.
 * Parameter1: float x.
 * Parameter2: float y.
 * Return: float - The answer of x - y.
 */
float sub(float x, float y) {
	return x - y;
}

/*
 * Function mul(x,y) - Mathematical function for x * y.
 * Parameter1: double x.
 * Parameter2: int y.
 * Return: double - The answer of x * y.
 */
double mul(double x, int y) {
	return y * x;
}

/*
 * Function div(x,y) - Mathematical function for x / y.
 * Parameter1: double x.
 * Parameter2: int y.
 * Return: double - The answer of x / y.
 */
double div(double x, int y) {
	if(y == 0){ // Mathematical error, division by zero.
		printf("div(x,y) error: Math Error - can't divide by zero\n");
		return -1;
	}
	return x / y;
}

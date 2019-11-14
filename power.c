/*
 * power.c
 *
 *  Created on: Nov 5, 2019
 *      Author: yevgenylashtchionov
 */
#include <stdio.h>
#include "myMath.h"

/*
 * Function Exp(x) - Mathematical function for e^x
 * Parameter1: int x - The power of e.
 * Return: double - The answer of e^x.
 */
double Exp(int x) {
	if (x == 0) // If power of e is 0, then return 1 as the answer.
		return 1;
	double ans = 1; // Represents the answer.
	int isNegative = (x < 0) ? 1 : 0; // Check if power is negative.
	if (isNegative) { // If power is negative
		for (int i = 0; i < x*-1; i++) {
			ans *= e;
		}
		return 1/ans;
	}else{
		for (int i = 0; i < x; i++) { // If power is positive
			ans *= e;
		}
		return ans;
	}
}

/*
 * Function Pow(x) - Mathematical function for x^y
 * Parameter1: int x - The base.
 * Parameter2: int y - The power of x.
 * Return: double - The answer of x^y.
 */
double Pow(double x, int y) {
	if(x == 0 && y == 0){ // If both x and y is 0, then it's a mathematical error.
		printf("Pow(x,y) error: Math Error - 0^0\n"); // Show error message to user
		return -1; // return -1 a default value for error.
	}
	if (y == 0) // If power of x is 0, then return 1 as the answer.
		return 1;
	double ans = 1;
	int isNegative = (y < 0) ? 1 : 0; // Check if power of x is negative.
	if (isNegative){ // If power of x is negative
		for (int i = 0; i < y*-1; i++) {
			ans *= x;
		}
		return 1/ans;
	}else{ // If power of x is positive
	for (int i = 0; i < y; i++) {
		ans *= x;
	}
	return ans;
	}
}

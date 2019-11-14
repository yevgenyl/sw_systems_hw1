/*
 * main.c
 *
 *  Created on: Nov 5, 2019
 *      Author: yevgenylashtchionov
 */
#include <stdio.h>
#include "myMath.h"

/*
 * Function f1(real) - Mathematical function for f(x) = e^x + x^3 -2.
 * Parameter1: double real - a real number.
 * Return: double - The answer of f(x).
 */
double f1(double real) {
	int decimal = (int) real; // Exp function should receive an Integer.
	return sub(add(Exp(decimal), Pow(real, 3)), 2);
}

/*
 * Function f2(real) - Mathematical function for f(x) = 3x + 2x^2.
 * Parameter1: double real - a real number.
 * Return: double - The answer of f(x).
 */
double f2(double real) {
	float part1 = (float) mul(real, 3);
	float part2 = (float) mul(Pow(real, 2), 2);
	return add(part1, part2);
}

/*
 * Function f3(real) - Mathematical function for f(x) = (4x^3)/5 -2x.
 * Parameter1: double real - a real number.
 * Return: double - The answer of f(x).
 */
float f3(double real) {
	double part1 = mul(Pow(real, 3), 4);
	float part2 = (float) mul(real, 2);
	return sub(div(part1, 5), part2);
}

int main() {
	double num = 0;
	printf("Please insert a real number: ");
	scanf("%lf", &num);
	printf(
			"\n1) The value of f(x) = e^x +x^3 -2 at the point %0.4lf is: %0.4lf\n\n"
					"2) The value of f(x) = 3x +2x^2 at the point %0.4lf is: %0.4lf\n\n"
					"3) The value of f(x) = (4x^3)/5 -2x at the point %0.4lf is: %0.4f\n",
			num, f1(num), num, f2(num), num, f3(num));
	return 0;
}

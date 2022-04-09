#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point
 *
 * Description: Prints a number and whether it is positive, negative or zero.
 *
 * Return: 0
 */


int n;

 srand(time(0));
 n = rand() - RAND_MAX / 2;
	
 if (n == 0)
 {
  printf("%d is zero", n); 
 }
 else if (n > 0)
 {
  printf("%d is positive", n); 
 }
 else
 {
  printf("%d is negative", n); 
 }
 return (0);

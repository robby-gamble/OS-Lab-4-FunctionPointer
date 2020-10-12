#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/* IMPLEMENT ME: Declare your functions here */
typedef int (*functionPointer)(int,int);
int add (int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
int divide (int a, int b);
int exitprogram();


int main (void)
{
	bool keepGoing = true;
  while(keepGoing == true){
  int operation,result;
  
  functionPointer functions[5];
  ;
  functions[0] = add;
  functions[1] = subtract;
  functions[2] = multiply;
  functions[3] = divide;
  functions[4] = exitprogram;
  
  printf("Input 0 to add: \n");
  printf("Input 1 to subtract: \n");
  printf("Input 2 to multiply: \n");
  printf("Input 3 to divide: \n");
  printf("Input 4 to exit program: \n");
  scanf("%i", &operation);

  result = (functions[operation])(5,2);
  printf("Result = %d\n", result);
	}
	return 0;
}

/* IMPLEMENT ME: Define your functions here */
int add (int a, int b) { printf ("Adding 'a' and 'b'\n"); return a + b; }
int subtract (int a, int b) { printf ("Subtracting 'a' and 'b'\n"); return a - b; }
int multiply (int a, int b) { printf ("Multiplying 'a' and 'b'\n"); return a * b; }
int divide (int a, int b) { printf ("Dividing 'a' and 'b'\n"); return a / b; }
int exitprogram () { printf ("Exiting Program\n"); exit(0); return 0; }

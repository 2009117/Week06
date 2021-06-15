#include <stdio.h>
#include <math.h>

float r;
float R;
float V;
float pi;
float X;

//We have to used the variable "r" to use into the formula. 
int main(void) {
  pi=3.1416;
 //We have to determine the variable "r" raidus.
 
 printf("Introduce the radius\n");

 scanf("%f", &r);
 //This command is used to elevated the number. 
R= pow (r, 3); 
 //First we are going to calculate the first step in the formula. 
X=(1.3333*pi);

 //Now we are going to use the following formula with the value of the variable "r".
 V=X*R;
 printf("The volume is %.2f",V);

  return 0;
}

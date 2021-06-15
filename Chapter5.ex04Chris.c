#include <stdio.h>

  //We have to assign the varible with the respect value
  float M;
  float K;
  float Factor;
 
int main(void) {
   Factor=.6213712; //Define the varibale F

printf("Insertar kilometros\n");
scanf("%f", &K);

M=(K*Factor);  
printf("Son %f millas", M);

  return 0;
}

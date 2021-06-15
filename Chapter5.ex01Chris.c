#include <stdio.h>

int main(void) {
  //Establecer el valor de la variable C=centigrados
  float F;
  float c;
  
  printf("Introduce el valor de los centigrados\n");
  //Una vez introducido el valor de los centigrados, se sustituye en la formula. 
  scanf("%F", &c);

  F=9/5*c +32;
  
  printf("Son %.F Grados Fahrenheit", F);

  return 0;
}

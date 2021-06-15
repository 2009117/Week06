#include <stdio.h>

int main(void) {
  float W;
  float H;
  float P;
  //Firts we determine the value of each measure
  printf("Introduce the Width\n");
  scanf("%f", &W);
  printf("Introduce the Height\n");
  scanf("%f", &H);

  // Now, we introduce the values into the formula
  
  P=2*(W)*(H);
  printf("The perimeter is %.2f", P);


  return 0;
}

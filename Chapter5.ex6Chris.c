#include <stdio.h>
//In the following programm we are going to convert Minutes to Hours in the format (90 minutes=1 hour 30 minutes)

int M;
int H;
int T;
int main(void){
printf("Insert a minutes\n");
 scanf("%d", &M);

 H = (M/60);
 T= (M % 60) ;

 printf("They are %d hours with %d minutes", H, T);


return 0;
}

#include <stdio.h>


int main(void){
  printf("CELSIUS TO FAHRENHEIT TABLE\n");

  float fahr, celcius;
  float lower, upper, step;

  lower = 0;
  upper = 40;
  step = 1;

  celcius = lower;

  while(celcius <= upper){
    fahr = celcius * 1.8 + 32 ;
    printf("%.1f\t%.1f\n", celcius, fahr);
    celcius = celcius + step;
  }
  
}

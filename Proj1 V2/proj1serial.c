// Andre Philipe Andriotti de Moraes - TIA:32013965
// Thayná Gomes da Silva - TIA:32092229

#include <stdio.h>

int main(void) {
  long int T = 10000000000;
  double sum = 0;
  for (long int i = 1; i <= T; i++){
      sum += 1 / (double) i;
  }

  printf("ln(%ld) = %.3f\n", T, sum);
  
  return 0;
}

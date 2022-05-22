// Andre Philipe Andriotti de Moraes - TIA:32013965
// Thayná Gomes da Silva - TIA:32092229

#include <stdio.h>

int main(void) {
  int T = 10;
  float sum = 0;
  for (float i = 1; i <= T; i++){
      sum += (1/i);
  }

  printf("ln(%d) = %.3f\n", T, sum);
  return 0;
}

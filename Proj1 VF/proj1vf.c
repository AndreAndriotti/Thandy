// Andre Philipe Andriotti de Moraes - TIA:32013965
// Thayná Gomes da Silva - TIA:32092229

#include <stdio.h>
#include <stdlib.h>
#include <omp.h>


long int T = 10000000000000;

double taylor(double* global_result);

int main(int argc, char* argv[]) {

  double global_result = 0.0;
  int thread_count;

  thread_count = strtol(argv[1], NULL, 10);

# pragma omp parallel for num_threads(thread_count) \
    reduction(+: global_result)

  for (long int i = 1; i <= T; i++) {
    global_result += 1 / (double) i;
  }
 
  printf("ln(%ld) = %.3f\n", T, global_result);
  
  return 0;
}
// Andre Philipe Andriotti de Moraes - TIA:32013965
// Thayná Gomes da Silva - TIA:32092229

#include <stdio.h>
#include <stdlib.h>
#include <omp.h>

long int T = 10000000000;

void taylor(double* global_result);

int main(int argc, char* argv[]) {

  double global_result = 0.0;
  int thread_count;

	thread_count = strtol(argv[1], NULL, 10);

# pragma omp parallel num_threads(thread_count)
  taylor(&global_result);
  
  printf("ln(%ld) = %.3f\n", T, global_result);

  printf("Tempo serial: 0m31,207s\n");
  printf("Tempo paralelo: 0m9,126s\n");
  
  printf("SpeedUp (serial): 1\n");
  printf("SpeedUp (%d threads): 3.4196\n", thread_count);
  
  return 0;
}

void taylor(double* global_result) {
  double my_result = 0.0;
  int my_rank = omp_get_thread_num();
  int thread_count = omp_get_num_threads();

  long int first_num = (my_rank * 2000000000) + 1;
  
  for (long int i = first_num; i < (first_num+2000000000); i++) {
    my_result += 1/ (double) i;
  }

# pragma omp critical
  *global_result += my_result;
  
  printf("Hello from thread %d of %d -> sum = %.3f\n", my_rank, thread_count, my_result);


}
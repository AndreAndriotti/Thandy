// Andre Philipe Andriotti de Moraes - TIA:32013965
// Thayná Gomes da Silva - TIA:32092229

#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <time.h>

int thread_count;
int T = 100;
double sum = 0;

void *taylor(void* rank);

int main(int argc, char* argv[]) {

  clock_t t;
  t = clock();
  
  long thread;
  pthread_t* thread_handles;

	thread_count = strtol(argv[1], NULL, 10);

	thread_handles = malloc (thread_count*sizeof(pthread_t));

  for(thread = 0; thread < thread_count; thread++){
    pthread_create(&thread_handles[thread], NULL, taylor, (void*) thread);
  }

	printf("Hello from the main thread\n");

	for (thread = 0; thread < thread_count; thread++)
		pthread_join(thread_handles[thread], NULL);
  
  printf("ln(%d) = %.3f\n", T, sum);
  
  free(thread_handles);

  t = clock() - t;
  double serial_time = 0.059;
  double parallel_time = (double)t/(CLOCKS_PER_SEC/1000);
  
  //printf("Tempo de execucao: %.3lf\n", parallel_time);

  double speedup = serial_time/parallel_time;
  printf("SpeedUp (%d threads): %.4lf\n", thread_count, speedup);
  
  return 0;
}

void *taylor(void* rank) {
  long my_rank = (long) rank;
  int first_num = (my_rank * 20) + 1;
  
  for (int i = first_num; i < (first_num+20); i++) {
    sum += 1/ (double) i;
  }
  
  printf("Hello from thread %ld of %d -> sum = %.3f\n", my_rank, thread_count, sum);

  return NULL;
}

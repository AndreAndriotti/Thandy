// Andre Philipe Andriotti de Moraes - TIA:32013965
// Thayná Gomes da Silva - TIA:32092229

#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/shm.h>
#include <sys/wait.h>

int main(){
  
    pid_t child_pid;
    int shm_id; 

    // shmget(): função usada para criar uma área de memória compartilhada
    shm_id = shmget(IPC_PRIVATE, 4*sizeof(int), IPC_CREAT |  0666);
  
    if (shm_id < 0) 
    {
        printf("Erro no shmget\n");
    }
  
    // shmat(): função que liga o processo ao segmento de memória existente referenciado pelo identificador shm_id, retornando e armazenando um ponteiro para a memória alocada.
    int *value = (int*)shmat(shm_id, NULL, 0);
    *value = 1;
    printf("Variavel compartilhada: %i\n",*value);

    // fork(): função do processo pai que cria um processo filho
    child_pid = fork();
    printf("Childpid: %i\n",child_pid);
    
    if (child_pid == 0)
    {     
        *value+= 2;  

        printf("[Filho] Variavel compartilhada (+2): %i\n",*value);    
    }
    else
    {
        wait(NULL);     
        *value *= 4 ;

        printf("[Pai] Variavel compartilhada (*4): %i\n",*value);    
    }
  
    
    return 0;
}
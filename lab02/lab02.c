#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <unistd.h>
#include <sys/wait.h>


int main(int argc, char *argv[]){

   int i, num, j;
   __pid_t Ipid;

   printf ("Enter the number: ");


   scanf ("%d", &num);
   j = num;


    for (i=1; j > 1; j = j -1) {
        Ipid = fork();
    

        if (Ipid < 0){
        perror(argv[0]);
        exit(errno);
        }    
        
        //Filho
        if(Ipid == 0){
            printf("\nCodigo executado no processo filho\n");
            printf("\nFILHO-Processo pai.  PID:|%d|\n",getppid());
            printf("\nFILHO-Processo filho.PID:|%d|\n",getpid());
            
        /* printf("\nCodigo executado no processo filho\n");
            printf("\nFILHO-Processo pai.  PID:|%d|\n",getppid());
            printf("\nFILHO-Processo filho.PID:|%d|\n",getpid());
            
            if (j > 1){
                i=i*j;
                j--;
                fork();
            }else {
                EXIT_SUCCESS;
            }*/
        
            i=i*j;
        } 
        
        else{
            Ipid = wait(NULL);
        }
    }

    printf("The factorial of %d is %d\n",num,i);
    return 0;
   
}
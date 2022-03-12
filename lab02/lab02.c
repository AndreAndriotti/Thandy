#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>


int main(){

    int i, num, j;
    __pid_t Ipid;

    printf ("Enter the number: ");

    scanf ("%d", &num);
    j = num;

    for (i=1; j > 1; j--)
    {
        Ipid = fork();

        if (Ipid < 0)
        {
            perror("fork");
            exit(1);
        }    

        else if (Ipid != 0)
        {
            Ipid = wait(NULL);
            break;
        }

        else
        {
            printf("\n>>> Novo filho gerado!\n");
            printf("\nFILHO-Processo pai.  PID:|%d|",getppid());
            printf("\nFILHO-Processo filho.PID:|%d|\n",getpid());
            i = i * j;
            if(j == 2)
                printf("\nThe factorial of %d is %d\n",num,i);
        }
    }

    return 0;   
}
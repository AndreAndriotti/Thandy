>>> Como compilar o programa na plataforma disponibilizada

    Acesse a pasta Thandy/Proj1 V2.
    Para compilar o programa, utilizamos o gcc. 

        $ gcc -g -Wall -fopenmp -o proj1v2_critical proj1v2_critical.c
        $ gcc -g -Wall -fopenmp -o proj1v2_reduction proj1v2_reduction.c

>>> Como executar o programa

    $ ./proj1v2_critical 5
    $ ./proj1v2_reduction 5


>>> Como comprovar que os resultados propostos foram alcançados.

    Execução do código 1:



    
    Execução do código 2:

    ln(10000000000) = 23.603
    Tempo serial: 0m31,207s
    Tempo paralela: 0m7,281
    SpeedUp (serial): 1
    SpeedUp (5 threads): 4,2861 <- melhor speedup

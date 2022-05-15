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

    Hello from thread 3 of 5 -> sum = 0.776
    Hello from thread 2 of 5 -> sum = inf
    Hello from thread 0 of 5 -> sum = 21.994
    Hello from thread 1 of 5 -> sum = 0.693
    Hello from thread 4 of 5 -> sum = inf
    ln(10000000000) = inf
    
    
    Execução do código 2:

    ln(10000000000) = 23.603

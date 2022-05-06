>>> Como compilar o programa na plataforma disponibilizada

    Acesse a pasta Thandy/Proj1 V1.
    Para compilar o programa, utilizamos o gcc. 

        $ gcc -g -Wall -o proj1v1 'Proj1 V1.c' -lpthread

>>> Como executar o programa

    $ ./proj1v1 5


>>> Como comprovar que os resultados propostos foram alcançados.

    Execução do código:

    Hello from thread 0 of 5 -> sum = 3.598
    Hello from thread 3 of 5 -> sum = 4.965
    Hello from thread 2 of 5 -> sum = 4.680
    Hello from the main thread
    Hello from thread 1 of 5 -> sum = 4.279
    Hello from thread 4 of 5 -> sum = 5.187
    ln(100) = 5.187
    SpeedUp (5 threads): 0.0396

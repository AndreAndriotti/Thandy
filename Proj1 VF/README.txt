>>> Como compilar o programa na plataforma disponibilizada

    Acesse a pasta Thandy/Proj1 VF.
    Para compilar o programa, utilizamos o gcc. 

        $ gcc -g -Wall -fopenmp -o proj1vf proj1vf.c


>>> Como executar o programa

    $ ./proj1vf 6


>>> Como comprovar que os resultados propostos foram alcançados.

    Execução do código:

    ln(10000000000000) = 30.511


>>> Para calcular o tempo de execução dos programas, utilizamos a função time:

    $ time ./proj1vf 6


>>> Resultados:

    Qtd de threads = 6
    T = 10^13
    S = ln(10000000000000) = 30.511
    Tempo paralelo = 101m13,941s

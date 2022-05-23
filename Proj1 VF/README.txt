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


>>> O cálculo do SpeedUp foi realizado com T = 10^10, nas versões serial e paralelas (com critical e reduction):

    Obs: Estas versões podem ser encontradas na pasta Thandy/Proj1 V2.
    
    T = 10^10

    Tempo serial: 0m31,207s
    Tempo paralelo (critical): 0m9,126s
    Tempo paralelo (reduction): 0m7,281s

    SpeedUp serial: 1
    SpeedUp paralelo (critical): 3,4196
    SpeedUp paralelo (reduction): 4,2861 <- melhor SpeedUp
    
    Portanto, os resultados abaixo foram gerados com o programa paralelo com reduction.


>>> Resultados:

    Qtd de threads = 6
    T = 10^13
    S = ln(10000000000000) = 30.511
    Tempo paralelo = 101m13,941s

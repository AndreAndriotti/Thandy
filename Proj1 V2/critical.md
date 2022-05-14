# Controle de acesso à região crítica para a variável global compartilhada

Nossa variável compartilhada é a **global_result**.

Utilizamos o **#pragma omp critical** para evitar a condição de corrida, que acontece quando há possibilidade de resultados imprevísiveis ocorrer na execução de duas ou mais threads simultaneamente, assim, somente uma thread pode executar o bloco estruturado por vez. Então, se uma thread está em uma seção crítica, nenhuma outra thread pode estar na mesma seção crítica.


Para realizarmos todas as somas necessárias dentro da funcao taylor, usamos a variável **my_result** e só depois a variável compartilhada irá receber esse valor acumulado:

  *#pragma omp critical*
  
  *global_result += my_result;*




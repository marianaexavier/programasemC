# Questões teóricas - Lista 3

1. porque da segunda forma ele pode ultrapassar o tamanho do vetor e acabar acessando lixo de memória.

2. porque se tratam de posições de um vetor, e vetores estao intrissicamente ligados a ponteiros. logo, `v[i]` (posição i do vetor v) é igual ao ponteiro de que aponta pra o primeiro elemento de `v + i` (psoição i).

3. 
    1. ele retorna o valor em bytes de um tipo.
    2. é um inteiro sem sinal
    3. Poque ele retorna tamanhos, e tamanhos nunca são negativos. Isoo evita erros ao percorrer arrays e estruturas semelhantes

4. Descobre quantos bytes tem o array e divide pela quantidade de bytes que cada elemento do array ocupa (isso baseado no tipo do array).

5. porque quando um array é passado como parametro, na pratica, o que é passado é um ponteiro para o primeiro elemento do array. logo, quando sizeof(ar) recebe o array como parametro, ele calcula o tamanho do ponteiro e nao do array em si.

6. porque significa percorrer 3 elementos (posições de memória) dentro de um array.

7. 3 posições! o primeiro elemento de um array esta no indice 0, logo se voce soma 3 a esse ponteiro, ele passa a apontar para o elemento que está 3 posições a frente do primeiro elemento.

8. 
    1. o elemento que esta na posição 4 do array.
    2. o endereço do elemnto que esta na posição 4 do array.
    3. não sei quem é p2 e quem é p1

9. ambas referenciam o mesmo elemnto do array de formas diferentes. pois ponteiros e arrays são praticamente a mesma coisa.

10. `void MinhaFuncao(float *ar)` declara uma função que nao tem retorno que tem como parametro um ponteiro para o primeiro elemento do array ar. `void MinhaFuncao(float ar[])` declada tambem uma função sem retrono, porem, seu parametro é o proprio array (que na pratica tambem é um ponteiro).

11. para que o array possa saber onde o array termina e não acessar lixo de memória.

12. porque nao sao tipos de primeira classe, ou seja, nao podem ser acessados ou retornados diretamente. na pratica, o que seria retornado é um ponteiro para o primeiro elemento do array.

13. 
    1. é uma variavel que so exite dentrode um escopo de uma função, ela acaba logo apos a execução da função.
    2. porque ele cria uma variavel zumbi, que, apos a execução da função, deixara de existir e provalvelmnete ira ocupar lixo de memoria
    3. que ele, nesse caso, retornara lixo de memoria
    4. utilizando a função malloc.  

14.
    1. é um espaço na memória do computador alocado para algum propósito.
    2. malloc é uma função que aloca bytes dinamicamente no monte para um propsito e retorna um ponteiro para a primeira posição desse bloco de memoria 
    3. significa que nada foi alocado.
    4. para que ele nao aponte para lixo de memória    

15. para que seja alocado um espaço na memória que de fato comporte o tamanho do elementos que o array ira receber.

16. ela libera o bloco de memoria alocado apos a execucção do programa. em codigos maiores, traz mais eficiencia e evita erros que poderao sugir por conta de armazenamento.

17. para que o programa saiba quantas colunas terá de percorrer.

18.  existe um ponteiro que aponta para cada linha e cada linha da matriz é alocada como um ponteiro que, por sua vez, aponta para o primeiro elemneto da linha.
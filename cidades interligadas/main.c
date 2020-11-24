/*

VPL7 - Cidades interligadas
Disponível a partir de: Wednesday, 11 Nov 2020, 12:00
Data de entrega: Friday, 27 Nov 2020, 23:59
Arquivos requeridos: solucao.c (Baixar)
Tipo de trabalho: Trabalho individual
Considere n cidades numeradas de 0 a n-1 que estão interligadas por uma série de estradas de mão única. As ligações entre as cidades são representadas pelos elementos de uma matriz quadrada  Lnxn, cujos elementos lij assumem o valor 1 ou 0, conforme exista ou não estrada direta que saia da cidade i e chegue à cidade j. Assim, os elementos da linha i indicam as estradas que saem da cidade i, e os elementos da coluna j indicam as estradas que chegam à cidade j.

Por convenção lii = 1. A figura mostra um exemplo para n = 4.



Escreva um programa em C que leia uma matriz NxN e seus valores e ao final calcule:

A) Dado k, determinar quantas estradas saem e quantas chegam à cidade k.

B) Qual das cidades chega o maior número de estradas?

Mostre cada um dos valores determinados em uma linha. No caso da figura, considerando a cidade k = 3, as respostas seriam 1  1  2 porque existe uma estrada que sai da cidade 3, uma estrada que chega a cidade 3 e dois porque a cidade que recebe mais estradas é a número 2.

O programa deve ler a matriz linha por linha e ao final da entrada dos dados deve mostrar a matriz informada, uma linha de cada vez e os elementos devem estar separados por um espaço. Após mostrar a matriz o programa deve  solicitar k e mostrar os resultados. 

---------------------------------------------------------------------------------------------------------

Lembretes:

* Você deve resolver o problema no arquivo disponível no VPL ao abrir a aba Editar, não deve ser anexado nenhum arquivo;

* A correção é automática, portanto as instruções sobre entrada e saída são muito importantes. Sempre preste atenção ao exemplo apresentado junto com o problema;

* Não esqueçam de inserir as bibliotecas básicas;

* Lembrem-se que o comando \n avança o cursor para uma nova linha;

* Caso utilize o comando printf("") no início do programa, insira : no final do texto ou utilize \n para que essa informação não seja interpretada como saída do programa. Exemplo: printf("Utilize:") e/ou printf("Utilize \n").

---------------------------------------------------------------------------------------------------------

Exemplo de entrada:

4

1

1

1

0

0

1

1

0

1

0

1

1

0

0

1

1

3

Saída:

1 1 1 0

0 1 1 0

1 0 1 1

0 0 1 1

1

1

2

*/
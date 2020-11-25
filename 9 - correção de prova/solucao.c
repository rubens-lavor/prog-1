/*
VPL 9 - Correção de prova

Os professores do CTJ estão com dificuldades para calcular as notas dos alunos em suas disciplinas e solicitaram a sua ajuda para automatizar o processo. O sistema deverá funcionar da seguinte maneira:

             - O gabarito da prova que contém 10 questões será armazenado em um vetor. Todas as questões da prova são de múltipla escolha e a opção correta é um número entre 1 e 5;

            - Uma matriz armazenará as respostas dos alunos para cada questão, sendo a dimensão da matriz n x 10.

 Após o professor digitar o gabarito e a matriz de respostas o programa exibirá as seguintes informações:

            - A nota de cada aluno (entre 0 e 10), considerando que todas as questões têm o mesmo peso;

            - A média da turma (saída configurada com duas casas após a vírgula, utilze %.2f);

            - A quantidade de alunos com nota maior ou igual à média da turma e a quantidade de alunos com nota inferior à média da turma.

O objetivo do exercício é implementar uma solução para o problema utilizando funções. O programa principal está implementado no arquivo solucao,c e não deve ser modificado. A solução utiliza uma biblioteca gabarito.h que já está definida e também não deve ser modificada. O corpo das funções deve ser implementado no arquivo gabarito.c que está no exercício. 

Analise o programa principal juntamente com o protótipo das funções para deduzir o que deve ser implementado no arquivo gabarito.c. Você não deve alterar o protótipo das funções, basta escrever o corpo de cada função após concluir como ela funciona.

A entrada do programa deve ser:

- o total de alunos;

- o vetor gabarito, sendo que cada elemento do vetor deve ser informado com um scanf();

- a matriz de respostas, sendo que a matriz deve ser apresentada linha por linha e os dados devem ser informados com scanf();

A saída gerada deve ser:

- O vetor gabarito (em uma única linha);

- A matriz de respostas (uma linha por vez);

- O vetor de notas dos alunos (em uma única linha);

- A média da turma com duas casas após a vírgula, a quantidade acima e a quantidade abaixo devem ser informados nesta ordem e cada informação em uma linha diferentes. 

*/

#include <stdio.h>

#include "gabarito.h"

int main() {
    int x = 10, V[10], alunos, i, j, acima, abaixo;
    float media;
    scanf("%i/", &alunos);
    int M[alunos][x], Notas[alunos];
    gabarito(V);
    imprime_vet(V, 10);
    printf("\n");
    cria_matriz_respostas(M, alunos);
    calcula_notas(M, Notas, V, alunos);
    imprime_mat(M, alunos);
    imprime_vet(Notas, alunos);
    media = calcula_media_turma(Notas, alunos);
    printf("%.2f", media);
    acima = calcula_acima(Notas, media, alunos);
    printf("\n%i", acima);
    abaixo = calcula_abaixo(Notas, media, alunos);
    printf("\n%i", abaixo);
    return 0;
}

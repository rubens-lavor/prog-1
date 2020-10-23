/*
Caixas para sapatos


Uma loja de calçados está com um problema no seu estoque. Existem muitos sapatos espalhados e o dono não sabe se todos tem o seu par. Para resolver o problema ele resolveu colocar todos os pares em caixas e antes de comprar as caixas solicitou que você escrevesse um programa em C para contar quantos pares completos e corretos o estoque possui.

A primeira informação solicitada é o total de sapatos (N), que deve ser um número inteiro positivo. Após saber o total de sapatos o usuário deve informar para cada sapato o tamanho (TAM) do sapato (um valor inteiro) e uma letra indicando se é o pé direito (caracter ‘D’) ou esquerdo (caracter ‘E’). A informação deve estar separada por um espaço e lida na mesma linha. Considere 30 <=TAM <=60.

O programa deve permitir a análise de vários conjuntos de sapatos e deve parar quando o usuário informar N = -99.



---------------------------------------------------------------------------------------------------------

Exemplo de entrada:

4

40 D

41 E

41 D

40 E

Saída

2

Entrada

-99  // o programa para

*/

#include <stdio.h>
#include <string.h>

int main(){
    
    char str[10][4] = {};
    int n = 0;
    int par = 0;
    int aramazena_pos[20]={};
    int tem_no_array = 0;
    int pos = 0;
    
    int i;
    int k;
    int j;
    
    for (i = 0; i < 20; i++){
        aramazena_pos[i] = -1;
    }
    
    scanf("%d", &n);
    setbuf(stdin,NULL);
    
    while(n != -99){
        
        for (i = 0; i < n; i++){
            setbuf(stdin,NULL);
            fgets(str[i],6,stdin);
        }
        
        for (k = 0 ; k < n-1; k++){
            for (j = k + 1; j < n; j++){
                if(strncmp(str[k], str[j],2) == 0){
                    if(strncmp(str[k], str[j],4) == 0){
                        
                    }
                    else{
                        while(aramazena_pos[pos] != -1){
                            pos++;
                        }
                        
                        for (i = 0; i < pos; i++){
                            if(aramazena_pos[i] == k || aramazena_pos[i] == j){
                                tem_no_array = 1;   
                            }
                        }
                        
                        if(!tem_no_array){
                            aramazena_pos[pos] = k;
                            aramazena_pos[pos + 1] = j;
                            par++;
                        }
                    }
                }
            }
        }
        
        printf("%d\n", par);
        
        scanf("%d", &n);
        setbuf(stdin,NULL);
    }
    return 0;
}
#include <stdio.h>
#include <time.h>

void atribuir (float *v, int tan, float num){
    int i;
	for(i=0;i<tan;i++)
      v[i]=num;
}

int random(){
    return rand();
}

int main(void) {
	srand(time(NULL));
	//ler tamanho do vetor e elementos para o vetor
	float v[10], num;
	
	scanf("%f", &num);
	
	atribuir(v,10,num);
	int aleat = random()%10;
	if (v[aleat] == num) {
		printf("ok");
	} else {
		printf("algo incorreto ocorreu!");
	}
	
	return 0;
}
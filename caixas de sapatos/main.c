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
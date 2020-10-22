/* strncat example */
#include <stdio.h>
#include <string.h>

int main() {
    char str[][5] = {};
    char str1[200] = "";
    char str2[5];
    char str_aux_verifica[5];
    int n = 4;
    scanf("%d", &n);
    setbuf(stdin, NULL);
    //strcpy (str1,"To be ");
    //strcpy (str2,"or not to be");
    int par = 0;

    for (int i = 0; i < n; i++) {
        scanf("%s", str[i]);
        setbuf(stdin, NULL);
        //strncat(str[i], str2, 4);
        puts(str[i]);
    }

    printf("\n");

    for (int k = 0; k < n - 1; k++)
        for (int j = k + 1; j < n; j++)
            if (strncmp(str[k], str[j], 2) == 0) {
                if (strncmp(str[k], str[j], 4) == 0) {
                }else
                {
                    par ++;
                }
                
            }

    for (int i = 0; i < n; i++) {
        puts(str[i]);
    }

    /*  
    while (n > 0) {
        scanf("%s", str2);
        strncat(str1, str2, 4);
        puts(str1);
        n--;
    }

    n=4;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (str1[3*i + j] == str_aux_verifica[j]){

            }
        }
        
        
    }
    */

    /*
    setbuf(stdin, NULL);
    //fgets(str2, 4, stdin);
    scanf("%s", str2);
    strncat(str1, str2, 4);
    puts(str1);

    setbuf(stdin, NULL);
    scanf("%s", str2);
    //fgets(str2, 4, stdin);
    strncat(str1, str2, 4);
    puts(str1);

    setbuf(stdin, NULL);
    scanf("%s", str2);
    //fgets(str2, 4, stdin);
    strncat(str1, str2, 4);
    puts(str1);
    */

    return 0;
}

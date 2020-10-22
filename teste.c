/* strncat example */
#include <stdio.h>
#include <string.h>

int main() {
    char str1[200] = "";
    char str2[4];
    int n = 4;
    //strcpy (str1,"To be ");
    //strcpy (str2,"or not to be");

        scanf("%s",str2);
        //fgets(str2, 4, stdin);
        strncat(str1, str2, 3);
        puts(str1);

        setbuf(stdin, NULL);
        //fgets(str2, 4, stdin);
        scanf("%s",str2);
        strncat (str1, str2, 3);
        puts (str1);

        setbuf(stdin, NULL);
        scanf("%s",str2);
        //fgets(str2, 4, stdin);
        strncat(str1, str2, 3);
        puts(str1);

        setbuf(stdin, NULL);
        scanf("%s",str2);
        //fgets(str2, 4, stdin);
        strncat (str1, str2, 3);
        puts (str1);


    return 0;
}

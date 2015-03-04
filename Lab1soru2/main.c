#include <stdio.h>
#include <stdlib.h>

int main()
{
    char text[100];

    int i, j , k;
    int tmp = 0;
    int counter = 0;
    int countChar = 0;

        printf("write a text : ");
        scanf("%s",&text);

        for(i=0 ; text[ i] != '\0' ; i++){
            counter = 0 ;
            tmp++;
        for(j =0 ; text[ j ] != '\0' ; j ++){
            if(text[ tmp-1] == text[ j ]){
            counter++;
            }
        }

    printf("\n%d adet %c", counter, text[ tmp-1]);
    }
return 0;
}

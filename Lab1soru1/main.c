#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int* number;
    int i = 0, j = 0;

    number = (int*)malloc(2000);

    do{
        printf("Enter a number : ");

        scanf("%d",number+i);
/*   TEST
        printf("\n######\n");
        printf("%d. number = %d \t%p\n",i+1,*(number+i),number+i);
        printf("\n######\n");
*/
        i++;
    }while(*(number+i-1) != 0);

    printf("\n!!!!############!!!!\n\n");
    for(j = 0 ; j < i; j++){
//TEST      printf("%d. number = %d \t%p\n",j+1,*(number+j),number+j);
        printf("%d. number = %d\n",j+1,*(number+j));

    }
    return 0;
}

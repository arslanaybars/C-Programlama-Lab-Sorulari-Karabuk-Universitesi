#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    printf("Karesi alinacak sayi : ");
    scanf("%d",&i);

    printf("once %d\n",i);
    printf("once %p\n",&i);
    kare(&i);
    printf("\n\n--------------\n\n");
    printf("Sonra : %d\n",i);
    printf("Sonra adres : %p\n",&i);
    return 0;
}

void kare(int *k){
    *k = ((*k) * (*k));
}

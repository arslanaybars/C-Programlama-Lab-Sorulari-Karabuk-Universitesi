#include <stdio.h>
#include <stdlib.h>
#include <time.h>//srandý kullanmak icin kütüphanemizi ekledik

main(void)
{
    int a,b,n;

    printf("Kac adet sayiya yer ayirmak istiyorsunuz : ");
    scanf("%d",&n);

    a=malloc(n*sizeof(int));
    srand(time(NULL));

    for (b=0;b<n;b++){
        a = rand()%10001;
        printf("%d. sayi = %d\n",b+1,a);
    a++;
}

return 0;
}


#include <stdio.h>
int main()
{
    int liste[5][8],i,j;
    for(i=0;i<5;i++){
        for(j=0;j<8;j++){
            printf("%d nolu ogrenci ", i);
            printf("%d nolu sinavi", j);


            scanf("%d",&liste[i][j]);
        }

    }
    return 0;

}


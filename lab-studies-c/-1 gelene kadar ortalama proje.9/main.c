#include <stdio.h>
int main(){
int gs,sum=0,i=0;

while(gs!=-1){
        scanf("%d",&gs);
        i++;
        sum=sum+gs;


}
i--;
sum++;
      //  printf("toplam : %d",sum);
        printf("ortalama : %d",sum/i);
        return 0;
}

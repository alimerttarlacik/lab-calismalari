#include <stdio.h>
int main(){
    int gs,c,i=2;
   scanf("%d",&gs);
    while(i<gs){

     if(gs%i==0){
            c=1;
            break;}
    else  {i++;}
    }

 if(c==1){
    printf("asal sayi degildir");}
    else {
        printf("asal sayidir");}
 return 0;
}

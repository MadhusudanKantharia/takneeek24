#include <stdio.h>
int main(void) {
    int total,N,M;
    scanf("%d\n",&total);
    for(int i=1;i<=total;i++){
        scanf("%d %d\n",&N,&M);
        if(N<=M){
            printf("-1\n");
        }
        else{
            printf("%d\n",2*M+1);
        }
    }
}

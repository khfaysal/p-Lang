#include<stdio.h>
int main(){
    int i,r,j;
    scanf("%d",&r);
    for(i=1;i<=r;i++){
        for(j=i;j>=i;j--){
            printf("%d",j);
        }
        printf("\n");
    }
 return 0;
}

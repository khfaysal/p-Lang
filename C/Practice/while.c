#include <stdio.h>
int main(){
    int i;
    printf("Type a Number : \n");
    scanf("%d", &i);
    printf("The next numbers are :\n");
    do{
        printf("%d\n", i);
        i=i+4;
        }
        while(i<=20);
    return 0;
}
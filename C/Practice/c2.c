#include <stdio.h>
int main() {
    int i;
     printf("Odd numbers from 1 to 100 are : \n");
    for(i = 1; i <= 100; i++) 
        if(i%2!= 0) {
          printf("%d\n",i);
        }
    

    return 0;
}

#include <stdio.h>
int main() {
   float a;
   printf("Enter the total Unit usages : \n");
   scanf("%f",a);
   if(1.00<a && a<=400.00){
    printf("Total Unit Price %.2f Rs.",(a*0.5));
   }
   else if(400.00<a && a<=800.00){
    printf("Total Unit Price %.2f Rs.",((400*0.5)+((a-400)*0.65)));
   }
   else if(800.00<a && a<=1200.00){
    printf("Total Unit Price %.2f Rs.",((400*0.5)+(400*0.65)+((a-800)*0.80)));
   }
    return 0;
}
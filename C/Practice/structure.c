#include <stdio.h>
struct Book{
int isbn;
char title[100];
float price;
};
int main(){
    struct Book book[3];
    for(int i=0;i<3;i++){
        printf("Enter the ISBN no of Book %d: \t",i+1);
        scanf("%d",&book[i].isbn);
        printf("Enter the Title : \t");
        getchar();
        fgets(book[i].title,sizeof(book[i].title),stdin);
        printf("Enter the price :\t");
        scanf("%f",&book[i].price);
    }
    
    for(int i=0;i<3;i++){
        printf("Book %d Information :\n",i+1);
        printf("ISBN Number %d\n",book[i].isbn);
        printf("Title %s\n",book[i].title);
        printf("Price %f\n",book[i].price);
    }
    return 0;
}
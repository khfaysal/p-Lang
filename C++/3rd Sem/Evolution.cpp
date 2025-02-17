#include<bits/stdc++.h>
using namespace std;
int main(){
    
    
    char ar[100];
    cout<<"Enter the string: ";
    for(int i = 0; i<6; i++){
        cin>>ar[i];
    }
    cout<<"Enter the target String: "<<endl;
    char t;
    cin>> t;
    int count = 0;

    for(int i =0; i<10; i++){
        if(ar[i]== t){
            count++;
        }
    }
    cout<<"Target Found "<< count <<" times";
    return 0;
}
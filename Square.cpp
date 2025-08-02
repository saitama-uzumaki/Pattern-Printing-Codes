#include<iostream>
using namespace std;
//  * * * *  *  0
//  * * * *  *  1
//  * * * *  *  2
//  * * * *  *  3
//  * * * *  *  4
//  0 1 2 3  4


int main(){
    int n;
    cout<<"enter no.";
    cin>>n;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"*";
        }
        cout<<endl;
    }

}
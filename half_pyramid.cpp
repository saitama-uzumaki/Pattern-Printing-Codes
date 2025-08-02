#include<iostream>
using namespace std;

//  *                   1  n-i-1  
//  * *                 2
//  * * *               3
//  * * * *             4
//  * * * * *           5


int main(){
    
    int n;
    cout<<"size";
    cin>>n;

    for(int i=0;i<n;i++){
        // print i+1 stars
        for(int j =0 ;j<=i ;j++){
            cout<<"*";
        }
        cout<<endl;

    }


}
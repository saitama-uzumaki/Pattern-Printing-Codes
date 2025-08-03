
// *
// **
// ***
// ****
// *****
// *****
// ****
// ***
// **
// *

#include<iostream>
using namespace std;



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
    for(int i=n-1;i>=0;i--){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }




}
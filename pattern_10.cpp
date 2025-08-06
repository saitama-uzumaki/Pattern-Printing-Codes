#include<iostream>
using namespace std;
// A
// A B
// A B C
// A B C D
// A B C D E

// A B C D E
// A B C D
// A B C 
// A B 
// A

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        char s='A'-0;
        for(int j=0;j<=i;j++){
            cout<<s<<" ";
            s++;
        }
        cout<<endl;
    }
    cout<<endl;

    for(int i=n-1;i>=0;i--){
        char s='A'-0;
        for(int j=0;j<=i;j++){
            cout<<s<<" ";
            s++;
        }
        cout<<endl;
    }
}
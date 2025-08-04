#include<iostream>
using namespace std;

int main(){



int n;
cout<<"enter size";
cin>>n;

//left aligned triangle 

for(int i=0;i<n;i++){
    for(int j=0;j<i+1;j++){
        cout<<"*";
    }
    cout<<endl;
}

// right aligned triangle
for(int i=n-2;i>=0;i--){
    for(int j=0;j<i+1;j++){
        cout<<"*";
    }
    cout<<endl;
}


}
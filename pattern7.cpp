#include<iostream>
using namespace std;
                                        // n=5
                        // stars             space    
                                            
//          *            i=0    1            4        n-1-i=>5-1-0=>4  
//        * * *          i=1   3             3        n-1-i=>5-1-1=>3
//      * * * * *        i=2   5             2
//    * * * * * * *      i=3   2*i+1=7       1
//  * * * * * * * * *    i=4   2*i+1=9       0

//  *********
//   *******
//    *****
//     ***
//      *
int main(){
    int n;
    cout<<"enter size";
    cin>>n;
// upper triangle
    for(int i=0;i<n;i++){

        //space=n-1-i
        for(int j=0;j<n-1-i;j++){
            cout<<" ";
        }
        for(int j=0;j<2*i+1;j++){
            cout<<'*';
        }
        cout<<endl;
    }
        
 // lower triangle
 for(int i=n-2;i>=0;i--){ 
         for(int j=0;j<n-1-i;j++){
            cout<<" ";
        }
        for(int j=0;j<2*i+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
   

  

    

}
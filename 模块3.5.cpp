#include <iostream>
using namespace std;
int main(){
    int n;
    while(cin>>n){
    for(int i=1;i<=n+1;i++){
        for(int j=1;j<=2*(n+1-i);j++){
            cout<<" ";
        }
        for(int k=0;k<i;k++){
        cout<<"*";
                    }
            cout<<endl;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=2*i;j++){
            cout<<" ";
        }
        for(int k=0;k<(n+1-i);k++){
        cout<<"*";
                    }
            cout<<endl;
    }   
         
         
    }
}

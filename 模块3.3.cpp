#include <iostream>
using namespace std;
int main(){
char c;
cin>>c;
int n=c-'A'+1;
    for(int i=0;i<n;i++){
        for(int j=0;j<c-'A'-i;j++)
        {cout<<' ';}
        for(char ch='A';ch<='A'+i;ch++)
        {cout<<ch;}
        for(char ch1='A'+i-1;ch1>='A';ch1--)
        {cout<<ch1;}
        cout<<endl;
    }
    return 0;
}

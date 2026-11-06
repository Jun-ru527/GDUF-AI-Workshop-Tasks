#include <iostream>
using namespace std;
int main(){
  long long X,Y;
    cin>>X>>Y;
long long Z;
    if(Y%X==0){
         
     Z=X+Y;   
    }
   else{
       Z=Y-X;
   } 
    cout<<Z<<endl;
  return 0;  
}

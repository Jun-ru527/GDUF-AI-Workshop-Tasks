#include <iostream>
using namespace std;
int main(){
int n,k,m;
cin>>n>>k>>m;
bool alive[105];
for(int i=0;i<n;i++){
	
	alive[i]=true;
}	
int left=n;
int index=k;
int count=1;
while(left>1){
	if(alive[index]){
		if(count==m){
			alive[index]=false;
			left--;
			count=1;
		}
	    else{
		count++;
	     }
	}
	index=(index+1)%n;
}
for(int i=0;i<n;i++){
	if(alive[i]){
		cout<<i<<endl;
		break;
	}
}
	
return 0;	
	
}

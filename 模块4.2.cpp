#include<iostream>
using namespace std;
int main(){
int ans=0;
int n,x;
cin>>n>>x;
for(int i=1;i<=n;i++){
	int temp=i;
	while(temp>0){
	if(temp%10==x){
			ans++;
		}
		temp=temp/10;
	}
}	
	
cout<<ans<<endl;	
	
}

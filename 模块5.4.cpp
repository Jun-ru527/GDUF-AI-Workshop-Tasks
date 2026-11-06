#include  <iostream>
using namespace std;
int main(){
	int x,y;
	cin>>x>>y;
	int ans=0;
	for(int i=x;i<=y;i++){
		int temp=i;
		int sum=0;
		while(temp>0){
			int digit=temp%10;
			sum+=digit;
			temp=temp/10;	
		}
		if(sum%5==0){
			ans++;
		}
	}
	cout<<ans<<endl;
	return 0;
	
}

#include <iostream>
using namespace std;
int count(int n,int x){
	int cnt=0;
	while(n>0){
		if(n%10==x){
			cnt++;
		}
		n/=10;
	}
	return cnt;
}
int main(){
	int y,m,x;
	while(cin>>y>>m>>x){
	int days=31;
	if(m==4||m==6||m==9||m==11){
		days=30;
	}
	else if(m==2){
		if((y%400==0)||(y%4==0&&y%100!=0)){
			days=29;
		}	
		else{
			days=28;
		}
		}
		int total=0;
			total+=count(y,x)*days;
			if(m<10&&x==0){
				total+=days;
			}
			total+=count(m,x)*days;
			for(int i=1;i<=days;i++){
				if(i<10&&x==0){
					total++;
				}
				total+=count(i,x);
			}
		cout<<total<<endl;
	}
	
	
	return 0;
	
}

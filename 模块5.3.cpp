#include <iostream>
using namespace std;
bool isPrime(long long n){
	if(n<=1)return false;
	for(long long i=2;i*i<=n;i++){
		if(n%i==0){
			return false;
		}
	}
	return true;
}
int main(){
	long long t;
	cin>>t;
	long long huiwenshu=t;
	long long temp=t/10;
	while(temp>0){
		long long digit=temp%10;
		huiwenshu=huiwenshu*10+digit;
		temp=temp/10;
	}
	if(isPrime(huiwenshu)){
		cout<<"prime"<<endl;
		
	}
	else{
		cout<<"noprime"<<endl;
	}
	return 0;
}

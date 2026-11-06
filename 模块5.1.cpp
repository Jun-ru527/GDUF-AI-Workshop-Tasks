#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[105];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
if(n==1){
	if(arr[0]==0){
		cout<<"UP"<<endl;
	}
	else if (arr[0]==15){
		cout<<"DOWN"<<endl;
	}
	else{
		cout<<-1<<endl;
	}
}
else{
	int last=arr[n-1];
	int prev=arr[n-2];
	if(last==15){
		cout<<"DOWN"<<endl;
	}
	else{
		if(last-prev>0){
			cout<<"UP"<<endl;
		}
		else{
			cout<<"DOWN"<<endl;
		}
	}
	
	
}

}

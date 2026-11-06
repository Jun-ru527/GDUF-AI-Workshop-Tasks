#include <iostream>
#include <algorithm>
using namespace std;
int main(){
int n;
cin>>n;
long long a[n];
for(int i=0;i<n;i++){
	cin>>a[i];
}	
sort(a,a+n);
for(int i=2;i<n;i++){
	if(a[i-2]+a[i-1]>a[i]){
		cout<<a[i-2]<<" "<<a[i-1]<<" "<<a[i]<<endl;
		return 0;
	}
}
cout<<"No solution"<<endl;
return 0;
}

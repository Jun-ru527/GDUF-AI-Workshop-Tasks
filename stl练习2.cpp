#include <iostream>
#include <algorithm>
using namespace std;
struct node{
long long a;
long long b;	
};
bool cmp(node x,node y){
	return(x.a-x.b)>(y.a-y.b);
}
int main(){
long long n,k;
cin>>n>>k;
node choco[100005];
for(int i=0;i<n;i++){
	cin>>choco[i].a;
}	
for(int i=0;i<n;i++){
	cin>>choco[i].b;
}	
sort(choco,choco+n,cmp);
long long ans=0;
for(int i=0;i<k;i++){
	ans+=choco[i].a;
}
for(int i=k;i<n;i++){
	ans+=choco[i].b;
}
	
cout<<ans<<endl;	
return 0;
}

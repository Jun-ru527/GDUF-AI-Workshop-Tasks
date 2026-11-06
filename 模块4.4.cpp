#include<iostream>
using namespace std;
int main(){
int tree[10005];
int L,M;
cin>>L>>M;
for(int i=0;i<=L;i++){
	tree[i]=1;
}	
for(int j=0;j<M;j++){
	int l,r;
	cin>>l>>r;
	for(int k=l;k<=r;k++){
		tree[k]=0;
	}
}
int cns=0;
for(int i=0;i<=L;i++){
	if(tree[i]==1){
		cns++;
	}
}
	
cout<<cns<<endl;	
	
}

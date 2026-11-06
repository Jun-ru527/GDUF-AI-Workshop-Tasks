#include <iostream>
#include <string>
using namespace std;
int main(){
int a[10];
for(int i=0;i<10;i++){
	cin>>a[i];
}	
int odd=0;
for(int i=0;i<10;i++){
	if(a[i]%2!=0){
		odd++;
	}
}
if(odd>1){
	cout<<-1<<endl;
	return 0;
}
	string center="";
	for(int i=0;i<10;i++){
		if(a[i]%2!=0){
			center+=(char)('0'+i);
			a[i]--;
			break;
		}
	}
	string left="";
	for(int i=1;i<=9;i++){
		if(a[i]>0){
			left+=(char)('0'+i);
			a[i]--;
			break;
		}
	}
	if(left==""){
		if(center!=""&&a[0]==0){
			cout<<center<<endl;
		}
        else{
			cout<<-1<<endl;
		}
		return 0;
}
for(int i=0;i<10;i++){
	for(int j=0;j<a[i]/2;j++){
		left+=(char)('0'+i);
	}
}
string right="";
for(int i=left.length()-1;i>=0;i--){
	right+=left[i];
}
cout<<left<<center<<right<<endl;
return 0;
}


#include <iostream>
#include <string>
using namespace std;
int main(){
string s;
cin>>s;
int count=0;
bool is_Good=true;
for(int i=0;i<s.length();i++){
	if(s[i]=='a'){
		
	count++;	
	}
	else{
		count--;
	}
	if(count<0){
		is_Good=false;
		break;
	}
}
if(count!=0){
	is_Good=false;
}



if(is_Good){
	cout<<"Good"<<endl;
}
else{
	cout<<"Bad"<<endl;
}
return 0;
}

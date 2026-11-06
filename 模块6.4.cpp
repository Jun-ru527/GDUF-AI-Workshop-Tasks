#include <iostream>
#include <string>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		string ans="";
		int n=s.length();
		for(int i=0;i<n;){
		if(s[i]=='0'||s[i]=='2'||s[i]=='4'||s[i]=='6'||s[i]=='9'){
			ans+=s[i];
			i++;
		}
		else if(s[i]=='z'&&i+3<n&&s.substr(i,4)=="zero"){
			ans+='0';
			i+=4;
		}
		else if(s[i]=='t'&&i+2<n&&s.substr(i,3)=="two"){
			ans+='2';
			i+=3;
		}
		else if(s[i]=='f'&&i+3<n&&s.substr(i,4)=="four"){
			ans+='4';
			i+=4;
		}	
		else if(s[i]=='s'&&i+2<n&&s.substr(i,3)=="six"){
			ans+='6';
			i+=3;
		}
		else if(s[i]=='n'&&i+3<n&&s.substr(i,4)=="nine"){
			ans+='9';
			i+=4;
		}
		else{
			i++;
		}
		
		
		}
		
		cout<<ans<<endl;
		
		
	}

	return 0;
}

#include <iostream>
#include <string>
using namespace std;
int main(){
	int skip[10][10]={0};//数组
	skip[1][3]=skip[3][1]=2;//二维数组里的变量
	skip[4][6]=skip[6][4]=5;
	skip[7][9]=skip[9][7]=8;
	skip[1][7]=skip[7][1]=4;
	skip[2][8]=skip[8][2]=5;
	skip[3][9]=skip[9][3]=6;
	skip[3][7]=skip[7][3]=5;
	skip[1][9]=skip[9][1]=5;
	string s;
	while(cin>>s){
	bool visited[10]={false};
	bool is_valid=true;
	for(int i=0;i<s.length();i++){
		int curr=s[i]-'0';
		if(visited[curr]==true){
			is_valid=false;
			break;
		}
		if(i>0){
			int prev=s[i-1]-'0';
			int mid=skip[prev][curr];
			if(mid!=0&&visited[mid]==false){
				is_valid=false;
				break;
			}
			
		}
		visited[curr]=true;
	}
	if(is_valid){
		
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}
		
	
	}
	return 0;
}

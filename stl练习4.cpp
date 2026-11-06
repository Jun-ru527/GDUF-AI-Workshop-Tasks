#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
bool cmp(string a,string b)//自定义排序规则函数，返回值类型为真或假
{
	return a+b>b+a;
}
int main(){
	int n;
	cin>>n;
string a[25];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n,cmp);//告诉sort该怎么排列，默认a再到b，若返回值为真，sort将不改变位置，若返回值为假，则sort会改变位置！注意 sort是不停的将数组的数两两塞进cmp规则中！
	for(int i=0;i<n;i++){
		cout<<a[i];
	}
	cout<<endl;
	return 0;
}

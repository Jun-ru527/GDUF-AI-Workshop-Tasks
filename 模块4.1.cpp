#include<iostream>
#include<cstdio>
using namespace std;
int main(){
  int T;
    cin>>T;
   while(T--){
       int n;
       cin>>n;
      long long arr[100005];
       for(int i=0;i<n;i++){
          cin>>arr[i]; 
       }
      long long max_val=arr[0];
      long long min_val=arr[0];
       for(int i=0;i<n;i++){
          if(arr[i]>max_val){
              max_val=arr[i];
          }
           if(arr[i]<min_val){
               min_val=arr[i];
           }
       }
       long long jicha=max_val-min_val;
       long long sum=0;
       for(int i=0;i<n;i++){
           sum=sum+arr[i];   
       }
      double average=(double)sum/n;
       double sum_sq=0;
       for(int i=0;i<n;i++){
           double diff=arr[i]-average;
           sum_sq=sum_sq+diff*diff;
       }
    double fangcha=(double)sum_sq/n;
           
   printf("%lld %.3f\n",jicha,fangcha);   
   }
 return 0;
     
}

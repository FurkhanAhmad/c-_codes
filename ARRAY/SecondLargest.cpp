#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int Secondlargests(int arr[],int n){
    int ans=INT_MIN;
  int idx=0;
    for(int i=0;i<n;i++){
        if(arr[i]>ans)
        ans=arr[i];
    }
  
   
    int second=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]!=ans){
            second=max(second,arr[i]);
            idx=i;
        }
    }
    cout<<idx<<endl;
    return second;

}
int main(){
    int arr[]={2,4,5,6,7};
    cout<<Secondlargests(arr,5)<<endl;

}
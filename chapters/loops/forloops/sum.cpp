#include<iostream>
using namespace std;
  void print(int arr[],int n){
  for(int i=0;i<n;i++)
  {
  cout<<arr[i]<<endl;
  }
  }
int main(){
  int arr[]={10,30,40,50,60,70,80,50,30,60};
  print(arr,10);
  int sum=0;
  for(int i=0;i<10;i++){
    sum=sum+arr[i];
  }
  cout<<sum;
}


  

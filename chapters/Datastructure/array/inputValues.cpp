#include<iostream>
using namespace std;
int main(){
  int a[10];
  int data;
  for(int i=0;i<10;i=i+1){
    cout<<"Enter the value of array on "<<i<<" position : ";
    cin>>data;
    a[i]=data;
  }
  cout<<"Now the array becomes like this ";
  for(int i=0;i<10;i=i+1){
    cout<<a[i]<<" ";
  }
  
}

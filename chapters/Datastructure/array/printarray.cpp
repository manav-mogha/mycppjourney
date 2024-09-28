#include<iostream>
using namespace std;
int main(){

  int arr[5]={4,6,8,10,12};
  int sum=0;
  for(int i=0;i<5;i++){
    cout<<arr[i]<<",";
  }
  cout<<endl;
  for(int a=0;a<5;a++){
    sum=sum+arr[a];
  }
  cout<<"Sum is = "<<sum;
}


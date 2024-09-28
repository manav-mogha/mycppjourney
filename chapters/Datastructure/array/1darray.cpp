#include<iostream>
using namespace std;
int main(){

  int arr[5],sum=0;
  
  for(int i=0;i<5;i++){
    cout<<"Enter the element of array on "<<i<<" position : ";
    cin>>arr[i];

    sum=sum+arr[i];
  }
  cout<<"Sum of array = "<<sum;

}

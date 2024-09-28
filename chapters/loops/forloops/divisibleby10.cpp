#include<iostream>
using namespace std;
int main(){

  int sum=0;
  int n;
  cout<<"Enter a number ";
    cin>>n;
  for(int i=1;i<=n;i++){
    sum=sum+i*10;
  }
  cout<<"The sum of numbers divisible by 10 is : "<<sum;

}

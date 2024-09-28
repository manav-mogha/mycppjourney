#include<iostream>
using namespace std;
int main(){
  int sum = 0;
  int n;
  cout<<"Enter the number";
  cin>>n;
  for(int i=1;i<=n;i++){
    sum=sum+i*2;
  }

  //int i=1;
  //while(i<=n){
  //  i++
  //}
  cout<<"Sum is"<<sum; 

}

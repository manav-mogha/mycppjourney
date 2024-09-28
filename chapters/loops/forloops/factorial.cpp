#include<iostream>
using namespace std;
int main(){
  int sum=1;
  int n;
  cout<<"Enter an integer : ";
    cin>>n ;

  if(n<0){
  cout<<"Factorial of negative integer doesn't exist : ";
  }
  
  else{
  for(int i=1;i<=n;i++){
      sum=sum*i;
  }
  cout<<"Factorial of "<<n<<"="<<sum<<endl;
  }
}

#include<iostream>
using namespace std;
int main(){
  int ans = 1;
  int n;
  cout<<"Enter the number";
  cin>>n;
  for(int i=1;i<=n;i++){
    ans=ans*i;
  }

  //int i=1;
  //while(i<=n){
  //  i++
  //}
  cout<<"Product is "<<ans; 
}

#include<iostream>
using namespace std;
int main(){

  int n;
  cout<<"Enter the numbers of rows : ";
  cin>>n;

  for(int i=0;i<n;i++){

    for(int j=1;j<=i+1;j++){
      cout<<"*"; 
    }
    cout<<endl;
  }
  for(int i=0;i<n;i++){

    for(int j=1;j<=n-i;j++){
      cout<<"*"; 
    }
    cout<<endl;
  }

}

#include<iostream>
using namespace std;
int main(){

  int a;
  cout<<"Enter the value : ";
    cin>>a;

  for(int i=1;i<=a;i++){
    for(int h=1;h<=a;h++){
    for(int j=1;j<=a;j++){
      for(int k=1;k<=a;k++){
      cout<<"value : "<<i<<","<<h<<","<<j<<","<<k<<endl;
    }
     // cout<<"*";
    }
    //cout<<endl;
  }

}
}

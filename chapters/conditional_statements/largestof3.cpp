#include<iostream>
using namespace std;

int main(){

  int a,b,c ;

  cout<<"Enter a number a ";
  cin>>a ;

  cout<<"Enter a number b ";
  cin>>b ;

  cout<<"Enter a number c ";
  cin>>c ;

  if(a>b && a>c){
    cout<<"a is largest";
  }
  else if(b>a && b>c){
    cout<<"b is largest";
  }
  else if(c>a && c>b){
    cout<<"c is largest";
  }
  else {
    cout<<"Enter only numbers";
  }





}

#include<iostream>
using namespace std;
int main(){

  int a[4],index;
  a[0]=100;
  a[1]=2;
  a[2]=34;
  a[3]=3;
  cout<<a<<endl;
  cout<<*(a+1)+1<<endl;
  cout<<a+2<<endl;
  cout<<*a<<endl;
  //cout<<(a+1)*(*(a+2));
  //
  int b=1;
  char ch='1';
  cout<<b+ch;
}

/// *a = a[0]
/// *(a+1) = a[1]
/// *(a+2) = a[2]
/// *a + 1 = a[0]+1
/// Dereferencing
/// *(a+1) + 1;

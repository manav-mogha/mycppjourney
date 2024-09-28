#include<iostream>
using namespace std;
int main(){

  int arr[5]={2,3,4,5,6};
  int product=1;
  for(int a=0;a<5;a++){
    cout<<arr[a];
  }
  cout<<endl;
  for(int i=0;i<5;i++){
    product=product*arr[i];
  }
  cout<<"Product of array is = "<<product;
}


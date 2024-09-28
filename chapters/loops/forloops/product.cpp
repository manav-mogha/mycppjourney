#include<iostream>
using namespace std;
void print(int arr[],int n){
  for(int i=0;i<n;i++){
    cout<<arr[i]<<endl;
  }
}
int main(){
  int arr[]={10,20,30,40,50,60,70,80,90,50};
  print(arr,10);
  int product=1;
  for(int i=0;i<10;i++){
    product=product*arr[i];
  }
  cout<<product;
}

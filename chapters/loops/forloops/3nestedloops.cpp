#include<iostream>
using namespace std;
int main(){

  int arr[10][10];
  int a,n;
  cout<<"Enter number of row : ";
  cin>>a;
  cout<<"Enter number of columns : ";
  cin>>n;

  for(int i=0;i<a;i++){

    for(int j=0;j<n;j++){
    cout<<"Enter the value of array on "<<i<<","<<j<<" position : ";
      cin>>arr[i][j];
    }
    cout<<endl;
  }
  cout<<"Now your array become like this : "<<"\n";
  for(int i=0;i<a;i++){

    for(int j=0;j<a;j++){
      cout<<arr[i][j]<<"\t";
    }
    cout<<endl;
  }
}

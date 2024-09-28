#include<iostream>
using namespace std;
int main(){

  int arr[20][20],sum=0,r,c;
  
  cout<<"Enter the number of rows and columns in array : ";
  cin>>r>>c;

  for(int i=0;i<r;i++){

    for(int j=0;j<c;j++){
    cout<<"Enter the element of array on "<<i<<","<<j<<" position : ";
    cin>>arr[i][j];

    sum=sum+arr[i][j];
    }
  }
  cout<<"Sum of array = "<<sum;
}


#include<iostream>
using namespace std;
int main(){

  int arr[10],data;

  for(int i=0;i<10;i++){
    cout<<"Enter the value of array on "<<i<<" position : ";
    cin>>data ;

    arr[i]=data;
    }
    cout<<"Now your array become like this : ";

    for(int i=0;i<10;i++){
      cout<<arr[i]<<"\t";
    }
}

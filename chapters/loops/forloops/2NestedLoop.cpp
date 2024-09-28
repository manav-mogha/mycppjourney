#include<iostream>
using namespace std;
int main(){

  int a;
  int arr[5][5];
 // cout<<"Enter the value : ";
   // cin>>a;
  a=5;
 
  for(int i=0;i<a;i++){
    for(int h=0;h<a;h++){
        cout<<"Enter the value of array in " <<i<<","<<h<<" location : ";
        cin>>arr[i][h];
    }
      cout<<endl;
    }
  cout<<"Array becomes \n" ;
  for(int i=0;i<a;i++){
    for(int h=0;h<a;h++){
      cout<<arr[i][h]<<"\t";
    }
      cout<<endl;
    }

  }




#include<iostream>
using namespace std;
int main(){

  int arr1[20][20],arr2[20][20],sum=0,r,c;
  
  cout<<"Enter the number of rows and columns in both arrays : ";
  cin>>r>>c;

  for(int i=0;i<r;i++){

    for(int j=0;j<c;j++){
    cout<<"Enter the element of array1 on "<<i<<","<<j<<" position : ";
    cin>>arr1[i][j];
    
    }
  }
  
  cout<<"\n";

  for(int i=0;i<r;i++){

    for(int j=0;j<c;j++){
    cout<<"Enter the element of array2 on "<<i<<","<<j<<" position : ";
    cin>>arr2[i][j];

    }
  }
   
  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
    cout<<arr1[i][j]<<"," ;
    }
    cout<<endl;
  }

  cout<<"\n";

  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
    cout<<arr2[i][j]<<",";
    }
    cout<<endl;
  }

  cout<<"\nSum of array : \n";
  
   for(int i=0;i<r;i++){
     for(int j=0;j<c;j++){
     cout<<arr1[i][j]+arr2[i][j]<<"," ;
    }
    cout<<endl;
  }



 // cout<<"Sum of array = "<<sum;
}


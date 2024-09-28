#include<iostream>
using namespace std;
int main(){

  int arr1[20][20],arr2[20][20],a,b;
  cout<<"Enter the number of rows you want in the array : ";
    cin>>a;
  cout<<"Enter the number of columns you want in the array : ";
    cin>>b;
  cout<<"Entering the values of array 1 \n";
    for(int i=0;i<a;i++){

      for(int j=0;j<b;j++){
      cout<<"Enter the element of array1 on "<<i<<","<<j<<" position : ";
        cin>>arr1[i][j];
    }
  }
 cout<<"Entering the values of array 2 \n";
    for(int i=0;i<a;i++){

      for(int j=0;j<b;j++){
      cout<<"Enter the element of array2 on "<<i<<","<<j<<" position : ";
        cin>>arr2[i][j];
    }
  }

  cout<<"Now your array1 become like this : \n ";
    for(int i=0;i<a;i++){

    for(int j=0;j<b;j++){
      cout<<arr1[i][j]<<"\t"; 
    }
    cout<<endl;
  }
 cout<<"Now your array2 become like this : \n ";
    for(int i=0;i<a;i++){

    for(int j=0;j<b;j++){
      cout<<arr2[i][j]<<"\t"; 
    }
    cout<<endl;
  }
  cout<<"Sum of the two matrices \n";
 for(int i=0;i<a;i++){

    for(int j=0;j<b;j++){
      cout<<arr1[i][j]+arr2[i][j]<<"\t"; 
    }
    cout<<endl;
  }
  cout<<"Difference of the two matrices \n";
 for(int i=0;i<a;i++){

    for(int j=0;j<b;j++){
      cout<<arr1[i][j]-arr2[i][j]<<"\t"; 
    }
    cout<<endl;
  }




}

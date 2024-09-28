//Input : 5
//Output
//*****
//****
//***
//**
//*

//Input : 10
//Output
//**********
//*********
//*******
//******
//*****
//****
//***
//**
//*
#include<iostream>
using namespace std;
int main(){
  int manavboiii;
  cout<<"Enter the number : ";
  cin>>manavboiii;


  for(int i=0;i<manavboiii;i++){
     
  

    for(int j=0;j<manavboiii-i;j++){
      cout<<"Value [i,j] : "<<i<<","<<j<<endl;
    }


  }
}

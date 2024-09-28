#include<iostream>
using namespace std;

int main(){

  int marks ;

  cout<<"Enter your marks out of 100 = ";
  cin>>marks ;

  if(marks>90){
  cout<<"A+" ;
  }

  else if(marks>80 && marks<90){
  cout<<"A" ;
  }

  else if(marks>70 && marks<80){
  cout<<"B" ;
  }

  else if(marks>60 && marks<70){
  cout<<"C" ;
  }

  else if(marks>50 && marks<60){
  cout<<"D";
  }

  else if(marks>40 && marks<50){
  cout<<"E" ;
  }

  else{
  cout<<"fail" ;
  }

}

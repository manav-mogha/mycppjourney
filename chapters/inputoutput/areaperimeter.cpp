#include<iostream>
using namespace std;

int main(){

  int l,w ;
  float area,perimeter ;
  char c ;

  cout<<"Enter the length of rectangle(in cm) ";
  cin>>l ;

  cout<<"Enter the width of rectangle(in cm) ";
  cin>>w ;

  area = l*w ;
  perimeter = 2*(l+w) ;

  cout<<"Area of rectangle = "<<area;

  cout<<"Perimeter of rectangle = "<<perimeter;



}

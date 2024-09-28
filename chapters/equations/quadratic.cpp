#include<iostream>
#include<math.h>
using namespace std;
int main(){

  int a,b,c ;
  float determinant,root1,root2 ;

  cout<<"Enter coefficient a,b,c " ;
  cin>> a >>b >> c ;
  /// There are three cases of determinant
  /// when D = 0
  ///   when both zeroes are identical.
  ///   x^2+4x+4=0 or (x+2)^2=0
  /// when D > 0
  ///   when zeroes are unique
  ///   x^2+3x+1=0 or (x+1)(x+2)=0
  /// when D < 0
  ///   roots does not exist
  ///   x^2+x-100=0
  determinant = b*b-4*a*c ;
  if(determinant>=0){
    float D = sqrt(determinant);
    root1 = ( -b+D )/(2*a);
    root2 = ( -b-D )/(2*a);
    cout<<"The roots of the quadratic equations are " <<root1 <<","<<root2;
  }
  else{
    cout<<"Roots does not exist";
  }
  return 0;
  
}

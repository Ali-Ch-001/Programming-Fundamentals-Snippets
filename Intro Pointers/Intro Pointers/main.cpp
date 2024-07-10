//Introduction to pointers 
#include<iostream>

using namespace std;

int main(){

  int a = 10;
  cout<<"a = "<<a<<endl;
  cout<<"a address = "<<&a<<endl;

  int *p;
  p = &a;

  cout<<"p = "<<p<<endl;
  cout<<"Value at P = "<<*p<<endl;

  *p = 5;

  cout<<"a = "<<a<<endl;
  cout<<"Value at P = "<<*p<<endl;


  int A[3] = {1,2,3};
  int* AP;
  AP = A;
  cout<<"A address = "<<A<<endl;
  cout<<"AP = "<<A<<endl;
  cout<<"Value at AP = "<<*AP<<endl;
  cout<<"Value at AP Shifted by 1 = "<<*(AP+1)<<endl;
  cout<<"Value at AP Shifted by 1 = "<<AP[1]<<endl;

  cout<<"Address of A = "<<&A<<endl;
  cout<<"Address of AP = "<<&AP<<endl;

  int Matrix[3][3] = {{10,11,12},{21,22,23},{31,32,33}};
  int *pM;

  pM = &Matrix[0][0];

  cout<<"pM value = "<<*pM<<endl;
  cout<<"pM value = "<<*(pM+4)<<endl;
  *(pM+4) = 122;
  cout<<"pM value = "<<*(pM+4)<<endl;
  cout<<"Matrix value = "<<Matrix[1][1]<<endl;
  cout<<endl;
  cout<<"Check = "<<*&*&*&a<<endl;

  return 0;
}

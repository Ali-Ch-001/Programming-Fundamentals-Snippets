#include <iostream>
using namespace std;


int main(){
    printmessage();
    cout<<"Enter the tenprature in celsius"<<endl;
    float tempCel = 0;
    cin>>tempCel;
    cout<< (tempCel)*(1.8) + 32 <<" F"<<endl;
    return 0;
}
   

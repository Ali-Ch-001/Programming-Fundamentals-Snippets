#include <iostream>
#include <cmath>
using namespace std;
float mean_function(float X1,float X2,float X3,float X4 , float X5);
float standard_deviation_function(float x1,float x2, float x3,float x4,float x5,float x);

int main(){
    float x1,x2,x3,x4,x5 = 0.0;
    
    cout<<" Enter 5 numbers "<<endl;
    
    cin>>x1>>x2>>x3>>x4>>x5;
    mean_function(x1,x2,x3,x4,x5);
    
    cout<<mean_function(x1, x2, x3, x4, x5)<< " is the mean"<<endl;
    
    standard_deviation_function(x1, x2, x3, x4, x5,mean_function(x1, x2, x3, x4, x5) );
    
    cout<<standard_deviation_function(x1, x2, x3, x4, x5, mean_function(x1, x2, x3, x4, x5)) << " is the standard Deviation"<<endl;
    
    return 0;
    
}

float mean_function(float X1,float X2,float X3,float X4 , float X5){
    float x = 0;
    x = (X1+X2+X3+X4+X5)/5;
    return x;
    
}

float standard_deviation_function(float x1,float x2, float x3,float x4,float x5,float x){
    float s = 0.0;
    s = sqrt((pow((x1-x),2)+pow((x2-x),2)+ pow((x3-x),2)+pow((x4-x),2)+pow((x5-x),2))/5);
    return  s;
    
}

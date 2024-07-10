//
//  main.cpp
//  Functions
//

#include <iostream>
using namespace std;

float Voltage(float Volt_Value);

int main (){


cout<< Voltage(0.0) <<" Volts" <<endl;
    
return 0;
}

float Voltage(float Volt_Value)
{
    cout<<" Enter value of Current and Resistance"<<endl;
    float i,r;

    cin >> i >>r;
    Volt_Value = i*r;

return Volt_Value;

}

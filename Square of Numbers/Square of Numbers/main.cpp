#include <iostream>
using namespace std;

int main() {
    
    cout<<"a     a^2    a^3"<<endl;
    cout<< 1 <<"     "       <<1*1 <<"      "   <<1*1*1 <<endl;
    cout<< 2 <<"     "       <<2*2 <<"      "   <<2*2*2 <<endl;
    cout<< 3 <<"     "       <<3*3 <<"      "   <<3*3*3 <<endl;
    cout<< 4 <<"     "       <<4*4 <<"     "   <<4*4*4 <<endl;
    cout<< 5 <<"     "       <<5*5 <<"     "   <<5*5*5 <<endl;
    cout<< 6 <<"     "       <<6*6 <<"     "   <<6*6*6 <<endl;
   
    cout<<"  CCCCC     +          +"<<endl;
    cout<<" C          +          +"<<endl;
    cout<<"C       +++++++++   +++++++++"<<endl;
    cout<<" C          +          +"<<endl;
    cout<<"  CCCCC     +          +"<<endl;
   
    int V = 0;
    int I = 0;
    int R = 0;
    cout<<"Enter the value of current"<<endl;
    cin>>I;
    cout<<"Enter value of resistance"<<endl;
    cin>>R;
    V=I*R;
    cout<<"The Value of voltage is"<<endl;
    cout<<"V = "<<V <<" V"<<endl;
    int r = 0;
    cout<<"Enter number of rooms"<<endl;
    cin>>r;
    cout<<" The Total cost is"<<endl;
    cout<< r*1000 <<" Rupees"<<endl;
    
    
    
    
  
    
    return 0;
}

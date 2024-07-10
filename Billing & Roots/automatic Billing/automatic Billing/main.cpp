#include <iostream>
using namespace std;

int main(){
int Total_calls = 0;
    cout<<"Enter no of calls"<<endl;
    cin>>Total_calls;
    int Min_Rate = 200;
    if (Total_calls <= 100){
        cout<<" YOUR TOTAL BILL IS = ";

        cout<<Min_Rate <<" Rs" <<endl;
    }
    if(Total_calls > 100 && Total_calls <= 150){
        cout<<" YOUR TOTAL BILL IS = ";

        cout<< (Total_calls-100)*0.60 + Min_Rate <<" Rs" <<endl;
    }
    if(Total_calls > 150 && Total_calls <= 200){
        cout<<" YOUR TOTAL BILL IS = ";

        cout<< (Total_calls-150)*0.50 + (50*0.60)
        + Min_Rate <<" Rs" <<endl;
    }
    if(Total_calls > 200){
        cout<<" YOUR TOTAL BILL IS = ";
        cout<< (Total_calls-200)*0.40 + (50*0.60) +
        (50*0.50) + Min_Rate <<" Rs" <<endl;
    }


return 0;
}

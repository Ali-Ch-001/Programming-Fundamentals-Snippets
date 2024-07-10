#include <iostream>
using namespace std;
int main (){
   // Nature of Roots
    
    int a = 0 ;
    int b = 0 ;
    int c = 0 ;
    cout<<"Enter value of a "<<endl;
    cin>>a;
    cout<<"Enter value of b "<<endl;
    cin>>b;
    cout<<"Enter value of c "<<endl;
    cin>>c;
    int Root_nature = (b*b)-(4*a*c);
    
    if( Root_nature == 0){
        cout<<" Single repeated Roots "<<endl;
        
    }
    if( Root_nature > 0){
        cout<<" Two Real Roots "<<endl;
        
    }
    
    if( Root_nature < 0){
        cout<<" Two Complex Roots "<<endl;
        
    }
    
    //Billing for calls starts here
    
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


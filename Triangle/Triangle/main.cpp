#include <iostream>
#include <string>
using namespace std;
void check_condition();

int main (){
    
    
    check_condition();
    return 0;
  
}

void check_condition()

{
    string Answer;
    float side1 = 0.0;
    float side2 = 0.0;
    float side3 = 0.0;
    cout<<"enter 3 sides"<<endl;
    cin >>side1 >>side2 >>side3;

    
    if((side1+side2)>side3 && (side2+side3)>side1 && (side3+side1)>side2){
        cout<<"Can form a triangle \n";
        
    } else {
        cout<<"Can't form a triangle \n";
    }
   
}


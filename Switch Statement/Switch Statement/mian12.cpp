

#include <iostream>
using namespace std ;

int main(){
    int x = 0 ;
    cout<<"Enter Marks For Grading"<<endl;
    cin>>x;
    switch (x) {
        case  90 ... 100:
            cout<<"  Grade A "<<endl;
            break;
        case  75 ... 89:
            cout<<"  Grade B "<<endl;
            break;
        case  60 ... 74:
            cout<<"  Grade C "<<endl;
            break;
        case  45 ... 59:
            cout<<"  Grade D"<<endl;
            break;
        default:
            cout<<" Grade F "<<endl;
    }
    return 0 ;
}


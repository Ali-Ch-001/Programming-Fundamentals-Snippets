
#include <iostream>
using namespace std;
int series(int Value);
int main(){
    series(0);

return 0 ;
}
int series(int Value){
    int  t1 = 1, t2 = 2, NextTerm = 1;
    cout<<" Enter Any Value for Generating the Required Series "<<endl;
    cin>>Value;
    for (int i = 1; i <= Value; ++i) {
        
        if(i == 1) {
            cout <<t1 << ", ";
            continue;
        }
       
        if(i == 2) {
            cout <<t2 << ", ";
            continue;
        }
        NextTerm = t1 + t2;
        t1 = t2;
        t2 = NextTerm;
        cout << NextTerm << ", ";
    }
    return Value;
}

   


#include <iostream>
using namespace std;
int main (){
    int rem = 0;
    int rev_num = 0;
    cout<<"Enter any digit no"<<endl;
    int num = 0;
    cin>>num;
    while (num != 0){
    rem = num%10;
    num = num / 10 ;
        rev_num = rev_num*10+rem;}
    cout<<rev_num<<endl;
   
    cout<<"                              "<<endl;
    
    
    int x = 17;
    int y = 15;
    int z = 0;
    double w = 0;
    double t = 0;
    cout<< "x = " << x + y / 4 <<endl;
    x = x + y / 4;
    cout<<"z = "<< x % 3 + 4 <<endl;
    z =  x % 3 + 4;
    cout << "w = "<< 17 / 3 + 6.5<<endl;
    w = 17 / 3 + 6.5;
    cout<<"t = " << x / 4.0 + 15 % 4 - 3.5 <<endl;
    t = 4.0 + 15 % 4 - 3.5;
    cout<<"                              "<<endl;
    
    
    
    char alpha1 = 0;
    char alpha2 = 0;
    char alpha3 = 0;
    cout<<"Enter any 3 characters"<<endl;
    cin>>alpha1;
    cin>>alpha2;
    cin>>alpha3;
    cout<<"The next characters are " <<endl <<char (alpha1+2) <<endl << char(alpha1+5) <<endl <<char(alpha1+9) <<endl;
    cout<<"                              "<<endl;
    cout<<char (alpha2+2)<<endl <<char(alpha2+5)<<endl <<char(alpha2+9)<<endl;
    cout<<"                              "<<endl;
    cout<<char(alpha3+2)<<endl <<char(alpha3+5)<<endl <<char(alpha3+9)<<endl;

    return 0;
}

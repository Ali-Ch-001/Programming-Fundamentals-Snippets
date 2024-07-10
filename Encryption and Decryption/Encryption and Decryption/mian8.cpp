#include <iostream>
using namespace  std;
void encryption(char str[],int &k);
void decryption(char str[],int &k);
int main() {
    int x,k = 0 ;
    int const size = 75;
    char str[size];
    cout<<" Please Enter String : "<<endl;
    cin.getline(str,75);
    
    cout<<"Enter Key "<<endl;
    cin>>k;
    
    cout<<"Enter 1 for Encryption and 2 for Decryption : "<<endl;
    cin>>x;
    
    switch (x) {
        case 1:
            encryption(str,k);
            cout<<" Encryted string is "<<str<<endl;
            break;
            
        case 2:
           decryption(str,k);
            cout<<" Decrypted string is "<<str<<endl;
            break;
        default:
            cout<<" Invalid input "<<endl;
            break;
    }
    return 0;
}
void encryption(char str[],int &k){
    for(int i = 0 ; (i<75 && str[i] != 0); i++){
        str[i] = str[i] + k;
    }
}
void decryption(char str[],int &k){
    for(int i = 0 ; (i<75 && str[i] != 0); i++){
        str[i] = str[i] - k;
    }
}

#include <iostream>
#include <cmath>
using namespace std;
int key_value(int a2[],int size,int user_no);
int main (){
   /* const int d = 10 ;
    int a[d]= {1,2,3,4,5,6,7,8,9,10};
    cout<<"Enter 10 values "<<endl;
    for (int i = 0 ; i <10 ; i++){
        cin>>a[i];
    }
    cout<<"For assending order "<<endl;
    for (int i = 0 ; i <d ; i++){
        cout<<a[i]<<endl;
    }
    cout<<"For dessending order "<<endl;
    for (int x = d-1 ; x >= 0 ; x--){
        cout<<a[x]<<endl;
    }
    int sum = 0;
    for (int i = 0 ; i <d ; i++){
        sum += a[i];
    }
    cout<<"Sum is " <<sum<<endl; */


    //const int size = 5 ;
    //int a2[size] = {1,2,3,4,5};
    //cout<<" enter no "<<endl;
    //int user_no = 0;
    //cin >>user_no;
    //key_value(a2,size,user_no);
    //cout<<"index for "<<user_no <<" is " <<key_value(a2,size,user_no)<<endl;



    /*const  int arr_size = 5;
    float s[arr_size] = {5.8, 2.6, 9.1, 3.4, 7.0};
    for (int x = 1 ; x< arr_size ; x++){
        s[x] =  s[x]+s[x-1]  ;
        
    }
    for (int x = 0 ; x< arr_size ; x++){
        cout<<s[x]<<endl;}
*/

    const int d = 5 ;
    int sum = 0;
    int a[d]= {1,2,3,4,5};
    int b[d]= {1,2,3,4,5};
    int c[d]= {1,2,3,4,5};
    cout<<"Enter 5 values first polynomial from 0 to 4th degree "<<endl;
    for (int i = 0 ; i <d ; i++){
        cin>>a[i];
        }
    cout<<"Enter 5 values second polynomial 0 to 4th degree "<<endl;
    for (int i = 0 ; i <d ; i++){
        cin>>b[i];
        }
    cout<<"Enter a number for X "<<endl;
    int x= 0;
    cin>>x;
    for (int i = 0 ; i <d ; i++){
        c[i]=a[i] + b[i] ;
        cout<<c[i]<<"x^"<<i<<" + ";
        sum = sum + pow(x,i)*c[i];
        
    
    }
    cout<<endl;
    if (sum == 0){
        cout<<x<<" is the factor of the Polynomial "<<endl;
        
    }else {
        
        cout<<x<<" is not the factor of the Polynomial "<<endl;
    }
    
    cout<<"Sum is "<<sum<<endl;




return 0;
}

int key_value(int a2[], int size, int user_no){
    for (int x = 0; x<size ; x++){
    if (user_no == a2[x]){
    return x;
     }
    
      }

    return -999;
}


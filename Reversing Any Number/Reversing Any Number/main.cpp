#include <iostream>
using namespace std;
int Reverse_num_func(int Num , int Rev_num , int rem);

int main (){
    int Num =0 ;
    int Rev_num = 0 ;
    int rem = 0;
    cout<<"Enter Number you want to be reversed \n";
    cin>>Num;
    
    cout<<Reverse_num_func(Num , Rev_num , rem)<<endl;
    
    return 0;
}
int Reverse_num_func(int Num , int Rev_num , int rem){
    for (int i = 1 ; i<=Num ; i ++ ){
       rem =  Num %10;
        Num = Num / 10;
        Rev_num = Rev_num*10 +rem;
    }
    
    
    return Rev_num;
    
}

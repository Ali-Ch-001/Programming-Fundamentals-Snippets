#include <iostream>
using namespace std;

int main (){
    
  int amount = 84;
    
    cout<<amount<<endl;
    for (int i = 1 ; i<=8 ; i++){
     amount = amount + 60;
    
    cout<<amount <<endl;
    }
    
 int n = 0;
cout<<" Enter value for table"<<endl;
cin>>n;

for (int table = 1 ; table<=n; table++){
    cout<<" Table of " <<table <<endl;
    for(int x = 1 ; x<=10 ; x++){
        cout<<table<<" x "<<x<<" = " <<table*x <<endl;
    }
    cout<<"----------------------------------------------" <<endl;
}
    
    int num = 0 ;
    int sq = 0 ;
    int sum = 0;
    cout<<" Enter the number"<<endl;
    cin>>num;
    for (int i = 1 ; i<=num ; i++){
        sq = i*i;
        sum = sum + sq;
        cout<<sq <<endl;
    }
    cout <<" SUM IS = "<<sum <<endl;
    
    
    int start_num = 0 ;
    int end_num = 0 ;
    cout<<" Enter Start Value"<<endl;
    cin>>start_num;
    cout<<" Enter ending Value"<<endl;
    cin>>end_num;
    for (int column = 1; column <= end_num; column++ ){
        for(int row = 1 ; row <= column ; row++ ){
            cout<<start_num<<"\t";
            start_num = start_num + 1;
        }
        cout<<endl;
    }







    system("pause");

return 0;
}


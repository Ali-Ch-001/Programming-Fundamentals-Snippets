#include<iostream>

using namespace std;

void InputCardDetails( int &a , double &b , char &c  );

void WithdrawMoney(int &a , double &b , char &c,int &d);

void BalanceInquiry( int &a , double &b);

void TransferMoney(double &b , int &ta , int &card);

int main(){
    int card_num = 0;
    double ibalance = 0;
    char card_type = 'a';
    int wdm = 0;
    int ta = 0;
    int ta_card;
    int x = 1;
    while (x) {
        cout<<" Enter 1 for Card Details : \n";
        cout<<" Enter 2 for Money Withdrawl : \n";
        cout<<" Enter 3 for Balance Inquiry : \n";
        cout<<" Enter 4 for Transfering money : \n";
    cout<<" Enter 0 for Exiting : \n";
    cin>>x;
    switch(x) {
        case 1:
        InputCardDetails(card_num, ibalance,card_type );
            break;
        case 2:
        WithdrawMoney(card_num, ibalance , card_type, wdm);
            break;
        case 3:
        BalanceInquiry(card_num,ibalance);
            break ;
        case 4 :
        TransferMoney(ibalance,ta,ta_card);
            break;
        case 0:
            cout<<" Thanks for Banking with Us \n";
            break;
        default:
        cout<<" Wrong input \n"<<endl;
          }
                }
return 0;
}

void InputCardDetails( int &a , double &b , char &c  ) {
        cout<<"Enter card Number "<<endl;
        cin>>a;
        cout<<"Enter initial balance "<<endl;
        cin>>b;
        cout<<" Enter Card type G for gold , S for silver "<<endl;
        cin>>c;
}

void WithdrawMoney(int &a , double &b , char &c , int &d){
  
    if (c == 'G'){
        cout<<" Enter amount you want to withdraw \n "<<endl;
        cin>>d;
        if (d <= 25000 && d <= b ){
            b = b - d;
            cout<<" Money withdrawn \n"<<endl;
        
        }else if(d > 25000){
            cout<<"Can't withdraw above limit \n"<<endl;

        }
        else {
        cout<<" Insufficient Balance \n"<<endl;
        }
    }
    if (c == 'S'){
        cout<<" Enter amount you want to withdraw \n"<<endl;
        cin>>d;
        if (d <= 10000 && d <= b){
            b = b - d;
            cout<<" Money withdrawn above limit \n"<<endl;
        } else if(d > 10000){
        cout<<"Can't withdraw "<<endl;
        }else {
        cout<<" Insufficient Balance \n"<<endl;
        }

}
   }

    
void BalanceInquiry( int &a , double &b) {
    cout<<"Your Card Number is \n"<<a<<endl;
        cout<<"Your Current Balance is \n"<<b<<endl;
}

void TransferMoney(double &b , int &ta, int &card){
    cout<<" Enter Card number to transfer money "<<endl;
    cin>>card;
    cout<<" Enter Transfer amonunt "<<endl;
    cin>>ta;
    if ( ta <= b){
        b = b - ta;
        cout<<" Amount Transffered \n"<<endl;
        
    } else {
        cout<<" Insufficient Balance \n"<<endl;}

}


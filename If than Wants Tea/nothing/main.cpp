
#include<iostream>
#include<string>

using namespace std;

int main(){

  cout<<"Hi :)"<<endl;
  cout<<"What is your first name: ";
  string customer_first_name = "";
  cin>>customer_first_name;   // Getting input from user
  cout<<customer_first_name<<" do you want tea (1 for yes, 0 for no): ";
  bool wants_tea = false;
  cin>>wants_tea;             // Getting input from user

  if(wants_tea){
    cout<<customer_first_name<<" wants tea :)"<<endl;
  }
  else{
    cout<<customer_first_name<<" does not want tea :("<<endl;
  }
  return 0;
}



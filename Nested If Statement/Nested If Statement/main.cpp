/*
  Lecture: 06
  Dated: 2021-09-30
  Learning Outcomes:
    Logical Operators & their precedence
    Nested If statements
    Functions
*/
#include<iostream>
#include<string>

using namespace std;

// The definition of the function
bool customerAffirms(string customer_preference){
  bool wants = 0;
  wants = customer_preference == "Yes" ||
              customer_preference == "Sure" ||
              customer_preference == "sure" ||
              customer_preference == "y" ||
              customer_preference == "Y" ||
              customer_preference == "1" ||
              customer_preference == "ya" ||
              customer_preference == "Ya" ||
              customer_preference == "yes";
  return wants;
}

int main(){

  cout<<"Hi :)"<<endl;
  cout<<"What is your first name: ";
  string customer_first_name = "";
  cin>>customer_first_name;   // Getting input from user
  cout<<customer_first_name<<" do you want tea (yes, no): ";
  string customer_preference = "";
  cin>>customer_preference;

  bool wants_tea = 0;
  wants_tea = customerAffirms(customer_preference);  // Calling Function

  if(wants_tea){
    cout<<"Would you like sugar?: ";
    cin>>customer_preference;
    bool wants_sugar = 0;
    wants_sugar = customerAffirms(customer_preference); // Calling Function
    if(wants_sugar){
      cout<<customer_first_name<<" wants tea with sugar :)"<<endl;
    }
    else{
      cout<<customer_first_name<<" wants tea without sugar :)"<<endl;
    }
  }
  else{
    cout<<customer_first_name<<" does not want tea :("<<endl;
  }
  return 0;
    
}


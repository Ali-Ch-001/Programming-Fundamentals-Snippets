/*
  Lecture: 09
  Dated: 2021-10-12
  Learning Outcomes:
    Solution of Quiz
    The sum of first n numbers were calculated by using two methods
    1 - By using a Formula
    2 - By using nomerical method employing loop
*/
#include<iostream>

using namespace std;

int SumOfFirstNNumbersByFormula(int number); 
int SumOfFirstNNumbersWithoutFormula(int number);

int main(){
  int user_number = 0 ;
  cout<<"Enter Number: ";
  cin>> user_number;

  cout<<"Sum of first "<<user_number<< " numbers (with Formula) is : "
      <<SumOfFirstNNumbersByFormula(user_number)<<endl;

  cout<<"Sum of first "<<user_number<< " numbers is (without Formula) : "
          <<SumOfFirstNNumbersWithoutFormula(user_number)<<endl;

  return 0;
}

int SumOfFirstNNumbersByFormula(int number){
  int sum_first_n_numbers = 0;
  sum_first_n_numbers = number*(number+1)/2;
  return sum_first_n_numbers;
}

int SumOfFirstNNumbersWithoutFormula(int number){
  int sum_first_n_numbers = 0;
  for(int n=1; n<=number; n = n + 1 ){
    sum_first_n_numbers = sum_first_n_numbers + n;
    cout<< " = " <<sum_first_n_numbers<<endl;
  }
  return sum_first_n_numbers;
}


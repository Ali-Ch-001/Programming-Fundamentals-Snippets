/*
  Lecture: 07
  Dated: 2021-10-05
  Learning Outcomes:
    Constatn Variables
*/
#include<iostream>

using namespace std;

int main(){

  cout<<"Enter height feet part: ";
  int height_feet_part = 0;
  cin>>height_feet_part;

  cout<<"Enter height inch part: ";
  int height_inch_part = 0;
  cin>>height_inch_part;


  cout<<"Your height is " << height_feet_part
      <<" feet and " << height_inch_part <<" inches"<<endl;

  const int inches_in_feet = 12;

  int total_height_in_inches = 0;
  total_height_in_inches = (height_feet_part*inches_in_feet) + height_inch_part;
  cout<<"Your height is "<<total_height_in_inches<<" inches"<<endl;

  const float centimeter_in_inches = 2.54;
  float total_height_in_centimeter = 0;
  total_height_in_centimeter = total_height_in_inches*centimeter_in_inches;
  cout<<"Your height is "<<total_height_in_centimeter<<" centimeters"<<endl;

  const int min_hight_requirment = 164;
  bool eligible_height = false;
  eligible_height = total_height_in_centimeter > min_hight_requirment;
  if(eligible_height){
    cout<<"You are eligible for General Duty (GD) Pilot"<<endl;
  }
  else{
    cout<<"you are not eligible for General Duty (GD) Pilot"<<endl;
  }

  return 0;
}


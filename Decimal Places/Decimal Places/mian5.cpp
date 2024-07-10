
#include <iostream>
using namespace std;
int main(){
    
    cout << "Enter A Number less Than 10000 ";
    int user_number = 0;
    cin >> user_number;
    cout << "Enter that Number for which you want To Check Its Position: ";
    int num_chk = 0;
    cin >> num_chk;
    int units_place = 0;
    units_place = user_number % 10;
    int chk_for_tens_place = 0;
    chk_for_tens_place = user_number / 10;
    int tens_place = 0;
    tens_place = chk_for_tens_place % 10;
    int chk_for_hunderds_place = 0;
    chk_for_hunderds_place = user_number / 100;
    int hunderds_place = 0;
    hunderds_place = chk_for_hunderds_place % 10;
    int chk_for_thousands_place = 0;
    chk_for_thousands_place = user_number / 1000;
    int thousands_place = 0;
    thousands_place = chk_for_thousands_place % 10;
    if (user_number > 10000 || user_number < 0)
    {
        cout <<user_number << " is Grteater Than 10000, Can't calculate Value's Place " << endl;
    }
    if (num_chk != units_place && num_chk != tens_place && num_chk != hunderds_place && num_chk != thousands_place)
    {
        cout << "Incorrect Value " << endl;
    }
    else
    {
       if (num_chk == units_place)
       {
           cout << units_place << " is at Units place " << endl;
        }        if (num_chk == tens_place)
        {
           cout << tens_place << " is at Tens place " << endl;        }
        if (num_chk == hunderds_place)
       { cout << hunderds_place << " is at hunderds place " << endl;
       }
        if (num_chk == thousands_place)
      { cout << thousands_place << " is at thousands place " << endl;
        }
   }
    return 0;
}

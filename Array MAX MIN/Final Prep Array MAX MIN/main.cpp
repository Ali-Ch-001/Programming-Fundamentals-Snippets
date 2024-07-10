#include <iostream>
using namespace std;

int main ()
{
const int Numb = 5;

    int a[Numb] = {3,5,1,7,8};
    cout<<"Enter Number in array \n";
   // for (int i = 0; i < 5; i++)
     // {
         // cin>>a[i];
      //}
    
int max = a[0];
int min = a[0];

  for (int i = 0; i < 5; i++)
    {
      if (a[i] > max)
        {
          max = a[i];
        }
      else if (a[i] < min)
        {
          min = a[i];
        }
    }
  cout <<"Max vale is = "<< max << endl;
  cout <<"Min vale is = "<< min << endl;
 
    // working of increment operator
    
    //int A = 1;
    //cout<<A++;
   // A = 1;
    //cout<<++A;

  return 0;
}

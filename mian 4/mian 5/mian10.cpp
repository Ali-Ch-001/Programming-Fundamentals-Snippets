
#include<iostream>
#include<string>
using namespace std;

string GetInitials(string name);

int main()
{

    cout << "Enter Your Full Name: " <<endl;

    string full_name = " ";
    
    getline(cin,full_name);
    
        string initials = GetInitials(full_name);

    cout << initials << endl;
   
    return 0;
}


string GetInitials(string Name)
{
   

    string Name_initials = " ";

    for(int i=0; i<Name.length(); i++)
    {
        if (i==0)
        {
            cout << Name[i] <<"\t";
          
        }
        if (Name[i] ==  ' ')
        {
            cout << Name[i+1]<<"\t";
        }
       
    }
    return Name_initials;
    
}

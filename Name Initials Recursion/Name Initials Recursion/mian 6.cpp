#include<iostream>
#include<string>
using namespace std;

string Name_initials(const string name,  string i, int length, int c);

int main(){

  string full_name = "Muhammad Jamal Tariq Naqvi";
    
    cout<<" Enter full name "<<endl;
    getline(cin,full_name);
    
  int initials_length = 1;
  int counter = 0;
  string initials=full_name;
  initials[0] = toupper(full_name[0]);
    
  string initial = Name_initials(full_name, initials, initials_length, counter);

  cout<<initial<<endl;

  return 0;
}

string Name_initials(const string name,  string i, int length, int c){
    c=c+1;
    if(c<name.length()){
        if(name[c]==' '){
            i[length] = toupper(name[c+1]);
            length = length+1;
            return Name_initials(name, i,length, c);
        }
        else{
            if(c==(name.length()-1)){
                return i.substr(0,length);
            }
            else{
                return Name_initials(name, i, length, c);
            }
        }
    }
    return Name_initials(name, i, length, c);
}


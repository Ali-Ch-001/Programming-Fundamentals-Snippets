#include<iostream>

using namespace std;


void Pyramid(int height);
int GetSymbolCount(int row);

int main(){
  cout<<"Enter the Pyramid Height = "<<endl;
    
  Pyramid(0);


  return 0;
}

void Pyramid(int height){
    cin>>height;
    char symbol = '*';
    int space = 0;
    
  for(int r=1; r<=height; r++){
      for(space = 0 ; space < height - r ; space++){
          cout<<" ";
      }
    for(int c=1; c<=GetSymbolCount(r);c++){
      cout<<symbol;
    }
      cout<<endl;
  }
}

int GetSymbolCount(int row){
  if(row == 1){
    return 1;
  }
  else{
    return 2*row-2;
  }
    
}


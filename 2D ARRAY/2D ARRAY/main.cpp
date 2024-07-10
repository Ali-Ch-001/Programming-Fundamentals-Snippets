#include<iostream>
using namespace std;
void PrintMatrix(const float Matrix[][3], const int row_count, const int col_count);

int main(){
  const int row_count = 3;
  const int col_count = 3;

  float A[row_count][col_count] = {{1,2,3},
                                   {4,5,6},
                                   {7,8,9}};
  PrintMatrix(A,row_count,col_count);
  return 0;
}

void PrintMatrix(const float Matrix[][3], const int row_count, const int col_count){
  for (int r=1;r<=row_count;r++){
    for(int c=1;c<=col_count;c++){
      cout<<Matrix[r-1][c-1]<<" ";
    }
    cout<<endl;
  }
}

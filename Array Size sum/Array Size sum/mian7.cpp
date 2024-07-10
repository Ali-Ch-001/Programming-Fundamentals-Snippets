#include<iostream>
using namespace std;
int main()
{
    const int M=6;
    int A[M]={0};
    
    const int N=5;
    int B[N]={0};
    
    int C[M+N]={0};
    int count1=0;
    
    cout<<"Enter Values In Asending Order \n";
    
    for(int x=0;x<M;x++)
    { cout<<"Enter "<<x+1<<" Value ";
      cin>>A[x];
      count1++; }
    int count2=0;
    cout<<endl;
    
    cout<<"Enter Values In Desending Order \n";
    for(int y=0;y<N;y++)
    {
        cout<<"Enter "<<y+1<<" Value ";
        cin>>B[y];
        count2++;
       
    }

    for(int z=0; z<count1; z++)
    {
        C[z]=A[z];
       
    }

    for (int j=0; j<=count2; j++)
    {
        C[count1+j]=B[j];
       
    }

    for(int n=count1+count2; n>0; n--)
    {
        for(int i=0; i<(count1+count2)-1; i++)
        {
            if(C[i]>C[i+1])
            {
                swap(C[i],C[i+1]);

            }
        }
    }
    cout<<endl;
    cout<<"Values In Assending Order: \n";
    for(int a=0; a<count1+count2; a++)
    {
        cout<<C[a]<<endl;
    }

    return 0;
}


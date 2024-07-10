#include <iostream>
#include <fstream>
#include <string>


using namespace std;

void ReadDataToArray(string [],string [],int [],char[] ,const int);
void TestGrade(int [],char [],const int );
int HighestScore(string [],string [],int [],const int,char[]);
void HighestScorer(string [],string [],int [],const int,int&);
void OutputToFile(string [],string [],int [],char[],const int,int&);

int main (){
    
    const int index=6;
    string first_name [index]={ " "};
    string last_name [index]= {" "};
    int test_score[index] = { 0 };
    char grade[5] = { ' ' };
    int temp;
    ReadDataToArray(first_name, last_name,test_score,grade,5);
    
    
    return 0 ;
}

void ReadDataToArray(string first_name[],string last_name[],int test_score[],char grade[],const int index)
{

    ifstream input;
    input.open("student.txt");
    for (int i = 0; i < 6;i++)
    {
        
            input>>first_name[i];
            input>>last_name[i];
            input>>test_score[i];
        
    }
    
    TestGrade( test_score, grade,index);
    for (int j = 0; j < 6; j++)
    {
        cout<<last_name[j]<<", "<<first_name[j]<<" "<<test_score[j]<<"\t"<<grade[j]<<endl;
    }
    cout<<endl;
    int hs=HighestScore(first_name,last_name,test_score,index,grade);
    HighestScorer(first_name,last_name,test_score,index,hs);
    OutputToFile(first_name,last_name,test_score,grade,index,hs);

    input.close();
}
void TestGrade(int test_score[],char grade[],const int index)
{
    for (int e = 0; e < index; e++)
    {
        if (test_score[e]>=80)
        {
            grade[e]='A';
        }
        else if (test_score[e]>=70)
        {
            grade[e]='B';
        }
        else if (test_score[e]>=60)
        {
            grade[e]='C';
        }
        else if (test_score[e]>=50)
        {
            grade[e]='D';
        }
        else
        {
            grade[e]='F';
        }
    }
}
int HighestScore(string first_name[],string last_name[],int test_score[],const int index,char grade[])
{
    int temp = 0;
    for (int i = 0; i <index; i++)
    {
        for (int j = i+1; j<index; j++)
        {
            if (test_score[i]>test_score[j])
            {
                swap(first_name[i],first_name[j]);
                swap(last_name[i],last_name[j]);
                swap(grade[i],grade[j]);
                temp=test_score[i];
                test_score[i]=test_score[j];
                test_score[j]=temp;
            }
        }
    }
    cout<<"Maximum marks are :"<<temp<<endl;
    return temp;
    
}
void HighestScorer(string first_name[],string last_name[],int test_score[],const int index,int &temp)
{
    cout<<"High achivers are as follows :";
    for (int i = 0; i <index; i++)
    {
        if (test_score[i]==temp)
        {
            cout<<endl<<last_name[i]<<" ,"<<first_name[i]<<endl;
        }
    
    }
}
void OutputToFile(string first_name[],string last_name[],int test_score[],char grade[],const int index,int& temp)
{
    ofstream output;
    output.open("output.txt");
    for (int r = 0; r < 6; r++)
    {
        for (int a = r; a <=r; a++)
        {
            output<<first_name[a]<<", ";
            output<<last_name[a]<<" ";
            output<<test_score[a]<<" ";
            output<<grade[a]<<endl;
        }
        
    }
    output<<"Maximum marks are :"<<temp<<endl;
    output<<"High achivers are as follows :";
    for (int j = 0; j < index; j++)
    {
        if (test_score[j]==temp)
        {
            
            
            output<<endl<<last_name[j]<<" ,"<<first_name[j]<<endl;
        }
            
    }
    output.close();
}


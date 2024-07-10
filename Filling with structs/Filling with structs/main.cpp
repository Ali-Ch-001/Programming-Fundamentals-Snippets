#include <iostream>
using namespace std;
#include <cstring>
#include <fstream>

struct student
{
    char rollNumber[9];
    float mid1;
    float mid2;
    float QuizT;
    float HwT;
    float total;
    char grade[3];
};

void InputData(student & sVar, ifstream &ifile)
{
    
    
    int x;
    ifile>>x;  //dummy read

    ifile>>sVar.rollNumber>>sVar.mid1>>sVar.mid2>>sVar.QuizT>>sVar.HwT;


}

void PrintData(const student & sVar)
{
    cout<<sVar.rollNumber<<" "<<sVar.mid1<<" "<<sVar.mid2<<" "<<sVar.QuizT<<" "<<sVar.HwT<<endl;

}
int main()
{
    ifstream ifile;
    ifile.open("MyFile.txt");
    char *ptr;
    ptr=new char[100];
    ifile.getline(ptr,100,'\n'); //dummy read
    
    student sArray[20];
    for (int i =0; i <20; i++)
    {
        InputData(sArray[i], ifile);
        PrintData(sArray[i]);
    }


    
    return 0;
}

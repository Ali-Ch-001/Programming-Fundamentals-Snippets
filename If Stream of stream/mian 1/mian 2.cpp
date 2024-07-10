
#include <iostream>
#include <fstream>
#include <cmath>
#include <string>
using namespace std;
int main(){
   
   ifstream in_calculaion;
    in_calculaion.open("Numbers.txt");
    int num = 0;
    int sqr_num = 0;
    int cube_num = 0;
    ofstream out_calculation;
    out_calculation.open("Answers.txt");
    while (in_calculaion.eof() == 0){
        in_calculaion >> num;
        sqr_num = pow(num,2);
        cube_num = pow(num ,3);
        out_calculation << num <<"\t";
        out_calculation << sqr_num <<"\t";
        out_calculation << cube_num <<"\t" <<endl;
        cout<< num <<"\t" <<sqr_num <<"\t" <<cube_num  <<endl;

    }
    in_calculaion.close();
    out_calculation.close();
    
    cout<<"\t\t" <<endl;
    cout<<"\t\t" << " First Program one ends here" <<endl;
    cout<<"\t\t" <<endl;
    
    ifstream in_score;
    in_score.open("quiz.result.txt");
    int quiz1 = 0;
    int quiz2 = 0;
    int quiz3 = 0;
    int student_number = 1;
    int total_result = 0;
    while(in_score.eof() == 0){
        in_score >> quiz1;
        in_score >> quiz2;
        in_score >> quiz3;
        total_result = quiz1 + quiz2 + quiz3;
        cout<< " Students " <<student_number <<" Total Result " <<total_result <<endl;
        student_number = student_number + 1;
        
    }
    
    cout<<"\t\t" <<endl;
    cout<<"\t\t" <<endl;
    cout<<"\t\t" <<" Second program ends is here" <<endl;
    cout<<"\t\t" <<endl;
    
   ifstream in_factorial;
    in_factorial.open("fact_data.txt");
    int factorial = 0;
    ofstream out_factorial;
    out_factorial.open("fact_out.txt");
    while(in_factorial.eof() == 0){
        in_factorial >> factorial;
        for (int number = factorial - 1 ; number >=1 ; number--){
            factorial = factorial*number;
        }
        out_factorial << "\t" <<factorial <<endl;
        cout<<factorial <<endl;
    }
    in_factorial.close();
    out_factorial.close();
    
    cout<<"\t\t" <<endl;
    cout<<"\t\t" <<" Third program ends is here" <<endl;
    cout<<"\t\t" <<endl;
    
    return 0;
}

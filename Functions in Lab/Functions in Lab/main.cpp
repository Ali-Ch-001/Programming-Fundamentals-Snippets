#include <iostream>
#include <cmath>
using namespace std;
double Area(int r);
double Volume(int r);
void sum (int x);
void calculateRoots(int a, int b , int c );
int main ()
{

   int r = 0;
cout <<" Enter Value of RADIUS "<<endl;
cin>>r;
Area(r);
cout<<Area(r) <<" is the area "<<endl;
Volume(r);
cout<<Volume(r)<<" is the volume "<<endl;

int x = 4536;
cout<<"Enter Value for sum "<<endl;
cin>>x;
 sum (x);

int a = 0;
 int b = 0;
 int c = 0;
 cout<<"Enter value of a , b , c"<<endl;
 cin>>a;
 cin>>b;
 cin>>c;
 if( ((b*b)-4*a*c) > 0){
     calculateRoots(a,b,c) ;
 
 }else {
 cout<<" Roots are imaginary"<<endl;
 }

return 0 ;
}


 double Area(int r){

double area = 0;
area =  4*3.14*(r*r);
return area;
}

double Volume(int r){
double volume = 0;
volume = (4/3)*3.14*(r*r*r);

return volume;
}

void sum (int x){
    int rev_num = 0;
    int rem = 0;
    int add = 0;
    while (x>0){
        rem = x % 10;
        x = x / 10;
        add += rem;
        rev_num = rev_num*10 + rem;
    }
    cout<<rev_num<<endl;
cout<<"SUM IS "<<add<<endl;
 
}
 void calculateRoots(int a, int b , int c ){
    float negative = 0.0;
    negative = (-b-(sqrt((b*b)-4*a*c)))/2*a;
    float positive = 0.0;
    positive = (-b+(sqrt((b*b)-4*a*c)))/2*a;
    cout << " the answer with negative formula "<<negative<<endl;
    cout << " the answer with positive formula "<<positive<<endl;
}


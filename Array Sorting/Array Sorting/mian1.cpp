#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    string num="";
    int array[100];
    int number = 0;
    int size = 0;

        ifstream input_file;
        input_file.open("inputfile.txt");
        ofstream output_file;
        output_file.open("outputfile.txt");
        while (getline(input_file, num))
        {
            array[size] = stoi(num);
            size++;
        }
        for (int x = 0; x < size; x++)
        {
            
            for (int y = x; y < size; y++){
                if (array[y]>array[x])
                {
                    number = array[y];
                    array[y] = array[x];
                    array[x] = number;
                }
                    
            }
        }
        for (int z = 0; z < size; z++)
        {
            output_file << array[z]<<endl;


        }
        input_file.close();
        output_file.close();

        return 0;
}


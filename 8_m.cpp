// FILES read/write
//You can use ios_base constants in Mac
//Example:  write_file.open("text.txt",ios_base::app)
// in this example text would be written in the end of file

#include <iostream>
#include <fstream>

using namespace std;
 
int main(int argc, const char * argv[])
{
    char text[50];
    
    ofstream write_file; //object created to write to file
    write_file.open("text.txt");
    write_file<<"Working with files in C++";
    write_file.close();
    
    ifstream read_file; //object created to read a file
    read_file.open("text.txt");
    if (!read_file.is_open())
        cout<<"FILE NOT FOUND"<<endl;
    else {
        read_file.getline(text,50);
        cout<<text<<endl;
        read_file.close();
    }
    
        cin.get();
    return 0;
}

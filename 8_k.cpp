// Structure

#include <iostream>

using namespace std;

struct Date {
    int year;
};

struct Auto
{
    int wheels;
    float speed;
    char color;
    Date build;
};

int main(int argc, const char * argv[])
{
    Auto BMW; // object created with structure
    BMW.color='R';
    BMW.speed=340.21;
    BMW.wheels=4;
    BMW.build.year=1989;
    
    cout<<BMW.color<<"\n"<<BMW.speed<<"\n"<<BMW.wheels<<"\n"<<BMW.build.year<<endl;
    
    cin.get();
    return 0;
}

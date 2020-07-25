//String

#include <iostream>
#include <string>

using namespace std;

int main(int argc, const char * argv[])
{
    string name;
    cout<<"Enter Your name: ";
    getline(cin,name);
    
    cout << "Your name is "<<name<<endl;
    
    return 0;
}

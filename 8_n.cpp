// FUNCTIONS
//if declaring function after main() we should initilize our functions before
//without curly brace and ended with semicolon;
#include <iostream>

using namespace std;

void func (int num)   // void function
{
    cout<<"parameter : "<<num<<endl;
}

float sum(float x, float y) //function with return
{
    float result;
    result=x+y;
    return result;
}


int main(int argc, const char * argv[])
{
    
    func(1234);
    cout<<sum(1.2,32.1)<<endl;
    cin.get();
    return 0;
}

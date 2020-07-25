// if,try,catch

#include <iostream>


using namespace std;

int main(int argc, const char * argv[])
{
    
    int num1,num2;
    cout<<"Enter Your first numer: ";
    cin>>num1;
    
    cout<<"Enter Your second number: ";
    cin>>num2;
    
    try {
        if (num2==0) {
            throw 123;
        } cout<<"First number devided by Second number: "<< num1/num2<<endl;
    } catch (int i) {
        cout<<"ERROR Devision by zero not allowed"<<endl;
        
    }
    
    
    cin.get();
    return 0;
}

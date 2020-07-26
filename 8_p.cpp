// Global/Local and Math
 
#include <iostream>
#include <cmath>

int i =15; //global variable

using namespace std;

void func();
 
int main(int argc, const char * argv[])
{
    int i=5; //local variable
    cout<<i<<endl;
    func();
    cout<<::i<<endl;
    
    cout<<pow(2, 2)<<endl; //cmath 
    cout<<abs(-6776)<<endl;
    cout<<sin(90)<<endl;
    
    cin.get();
    return 0;
}
  
void func(){
    cout<<i<<endl;
}

// Symbols,String and UNICODE

#include <iostream>
#include <clocale>

using namespace std;

int main(int argc, const char * argv[])
{
    setlocale(LC_CTYPE, "taj");
    
    char string[500];
    cout<<"Enter string";
    gets(string);
    
    cout<<string<<endl;
    
    
    cin.get();
    return 0;
}

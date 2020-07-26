// Function-OVERLOADING
 
#include <iostream>

using namespace std;

float perimeter(float x, float y,float z);
float perimeter(float x, float y,float z, float d);

int main(int argc, const char * argv[])
{
    
    cout<<perimeter(3.3, 2.1, 21.1)<<endl;
    cout<<perimeter(3.3, 2.1, 21.1,43.1)<<endl;

    cin.get();
    return 0;
}

float perimeter(float x, float y,float z){
    return x+y+z;
}

float perimeter(float x, float y,float z,float d){
    return x+y+z+d;
}

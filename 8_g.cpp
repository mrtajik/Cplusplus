// Dynamic Arrays

#include <iostream>

using namespace std;

int main(int argc, const char * argv[])
{
    float *ptrarray=new float [10];
    
    for (int i=0; i<10; i++)
    {
        ptrarray[i]=rand()% 80 + 1;
        cout<<" "<<ptrarray[i];
    }
    
    delete [] ptrarray;
     
    cin.get();
    return 0;
}

// Array 2D
// Matrix

#include <iostream>


using namespace std;

int main(int argc, const char * argv[])
{
    int A[3][2]={{23,30},{45,21},{14,34}};
    
    for (int i=0; i<3; i++)
    {
        for (int j=0; j<2; j++)
        {
            cout<<" "<<A[i][j];
        }
        cout<<" \n "<<endl;
    }
   
    cin.get();
    return 0;
}

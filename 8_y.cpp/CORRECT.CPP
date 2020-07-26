//Function templates in C++

#include <iostream>

using namespace std;
template <typename T, typename T2>
T2 print_array(const T * array, int i){
    int count=0;
    for (int j=0; j<i; j++) {
        cout<<array[j]<<" ";
        count++;
    }
    cout<<endl;
    return count;
}


int main(int argc, const char * argv[])
{
    const int iSize=3, fSize=2, dSize=3, cSize=5;
    
    int i_array[iSize]={23,232,32};
    float f_array[fSize]={3.14,1.76};
    double d_array[dSize]={3.345,7.567,9.203};
    char c_array[cSize]={"DUDU"};
    
    cout<<print_array<int,int>(i_array,iSize)<<endl;
    cout<<print_array<float,int>(f_array,fSize)<<endl;
    cout<<print_array<double,int>(d_array,dSize)<<endl;
    cout<<print_array<char,int>(c_array,cSize)<<endl;
     
    return 0;
}

//Function templates in C++

#include <iostream>

using namespace std;
 
void print_array(const int * array, int i){
    for (int j=0; j<i; j++) {
        cout<<array[j]<<" ";}
    cout<<endl;
    
}

void print_array(const float * array, int i){
    for (int j=0; j<i; j++) {
        cout<<array[j]<<" ";}
    cout<<endl;
    
}

void print_array(const double * array, int i){
    for (int j=0; j<i; j++) {
        cout<<array[j]<<" ";}
    cout<<endl;
    
}

void print_array(const char * array, int i){
    for (int j=0; j<i; j++) {
        cout<<array[j]<<" ";}
    cout<<endl;
    
}

int main(int argc, const char * argv[])
{
    const int iSize=3, fSize=2, dSize=3, cSize=5;
    
    int i_array[iSize]={23,232,32};
    float f_array[fSize]={3.14,1.76};
    double d_array[dSize]={3.345,7.567,9.203};
    char c_array[cSize]={"DUDU"};
    
    print_array(i_array, iSize);
    print_array(f_array, fSize);
    print_array(d_array, dSize);
    print_array(c_array, cSize);
    
    return 0;
}

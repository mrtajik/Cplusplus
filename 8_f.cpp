// Pointers and References

#include <iostream>

using namespace std;

int main(int argc, const char * argv[])
{
    int  value=1028;
    int *ptrvalue=&value; //pointer declaration
    int **ptr_ptrvalue=&ptrvalue; //pointer poiting to other pointer
    int &ref=value; //reference
    
    //references refers to object by name, pointer to address;
    
    
    //changing poiter value and variable value;
    cout<<"Enter a new value for pointer: ";
    cin>>*ptrvalue;
    
    cout<<"Value changed to :"<<value<<endl;
    cout<<"Pointer value    :"<<*ptrvalue<<endl;
    
    //getting memory address of variable value
    cout<<"memory address of variable value: "<<&value<<endl;
    
    //getting memory address of the pointer
    cout<<"memory address of the ponter: "<<ptrvalue<<endl;
    
    //getting memory address of the poiting pointer
    cout<<"value of the pointing ponter: "<<**ptr_ptrvalue<<endl;
    
    //priting value of reference
    cout<<"value of reference :"<<ref<<endl;
    
    cin.get();
    return 0;
}

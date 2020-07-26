//Class templates in C++

#include <iostream>

using namespace std;
const int r=3;

template <class Type>
class Array{
private:
    Type arr[r];
public:
    Array (Type *a){
        for(int i=0;i<r; i++)
            arr[i]=a[i];
    }
    Type getElement(int i){
        return arr[i];
    }
};


int main(int argc, const char * argv[])
{
    int arr[]={23,32,2113,34};
    Array<int> obj(arr);
    cout<<obj.getElement(2)<<endl;
    
    char arr_1[]={"MAX"};
    Array<char> object(arr_1);
    cout<<object.getElement(2)<<endl;
    
    return 0;
}

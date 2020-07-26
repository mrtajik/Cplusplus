// C++ Friend Functions

#include <iostream>

using namespace std;
class b;

class a {
    friend int sum(a,b); //friend function
private:
    int i;
public:
    a(){
        cout<<"Enter value of i: ";
        cin>>i;    }
};

class b {
    friend int sum(a,b); //friend function
private:
    int j;
public:
    b(){
        cout<<"Enter value of j: ";
        cin>>j;     }
    
};

int sum (a first, b second){
    return(first.i+second.j);
}

int main(int argc, const char * argv[])
{
    a first;
    b second;
    cout<<"Result: "<<sum(first,second)<<endl;
    
    cin.get();
    return 0;
}

// Class Inheritance C++
//nasledovanie

#include <iostream>

using namespace std;
 
class first{
protected:
    int value;
    
    first (int value){
        this->value=value;
        cout<<value<<endl;
    }
        
    void set (int value){
        this->value=value;}
    
};

class second : public first {
public:
    second (int val) : first (val){ }
};

class third : public first {
public:
     third (int val) : first (val){ }
    
};

int main(int argc, const char * argv[])
{
    second obj(1);
    third object(2);
    cin.get();
    return 0;
}

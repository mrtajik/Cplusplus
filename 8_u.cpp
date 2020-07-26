// ‘this’ pointer in C++

#include <iostream>

using namespace std;

class test{
private:
    int a,b,c;
public:
    void set(int a,int b,int c){
        this->a=a;
        this->b=b;
        this->c=c;
    }
    void get(){
        cout<<"A= "<<a<<", b= "<<b<<" , c= "<<c<<endl;
    };
};
 
int main(int argc, const char * argv[])
{
    test Test;
    Test.set(12,2,1);
    Test.get();
    
    cin.get();
    return 0;
}

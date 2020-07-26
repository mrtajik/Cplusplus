// OOP, CLASS and Objects
 
#include <iostream>

using namespace std;

class Auto{
private:
    int year, month, day;   //only Auto class can see it

public:
    void message(){
        cout<<"Testing Class"<<endl;
    }
    
    void set(int date_year,int date_month,int date_day){
        year=date_year;
        month=date_month;
        day=date_day;
    }
    
    void get(){
        cout<<"Year :"<<year<<endl;
        cout<<"Month:"<<month<<endl;
        cout<<"Day  :"<<day<<endl;
        
    }

protected:
    int value3=33;  // can be seen inside THIS class and can be accessed in child class
};

int main(int argc, const char * argv[])
{
    Auto BMW;
    BMW.message();
    BMW.set(1985, 12, 31);
    BMW.get();
    
    cin.get();
    return 0;
}

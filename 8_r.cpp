// C++ Class Constructor and Destructor
//constructer must be in public!
#include <iostream>

using namespace std;

class Auto{
private:
    int year, month, day;   //only Auto class can see it

public:
    Auto(){
        year=2000;
        month=12;
        day=31;
        cout<<"Constructer output 1:"<<endl;
        get();
        cout<<endl;
    }
    Auto (int date_year,int date_month,int date_day){
        year=date_year;
        month=date_month;
        day=date_day;
        cout<<"Constructer output 2: "<<endl;
        get();
        cout<<endl;}
    
    void set(int date_year,int date_month,int date_day){
        year=date_year;
        month=date_month;
        day=date_day;
    }
    
    void get(){
        cout<<"Year :"<<year<<endl;
        cout<<"Month:"<<month<<endl;
        cout<<"Day  :"<<day<<endl;}
    
    ~Auto (){
        cout<<"Class DECONSTRUCTOR"<<endl;
    }
};
        
int main(int argc, const char * argv[])
{
    Auto BMW(2001,11,23);
    BMW.set(1985, 12, 31);
    BMW.get();
    
    cin.get();
    return 0;
}

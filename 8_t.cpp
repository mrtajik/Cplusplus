// C++ Friend class

#include <iostream>

using namespace std;

class person;

class dog{
    friend class person;
private:
    int health=100;
};

class person{
public:
    void damage(dog &d){
        d.health-=20;
        cout<<"Health of the animal "<<d.health<<endl;
    }
    void die (dog &d){
        d.health=0;
        cout<<"Health of the animal :"<<d.health<<endl;
    }
    void heal(dog &d){
        d.health+=50;
        cout<<"Health of the animal "<<d.health<<endl;}
};
 
int main(int argc, const char * argv[])
{
    dog scooby;
    person Max;
    Max.damage(scooby);
    Max.die(scooby);
    Max.damage(scooby);
    Max.heal(scooby);
    
    cout<<endl;
    
    dog Husky;
    Max.damage(Husky);
    
    cin.get();
    return 0;
}

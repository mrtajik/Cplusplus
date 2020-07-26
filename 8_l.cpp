// Enumeration in C++
//enum - perechislenie

#include <iostream>

using namespace std;

enum mall {parking= 0,hall,shops,roof}; // elevator in a mall

int main(int argc, const char * argv[])
{
    int floor;
    bool exit = false;
    
    while (exit!=1)
        {
        cout<<"Enter your floor( 0 to 3 ): ";
        cin>>floor;
        switch (floor)
                {
            case parking:
                cout<<"Parking lot"<<endl;
                break;
            case hall:
                cout<<"HALL"<<endl;
                break;
            case shops:
                cout<<"Shopping Center"<<endl;
                break;
            case roof:
                cout<<"ROOF, NO ACCESS "<<endl;
                break;
            default:
                cout<<"NO SUCH FLOOR, TRY AGAIN"<<endl;
                }
            cout<<"To Exit PRESS 1, To Continue PRESS 0 :";
            cin>>exit;
        }
    
    cin.get();
    return 0;
}

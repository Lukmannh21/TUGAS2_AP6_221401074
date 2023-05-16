#include <iostream>

using namespace std;

int main()
{
    int nilai [3], *petunjuk;
    nilai [0] = 125;
    nilai [1] = 345;
    nilai [2] = 750;
    
    petunjuk = &nilai [0];
    cout << "Nilai " << *petunjuk << " ada di memory : " << petunjuk << endl;
    cout << "Nilai " << *(petunjuk + 1) << " ada di memory : " << (petunjuk+1)  << endl;
    
    cout << "Nilai " << *(petunjuk + 2) << " ada di memory : " << (petunjuk+2) << endl;
    

    return 0;
}

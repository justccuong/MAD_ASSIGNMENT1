//The 100th element of A∩B in the decreasing order is . . . . . . . Note
//that the greatest element of A ∩ B is 10000.
//ketqua: 9627

#include <iostream>

using namespace std;

int i, count;

int main()
{
    i = 10000;
    count = 1;
    while (count <= 100) {
        if (i*(i+2) % 15 == 0) {
            count += 1;
        }
        i -= 1;
        
    }
    cout << i << endl;
    
    return 0;
}
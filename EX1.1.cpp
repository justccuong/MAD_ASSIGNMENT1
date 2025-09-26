// ketqua: 9975 

#include <iostream>

using namespace std;

int res, i;

int main()
{
    res = 10001;
    i = 0;
    while (i*(i+2) <=10000) {
        if (i*(i+2) % 15 == 0) {
            res -= 1;
        }
        i += 1;
    }
    cout << res;
    
    return 0;
}
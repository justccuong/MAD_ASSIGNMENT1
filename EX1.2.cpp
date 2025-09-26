//The 100th element of A∩B in the decreasing order is . . . . . . . Note
//that the greatest element of A ∩ B is 10000.

//phần tử lớn nhất của A giao B là 10000, ta sẽ chạy lùi từ đó.
//nếu số đó mà thỏa mãn chia hết i*(i+2) mà chia hết cho 15 thì tăng biến đếm
//cứ lùi i và tăng biến đếm đến khi nó = 100 thì in ra màn hình.

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

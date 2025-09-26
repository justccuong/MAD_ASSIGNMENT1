// vì B có 10001 phần tử nên ta sẽ để một biến res = 10001, tiếp theo đó chạy 1 vòng lặp và xét các số từ 0 đến 
// 1 số nào đó mà (gọi số đó là i) i*(i+2) <= 10000 và chia hết cho 15, mỗi khi điều đó xảy ra thì -1 phần tử của
// tập B.

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

//flow : tìm các số nguyên tố <= 5000 rồi nhét vào mảng động(vector) a, sau đó chạy 2 for (i != j) rồi nhân a[i] với a[j] để 
//tạo ra mảng động b, Chú ý: nhận thấy nếu như vậy thì mảng sẽ không tăng dần, do đó ta cần sắp xếp tăng dần để cho đúng với
//tập hợp C như đề bài rồi mới tiếp tục tính toán. vì n thuộc tập N, sau đó cho biến đếm, chạy nếu cứ khi nào phần tử trong 
//tập C còn <= 10000 thì tăng biến đếm.

//ketqua: 2600

#include <bits/stdc++.h>

using namespace std;

int j, count1;
vector<int> a, b;

int prime(int n){
    if(n < 2){
        return 0;
    }
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            return 0;
        }
    }
    return 1;
}


int main(){
	
	for(int i = 0; i <= 5000; i++){
	    if (prime(i) == 1) {
	            a.push_back(i);
	    }
	}
	
	for (int i = 0;i< a.size();i++) {
	    for (int j = i + 1; j < a.size(); j++) {
	        b.push_back(a[i] * a[j]);
	    }
	}
	
	sort(b.begin(), b.end());
	
	count1 = 0;
	while (b[count1] <= 10000) {
	    count1+=1;
	}
	cout << count1;

	return 0;
}

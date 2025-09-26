// ketqua: 334

#include <bits/stdc++.h>

using namespace std;

int j;
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
	
	cout << (b[99]);

	return 0;
}
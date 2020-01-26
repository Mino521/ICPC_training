#include <iostream>
using namespace std;
#define MOD 1000000007

int main() {
	string s ;
	cin >> s ;
	long long ans = 1;
	for (int i = 0; i < s.size(); i++) {
		int curr_char = 0;
		char c = s[i];
		if (c == '-') {
			curr_char = 62;
		} else if (c == '_') {
			curr_char = 63;
		} else if ('0' <= c && c <= '9') {
			curr_char = c - '0';
		} else if ('a' <= c && c <= 'z') {
			curr_char = 36 + c - 'a';
		} else {
			curr_char = 10 + c - 'A';
		}
		for(int i=0 ; i<6 ; i++){
			if(!(curr_char & 1)){
				ans *= 3 ;
				ans %= MOD ;
			}
			curr_char >>= 1 ;
		}
	}
	cout << ans % MOD << endl ;
	return 0;
}

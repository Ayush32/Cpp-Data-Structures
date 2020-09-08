#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main() {
	string s;
	cin >> s;
	int len = s.length();
	for(int i = 0;i<len;i++){
		if(i== 0 && isupper(s[i])){
			cout << s[i];
		}
		else if(islower(s[i])){
			cout << s[i];
		}
		else if(isupper(s[i])){
			cout  << endl;
			cout << s[i];
		}
	}

	return 0;
}
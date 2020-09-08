#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int characterType(char ch){
	if(islower(ch)){
		cout << "L" << endl;
	}
	else if(isupper(ch)){
		cout << "U" << endl;
	}
	else{
		cout << "I" << endl;
	}
	return 0;
}

int main() {
	char ch;
	cin >> ch;
	characterType(ch);
	return 0;
}
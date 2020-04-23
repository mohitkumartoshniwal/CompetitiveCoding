#include <iostream>
using namespace std;

void removeX(char s[]) {
	if (s[0] == '\0') {
		return;
	}

	if (s[0] != 'x') {//abxc
		removeX(s + 1);
	} else {//xxabc or xabc or..........
		int i = 1;//providing access to this line
		for (; s[i] != '\0'; i++) {
			s[i - 1] = s[i];
		}
		s[i - 1] = s[i];////for'\0' character
		removeX(s);//xxabc
	}
}

int length(char s[]) {
	if (s[0] == '\0') {
		return 0;
	}
	int smallStringLength = length(s + 1);
	return 1 + smallStringLength;
}

int main() {
	char str[100];
	cin >> str;

	int l = length(str);
	cout << l << endl;
	removeX(str);
	cout << str << endl;
	l = length(str);
	cout << l << endl;
}

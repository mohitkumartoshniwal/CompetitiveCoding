#include <iostream>
using namespace std;

int subs(string input, string output[]) {
	if (input.empty()) {
		output[0] = "";
		return 1;
	}

	string smallString = input.substr(1);
	int smallOutputSize = subs(smallString, output);
	for (int i = 0; i < smallOutputSize; i++) {
		output[i + smallOutputSize] = input[0] + output[i];
	}
	return 2 * smallOutputSize;
}

int main() {
	string input;
	cin >> input;
	string* output = new string[1000];
	int count = subs(input, output);
	for (int i = 0; i < count; i++) {
		cout << output[i] << endl;
	}
}

//will call is denoted by ->
//abc
//abc-> bc->c->""
//"" will return 1 to c
//c will return 2 to bc
//bc will return 4 to abc
//abc will return 8
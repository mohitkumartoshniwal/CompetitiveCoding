#include <iostream>
using namespace std;

void print_subs(string input, string output) {
	if (input.length() == 0) {
		cout << output << endl;
		return;
	}

//here we print when we hit the basecase
//we either include the character or not.
//we don't include it in the input and output 
//else we don;t include it in input but we include it in output
	print_subs(input.substr(1), output);
	print_subs(input.substr(1), output + input[0]);
}

int main() {
	string input;
	cin >> input;
	string output = "";
	print_subs(input, output);
}


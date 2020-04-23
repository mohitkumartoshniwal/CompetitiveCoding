#include <iostream>
using namespace std;

int main() {
	int m, n;
	cin >> m >> n;
	int** p = new int*[m];//creates array of pointers
	for (int i = 0; i < m; i++) {
		p[i] = new int[i + 1];//creates rows of size i+1
		for (int j = 0;j <n; j++) {
			cin >> p[i][j];
			
		}
	}
//Must				 delete 		if 			new 		is used otherwise memory leaks 
	for (int i = 0; i < m; i++) {
		delete [] p[i];//first delete the rows individually
	}
	delete [] p;//lastly delete this array
}

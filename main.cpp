#include <iostream>
#include <string>
using namespace std;
void number() {
	for (int i = 1; i <= 10;i++) {
		for (int x = 1; x <= i;x++ ) {
			cout << x;
		}
		cout << "\n";
	}
}
int main() {
	number();
	return 0;
}

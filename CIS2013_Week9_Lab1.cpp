#include <iostream>
#include <string>
using namespace std;

int main() {
	string test = "Rockers";
	char stay;

	cout << test << endl;
	test = "Robert";
	cout << test << endl;
	cout << "The length of test is " << test.length() << endl;
	cout << "The third char of test is " << test[2] << endl;

	for (int i = 0; i < test.length(); i++){
	cout << "You spell Robert with a " << test[i] << endl;
}

	cin >> stay;
	return 0;
}

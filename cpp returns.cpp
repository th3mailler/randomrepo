#include <iostream>
#include <sstream>
using namespace std;
auto printStuff(string name, int age) {
	string s;
	stringstream out;
	out << "Hello " << name << " aged " << age << " years." << endl;
	s = out.str();
	return s;
}
int main() {
	char name[30];
	int age;
	cout << "Enter name: ";
	cin.getline(name, 30);
	cout << "Enter age: ";
	cin >> age;
	cout << printStuff(name, age) << endl;
	return 0;
}

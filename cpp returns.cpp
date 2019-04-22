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
	cout << printStuff("Willy Wonka", 17) << endl;
	return 0;
}
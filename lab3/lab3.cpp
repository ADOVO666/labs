#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

int main() {

	setlocale(LC_ALL, "RU");

	ifstream file1("D:\\newfolder\\test1.txt");
	ifstream file2("D:\\newfolder\\test2.txt");
	ifstream file3("D:\\newfolder\\test3.txt");
	if (!file1.is_open()) {
		cout << "Failed to open file 1\n";
		return 1;
	}
	if (!file2.is_open()) {
		cout << "Failed to open file 1\n";
		return 1;
	}
	if (!file3.is_open()) {
		cout << "Failed to open file 1\n";
		return 1;
	}
	string s1, s2, s3;
	ofstream fileres("D:\\newfolder\\resault.txt");
	cout << "Данные первого файла:\n";
	while (getline(file1, s1)) {
		fileres << stoi(s1) * 2 << endl;
		cout << stoi(s1) << endl;
	}
	cout << "Данные второго файла:\n";
	while (getline(file2, s2)) {
		fileres << stoi(s2) * 2 << endl;
		cout << stoi(s2) << endl;
	}
	cout << "Данные третьего файла:\n";
	while (getline(file3, s3)) {
		fileres << stoi(s3) * 2 << endl;
		cout << stoi(s3) << endl;
	}
	file1.close();
	file2.close();
	file3.close();
	fileres.close();
	return 0;
}
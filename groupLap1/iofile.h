#pragma once
#include <fstream> 
#include <iostream> 
#include <string> 
#include <sstream>
#include <vector>
using namespace std;
using namespace std;


void read_csvFile(vector<int>& col1, vector<int>& col2) {
	ifstream fin;
	fin.open("data1.csv", ios::in);
	if (!fin) {
		cout << "Cannot open File!\n";
	}

	string temp1, temp2;
	while (fin.good()) {
		string line1;
		string line2;
		getline(fin, line1, ',');
		getline(fin, line2, '\n');
		stringstream s1(line1);
		stringstream s2(line2);

		while (getline(s1, temp1, ',') && getline(s2, temp2, '\n')) {
			if (!isalpha(temp1[0]) || !isalpha(temp2[0])) {
				int num1 = stoi(temp1);
				int num2 = stoi(temp2);
				col1.push_back(num1);
				col2.push_back(num2);
			}
		}
	}
}
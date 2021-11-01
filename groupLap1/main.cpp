#include "handle.h"

int main() {
	vector<int> col1, col2;
	// read csvFile then store the value into the vector
	read_csvFile(col1, col2);
	int high1 = col1.size() - 1;
	int high2 = col2.size() - 1;
	// using quick sort to order the array
	quickSort(col1, LOW, high1);
	quickSort(col2, LOW, high2);
	//Call Menu Function
	Menu(col1, col2);
	return 0;
}
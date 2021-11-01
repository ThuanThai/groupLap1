#pragma once
#include "quicksort.h"
#include <unordered_map>
#define LOW 0

int findMedian(int arr[], int length) {
	if (length % 2 != 0) {
		return arr[length / 2];
	}
	else {
		return (arr[(length - 1) / 2] + arr[length / 2]) / 2;
	}
}

int findMode(int arr[], int length) {
	unordered_map<int, int> umap;

	for (int i = 0; i < length; i++) {
		umap[arr[i]]++;
	}

	int max = 0;
	int face = arr[0];
	for (auto x : umap) {
		if (x.second > max) {
			max = x.second;
			face = x.first;
		}
	}
	return face;
}

void Menu(int col1[], int col2[], int length) {
	bool flag = true;
	int choice;
	
	while (flag) {
		system("cls");
		cout << "1. Find Median element for x and y\n";
		cout << "2. Find Mode\n";
		cout << "\tEnter the number\n";
		cin >> choice;
		switch (choice) {
		case 1:
		{
	
			int medX = findMedian(col1, length);
			int medY = findMedian(col2, length);

			cout << "Median_X: " << medX << endl;
			cout << "Median_Y: " << medY << endl;
			system("pause");
		}
			break;

		case 2:
		{
			int x = findMode(col1, length);
			int y = findMode(col2, length);
			
			cout << "Mode_X: " << x << endl;
			cout << "Mode_Y: " << y << endl;
			system("pause");
		}
			break;
		}
	}
}
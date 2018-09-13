#include<stdio.h>
#include<stdlib.h>
#include<iostream>

using namespace std;

int main(){


	int a, b, c, d;

	cout << "Welcome to Matrix Transpose";


	cout << "\n\nEnter the No. of Rows of Matrix =";
	cin >> a;
	cout << "\nEnter the No. of Colums of Matrix =";
	cin >> b;
	int matrix1[100][100];
	int trans[100][100];
	for (int i = 0; i < a; i++){
		for (int j = 0; j < b; j++){
			cin >> matrix1[i][j];
		}
	}
	for (int i = 0; i < a; i++){
		cout << " \n ";
		for (int j = 0; j < b; j++){
			cout << matrix1[i][j] << "  ";
		}
	}
	//Transpose of a matrix
	for (int i = 0; i < a; ++i){
		for (int j = 0; j < b; ++j){
			trans[j][i] = matrix1[i][j];
		}
	}

	cout << " After Tranpose of a Matrix ";
	for (int i = 0; i < a; i++){
		cout << " \n ";
		for (int j = 0; j < b; j++){
			cout << trans[i][j] << "  ";
		}
	}
	//Test Case
	int array[2][2] = { { 1, 3 }, { 2, 4 } };
	for (int i = 0; i < a; i++){
		for (int j = 0; j < b; j++){
			if (array[i][j] == trans[i][j]){
				cout << "\n\n Yes";
			}
		}

		system("PAUSE");
	}

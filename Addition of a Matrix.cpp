#include<stdio.h>
#include<stdlib.h>
#include<iostream>

using namespace std;

int main(){


	int a, b, c, d;

	cout << "Welcome to Matrix Addition";


	cout << "\n\nEnter the No. of Rows of Matrix =";
	cin >> a;
	cout << "\nEnter the No. of Colums of Matrix =";
	cin >> b;

	int max[100][100];
	int matrix1[100][100];
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
	cout << "\n\nEnter the No. of Rows of 2nd Matrix =";
	cin >> c;
	cout << "\nEnter the No. of Colums of 2nd Matrix =";
	cin >> d;
	int matrix2[100][100];
	for (int i = 0; i < c; i++){
		cout << " \n ";
		for (int j = 0; j < d; j++){
			cin >> matrix2[i][j];
		}
	}
	for (int i = 0; i < c; i++){
		cout << " \n ";
		for (int j = 0; j < d; j++){
			cout << matrix2[i][j] << "  ";
		}
	}
	cout << " \n\n\n ";
	if (a != c || b != d){
		cout << "\nAddition is not Compatible";

	}
	else{
		cout << "\nAddition is\n";
		for (int i = 0; i < a; i++){
			cout << " \n ";
			for (int j = 0; j < b; j++){
				max[i][j] = matrix1[i][j] + matrix2[i][j];
				cout << max[i][j] << "  ";
			}
		}

	}

	int array[2][2] = { { 2, 4 }, { 6, 8 } };
	for (int i = 0; i < a; i++){
		for (int j = 0; j < b; j++){
			if (array[i][j] == max[i][j]){
				cout << "\n\n Yes";

			}
		}
	}

	system("PAUSE");
}
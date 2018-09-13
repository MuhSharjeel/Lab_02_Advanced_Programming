#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
	int rowCount1=0, colCount1=0;
	int rowCount2 = 0, colCount2 = 0;
	//first matrix data
	cout << "Enter the row size for first matrix.";
	cin >> rowCount1;
	cout << "Enter the column size for second matrix.";
	cin >> colCount1;
	int** matrix1 = new int*[rowCount1];
	for (int i = 0; i < rowCount1; ++i)
		matrix1[i] = new int[colCount1];
	for (int i = 0; i < rowCount1; i++){
		for (int j = 0; j < colCount1; j++)
			cin >> matrix1[i][j];
	}
	//second matrix data
	cout << "Enter the row size for second matrix.";
	cin >> rowCount2;
	cout << "Enter the column size for second matrix.";
	cin >> colCount2;
	int** matrix2 = new int*[rowCount2];
	for (int i = 0; i < rowCount2; ++i)
		matrix2[i] = new int[colCount2];
	for (int i = 0; i < rowCount2; i++){
		for (int j = 0; j < colCount2; j++)
			cin >> matrix2[i][j];
	}
	//variable for multiplication
	int** mul = new int*[rowCount1];
	for (int i = 0; i < rowCount1; ++i)
		mul[i] = new int[colCount2];
	//validation for multiplication
	if (colCount1 != rowCount2){
		cout << "Matrix multiplication is not possible!";
	}
	//multipllication
	else{
		for (int i = 0; i < rowCount1; i++){
			for (int j = 0; j < colCount2; j++){
				for (int k = 0; k < colCount1; k++)
					mul[i][j] += matrix1[i][k] * matrix2[k][j];
				
			}
		}
		for (int i = 0; i < rowCount1; i++){
			for (int j = 0; j < colCount2; j++){
				cout << mul[i][j]<<"\t";
			}
			cout << "\n";
		}
	}
	int array[2][2] = { { 8, 8 }, { 8, 8 } };
	for (int i = 0; i < a; i++){
		for (int j = 0; j < b; j++){
			if (array[i][j] == mul[i][j]){
				cout << "\n\n Yes";
			}
		}
	delete(mul);
	delete(matrix2);
	delete(matrix1);
	system("pause");
}
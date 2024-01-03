#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main() {
    setlocale(LC_ALL, "ru");
    ifstream inputFile("input.txt"); // Имя входного файла
    ofstream outputFile("output.txt"); // Имя выходного файла

    if (!inputFile.is_open()) {
        cerr << "Не удалось открыть входной файл." << endl;
        return 1;
    }

    int numCols;
    inputFile >> numCols; // Читаем количество столбцов из начала файла
    vector<vector<double>> matrix(numCols, vector<double>(numCols));

    // Заполняем матрицу из файла
    for (int i = 0; i < numCols; ++i) {
        for (int j = 0; j < numCols; ++j) {
            inputFile >> matrix[i][j];
        }
    }

    // Транспонируем матрицу
    vector<vector<double>> transposedMatrix(numCols, vector<double>(numCols));
    for (int i = 0; i < numCols; ++i) {
        for (int j = 0; j < numCols; ++j) {
            transposedMatrix[i][j] = matrix[j][i];
        }
    }

    // Записываем транспонированную матрицу в новый файл
    outputFile << numCols << endl;
    for (int i = 0; i < numCols; ++i) {
        for (int j = 0; j < numCols; ++j) {
            outputFile << transposedMatrix[i][j] << " ";
        }
        outputFile << endl;
    }

    cout << "Транспонированная матрица записана в файл output.txt." << endl;

    return 0;
}

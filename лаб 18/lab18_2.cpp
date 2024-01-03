#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main() {
    setlocale(LC_ALL, "ru");
    ifstream fileA("NameA.txt"); // Имя первого файла
    ifstream fileB("NameB.txt"); // Имя второго файла
    ifstream fileC("NameC.txt"); // Имя третьего файла
    ofstream fileD("NameD.txt"); // Имя выходного файла

    if (!fileA.is_open() || !fileB.is_open() || !fileC.is_open()) {
        cerr << "Не удалось открыть один из входных файлов." << endl;
        return 1;
    }

    int numElements;
    fileA >> numElements; // Предполагаем, что количество элементов в файлах одинаково

    // Записываем элементы из файлов A, B, C в файл D поочередно
    for (int i = 0; i < numElements; ++i) {
        int elementA, elementB, elementC;
        fileA >> elementA;
        fileB >> elementB;
        fileC >> elementC;
        fileD << "A" << i << ": " << elementA << " ";
        fileD << "B" << i << ": " << elementB << " ";
        fileD << "C" << i << ": " << elementC << " ";
        fileD << endl;
    }

    cout << "Файл NameD.txt успешно создан." << endl;

    return 0;
}

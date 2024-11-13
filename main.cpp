#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include "Read_file.h"

using namespace std;


void Function_Number_2(const vector<string> &lines)
{

    wcout << L"Содержимое вектора строк:" << endl;

    for (size_t i = 0; i < lines.size(); i++) {
        cout << "| " << i + 1 << " | " << lines[i] << " |" << endl;
    }
    cout << endl;

}


void Function_Number_3(const vector<string> &lines, const string &filename)//(Вектор, Имя фаила в который надо записать)
{
    // Открываем файл на запись
    ofstream outFile(filename);

    // Проверяем, открылся ли файл успешно
    if (!outFile.is_open()) {
        wcout << L"Ошибка при открытии файла: ";
        cout << filename << endl;
        return;
    }

    // Записываем каждую строку вектора в файл
    for (const string& line : lines) {
        outFile << line << endl;
    }
    outFile.close();

    wcout << L"Содержимое записано в файл ";
    cout << filename << endl;

}

void Function_Number_4 ()
{

}

void Function_Number_5 ()
{

}

int main()
{
    setlocale (LC_ALL,"Russian");
    vector<string> lines = Function_Number_1();
    Function_Number_2(lines);
    Function_Number_3(lines,"lines.txt");
    return 0;
}

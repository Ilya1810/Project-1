#include <iostream>
#include <string>
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


void Function_Number_4 ( vector<string> &elements)//(Функция записывает перед строкой её длинну)
{
    wcout<<endl<<L"Длинна строки:"<<endl;
    for (size_t i = 0; i < elements.size(); i++){
        int StringLen;
        StringLen=elements[i].length();
        string StringL = to_string(StringLen);
        elements[i].insert (0,StringL);
        cout<<elements[i]<<endl;
    }

}

void Function_Number_5 ( vector<string> &exper, const string &filename)//(Функция выводит в файл длину строки и необходимый вам символ)
{
    ofstream outFile(filename);
    if (!outFile.is_open()) {
        wcout << L"Ошибка при открытии файла: ";
        cout << filename << endl;
        return;
    }
    int number;
    wcout<<L"Введите номер необходимого символа:";
    cin>>number;
    for (size_t i = 0; i < exper.size(); i++){
            int StringLen;
            StringLen=exper[i].length();
            outFile << StringLen << exper[i][number] << endl;
        }
    outFile.close();

    wcout << L"Содержимое записано в файл ";
    cout << filename << endl;

}

int main()
{
    setlocale (LC_ALL,"Russian");
    vector<string> lines = Function_Number_1();
    vector<string> elements = Function_Number_1();
    vector<string> exper = Function_Number_1();
    Function_Number_2(lines);
    Function_Number_3(lines,"lines.txt");
    Function_Number_4(elements);
    Function_Number_5(exper,"lines2.txt");


    return 0;
}

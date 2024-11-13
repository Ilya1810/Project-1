#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>

//Функция, считывающая данные из файла в вектор строк
vector<string> Function_Nomber_1()
{
    vector<string> result_string;

    ifstream in;
    in.open("1.txt");
    if(!in.is_open())
    {
        wcout << L"Ошибка открытия файла!" << endl;
        exit;
    }

    string temporary;
    while (!in.eof())
    {
        in >> temporary;
        result_string.push_back(temporary);
    }

    return result_string;
}

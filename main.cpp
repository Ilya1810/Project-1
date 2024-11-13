#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>

using namespace std;

string Function_Nomber_1()
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

void Function_Nomber_2()
{

}

void Function_Nomber_3()
{

}
int main()
{
    Function_Nomber_1();
    Function_Nomber_2();
    Function_Nomber_3();
}

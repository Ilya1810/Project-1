#include <iostream>
#include <vector>
#include <sstream>
#include <fstream>
using namespace std;

string Function_Nomber_1()
{
    return 0;
}

void Function_Nomber_2(const vector<string> &lines)
{
    cout << "Содержимое вектора строк:" << endl;
    for (size_t i = 0; i < lines.size(); i++) {
        cout << "| " << i + 1 << " | " << lines[i] << " |" << endl;
    }
    cout << endl;

}

void Function_Nomber_3(const vector<string> &lines, const string &filename)//(Вектор, Имя фаила в который надо записать)
{
    // Открываем файл на запись
    ofstream outFile(filename);

    // Проверяем, открылся ли файл успешно
    if (!outFile.is_open()) {
        cout << "Ошибка при открытии файла: " << filename << endl;
        return;
    }

    // Записываем каждую строку вектора в файл
    for (const string& line : lines) {
        outFile << line << endl;
    }
    outFile.close();
    cout << "Содержимое записано в файл " << filename << endl;
}

}
int main()
{
    Function_Nomber_1();
    Function_Nomber_2(lines);
    Function_Nomber_3(lines,"lines.txt");
    return 0;
}

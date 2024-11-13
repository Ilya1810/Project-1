#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include "Read_file.h"
using namespace std;


void Function_Nomber_2(const vector<string> &lines)
{
    cout << "���������� ������� �����:" << endl;
    for (size_t i = 0; i < lines.size(); i++) {
        cout << "| " << i + 1 << " | " << lines[i] << " |" << endl;
    }
    cout << endl;

}

void Function_Nomber_3(const vector<string> &lines, const string &filename)//(������, ��� ����� � ������� ���� ��������)
{
    // ��������� ���� �� ������
    ofstream outFile(filename);

    // ���������, �������� �� ���� �������
    if (!outFile.is_open()) {
        cout << "������ ��� �������� �����: " << filename << endl;
        return;
    }

    // ���������� ������ ������ ������� � ����
    for (const string& line : lines) {
        outFile << line << endl;
    }
    outFile.close();
    cout << "���������� �������� � ���� " << filename << endl;
}

}
int main()
{
    Function_Nomber_1();
    Function_Nomber_2(lines);
    Function_Nomber_3(lines,"lines.txt");
    return 0;
}

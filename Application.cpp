#include "Application.h"
#include "number.h"
#include "iostream"
#include "Array.h"
using namespace std;

Application::Application()
{

}

int Application::exec()
{
    setlocale(LC_ALL, "RUS");
    int ch;
    int len, index, new_elem, new_len;
    bool a;
    Array* arr = new Array();
    while (true)
    {
        ch = menu();
        switch (ch)
        {
        case 1:
        {
            cout << "������� ����������� �������:";
            cin >> len;
            arr->create(len);
            cout << endl;
            break;
        }
        case 2:
        {
            cout << "��������� ������ " << len << " ����������"<<endl;
            arr->fill_in();
            cout << endl;
            break;
        }
        case 3:
        {
            cout << "����� ��������� �������:" << endl;
            arr->print_all();
            cout << endl;
            break;
        }
        case 4:
        {
            arr->average_and_SKO();
            cout << endl;
            break;
        }
        case 5:
        {
            cout << "�������� ��� ����������:" << endl << "0 - �� ��������" << endl << "1 - �� �����������" << endl;
            cin >> a;
            arr->sort(a);
            cout << endl;
            break;
        }
        case 6: 
        {
            cout << "������� ����� ������� ����������� �������:" << endl;
            cin >> new_len;
            arr->change_size(new_len);
            cout << endl;
            break;
        }
        case 7:
        {
            cout << "������� ������ �������� ������� ����� ��������:" << endl;
            cin >> index ;
            cout << endl;
            cout << "������� �������� ��������: " << endl;
            cin >> new_elem;
            cout << endl;
            arr->change_elem(index,new_elem);
        }
        case 0:
            return 0;
        default:
            cout << "������" << endl; 
            break;
        }
    }
    return 0;
}

int Application::menu()
{
    int ch;
    cout << "�������� ��������:" << endl;
    cout << "1 - �������� ������� n-� �����������" << endl;
    cout << "2 - ���������� ������� ��������� �������������" << endl;
    cout << "3 - ����� ��������� �������" << endl;
    cout << "4 - ����� �������� �������� � ��� ��������� �������" << endl;
    cout << "5 - ���������� ��������� �������" << endl;
    cout << "6 - �������� ����������� �������" << endl;
    cout << "7 - �������� �������� ������ �������� ������� �� ��� �������" << endl ;
    cout << "0 - exit" << endl ;
    cin >> ch;
    return ch;
}

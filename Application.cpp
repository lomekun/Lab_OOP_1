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
            cout << "Введите размерность массива:";
            cin >> len;
            arr->create(len);
            cout << endl;
            break;
        }
        case 2:
        {
            cout << "Заполните массив " << len << " элементами"<<endl;
            arr->fill_in();
            cout << endl;
            break;
        }
        case 3:
        {
            cout << "Вывод заданного масиива:" << endl;
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
            cout << "Выберите вид сортировки:" << endl << "0 - по убыванию" << endl << "1 - по возрастанию" << endl;
            cin >> a;
            arr->sort(a);
            cout << endl;
            break;
        }
        case 6: 
        {
            cout << "Введите новое значеие размерности массива:" << endl;
            cin >> new_len;
            arr->change_size(new_len);
            cout << endl;
            break;
        }
        case 7:
        {
            cout << "Введите индекс элемента который нужно изменить:" << endl;
            cin >> index ;
            cout << endl;
            cout << "Введите значение элемента: " << endl;
            cin >> new_elem;
            cout << endl;
            arr->change_elem(index,new_elem);
        }
        case 0:
            return 0;
        default:
            cout << "ОШИБКА" << endl; 
            break;
        }
    }
    return 0;
}

int Application::menu()
{
    int ch;
    cout << "Выберете действие:" << endl;
    cout << "1 - Создание массива n-й размерности" << endl;
    cout << "2 - Заполнение числами вводимыми пользователем" << endl;
    cout << "3 - Вывод элементов массива" << endl;
    cout << "4 - Вывод среднего значения и СКО элементов массива" << endl;
    cout << "5 - Сортировка элементов массива" << endl;
    cout << "6 - Изменить размерность массива" << endl;
    cout << "7 - Изменить значение любого элемента массива по его индексу" << endl ;
    cout << "0 - exit" << endl ;
    cin >> ch;
    return ch;
}

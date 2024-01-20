#include <iostream>
using namespace std;

#define COL_DEF "\x1b[90m"
#define COL_RED "\x1b[91m"
#define COL_GRN "\x1b[92m"
#define COL_BLU "\x1b[93m"
#define COL_YEL "\x1b[94m"

int main() {
#ifdef _WIN32
	setlocale(0, "");
#endif

  cout << "[+] Фигурки\n\n";
  cout << "[+] Размер (1-30): ";

  int size;
  cin >> size;

  cout << "[+] Текстура: ";

  string texture;
  cin >> texture;

  cout << "[+] Цвет: \n";

  cout << COL_DEF << "[0] - Серый\n" <<
      		COL_RED << "[1] - Красный\n" <<
      		COL_GRN << "[2] - Зеленый\n" <<
      		COL_BLU << "[3] - Синий\n" <<
      		COL_YEL << "[4] - Желтый\n" << COL_DEF;

    short color;
    cin >> color;

    cout << COL_DEF <<  "[0] - Горизонтальная\n" <<
                        "[1] - Вертикальная\n";
    cout << "[+] Тип линии: ";

    short type;
    cin >> type;

    cout << "\nВывод: ";

    switch (color)
    {
        case 0:
            cout << COL_DEF;
            break;
        case 1:
            cout << COL_RED;
            break;
        case 2:
            cout << COL_GRN;
            break;
        case 3:
            cout << COL_BLU;
            break;
        case 4:
            cout << COL_YEL;
            break;
    }

    if (size < 1 || size > 30) {
        cout << COL_RED << "Ошибка! Недопустимый размер." << COL_DEF;
    }
    else {
        switch (type) {
            case 0:
                for (int i = 0; i < size; i++){
                    cout << texture << " ";
                }
                break;
            case 1:
                for (int i = 0; i < size; i++){
                    cout << texture << endl;
                }
                break;
            default:
                cout << COL_RED << "Ошибка. Вы ввели неправильное значение для типа линии.";
                break;
        }
    }
}

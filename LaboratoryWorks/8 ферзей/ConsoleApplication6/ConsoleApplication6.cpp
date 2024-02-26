#include <iostream>
using namespace std;

const int n = 8;
int board[n][n]{};

void replaceBoard() // заменяет цифры на символы
{
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (board[i][j] == -1) {
                cout << "Q ";
            }
            else {
                cout << ". ";
            }
        }
        cout << endl;
    }
}

void setQueen(int i, int j) // Установка ферзя и разметка клеток под боем
{
    for (int x = 0; x < n; ++x) {
        board[x][j] += 1;
        board[i][x] += 1;

        int d;
        d = j - i + x;
        if (d >= 0 && d < n) {
            board[x][d] += 1;
        }

        d = j + i - x;
        if (d >= 0 && d < n) {
            board[x][d] += 1;
        }
    }
    board[i][j] = -1;
    
    cout << "i = " << i << " j = " << j << endl;
    for (int y = 0; y < n; y++) //вывод каждого шага рекурсии на экран
    {
        for (int z = 0; z < n; z++)
        {
            cout << board[y][z] << " ";
        }
        cout << endl;
    }
    cout << endl;
    replaceBoard();
}

void delQueen(int i, int j) // Удаление ферзя
{
    for (int x = 0; x < n; ++x) {
        board[x][j] -= 1;
        board[i][x] -= 1;

        int d;
        d = j - i + x;
        if (d >= 0 && d < n) {
            board[x][d] -= 1;
        }

        d = j + i - x;
        if (d >= 0 && d < n) {
            board[x][d] -= 1;
        }
    }
    board[i][j] = 0;
}

bool checkQueen(int i) // Проверка для расстановки ферзей
{
    bool result = false;

    for (int j = 0; j < n && !result; ++j) { // Идем по строке
        if (board[i][j] == 0) { // Если клетка свободна от ферзя
            setQueen(i, j); // размещаем ферзь и отмечаем клетки под боем

            if (i == n-1) { // Если строка последняя, то мы все расставили
                result = true;
            }
            else if (!(result = checkQueen(i + 1))) {
                delQueen(i, j); //удаляем ферзь, если нет пустых клеток для расстановки
            }
        }
    }
    return result;
}

int main()
{
    checkQueen(0);
    cout << endl;
    return 0;
}
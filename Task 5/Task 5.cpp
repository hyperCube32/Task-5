#include <iostream>
#include <ctime>

using namespace std;

int Arr(int arrLength)
{
    srand(time(0));
    int* array = new int[arrLength + 2];
    for (int i = 1; i < arrLength + 1; ++i)
    {
        array[i] = rand() % 1000;
    }
    cout << "Массив = ";
    for (int i = 1; i < arrLength + 1; ++i)
    {
        cout << array[i] << "  ";
    }
    cout << endl;
    int min = 0;
    for (int i = 1; i < arrLength + 1; ++i)
    {
        if ((array[i - 1] > array[i]) && (array[i + 1] > array[i]) && (array[i] > min))
        {
            min = array[i];
        }
    }
    delete[] array;
    return min;
}

void IO()
{
    int arrLength = 0;
    cout << "Введите размер массива >";
    cin >> arrLength;
    int min = Arr(arrLength);

    cout << "Максимальный из локальных минимумов = " << min;
    cout << endl;

}

int main()
{
    setlocale(0, "");
    char uslovie = 0;
    cout << "Начать вычисления - y Выйти - n > ";
    cin >> uslovie;
    cout << endl;
    while (uslovie != 'n')
    {
        IO();
        cout << endl;
        cout << "повтоорить вычисление y - да n - нет  > ";
        cin >> uslovie;
        cout << endl;
    }
}

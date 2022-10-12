#include <iostream>
#include <stdio.h>

using std::cin;
using std::cout;

// Ввод массива.
void task1()
{ 
    int n;
    std::cout << "Enter array :";
    std::cin >> n;
    int *array = new int[n];
    std::cout << "Enter " << n << " digits into the array: \n";// Введите десять цифр в массив
    for (int i = 0; i < n; i++) {
        std::cout << "array [" << i + 1 << "]:";
        std::cin >> array[i]; // читамем элем в массив
    }
}

// Вывод массива в консоль.
void task2(int n,int *array)
{
    for (int i = 0; i < n; i++) {
        std::cout << array[i] << " ";
    }
    delete[]array;
}

// Сортировка по сумме цифр, стоящих на четных местах.
void task3()
{

}

// Отсортировать массив вначале по возрастанию последней цифры, а при совпадении последних цифр - по убыванию.
void task4(int n,int *array)
{
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n-1; j++) {
            if (array[j]%10 > array[j + 1]%10) {
                int new_peremen = array[j];
                array[j] = array[j + 1];
                array[j + 1] = new_peremen;
            }
        }
        for (int j = 0; j < n - 1; j++) {
            if (array[j] % 10 == array[j + 1] % 10) {
                int new_peremen = array[j];
                array[j] = array[j + 1];
                array[j + 1] = new_peremen;
            }
        }
    }
}

int main()
{

    int choice = 0;
    while (true)
    {
        std::cout << "\n" << "What do you want to accomplish?\n"
            << "1. Entering an array.\n" // Ввод массива.
            << "2. Output an array to the console.\n" // Вывод массива в консоль.
            << "3. Sorting by the sum of the digits standing in even places.\n" // Сортировка по сумме цифр, стоящих на четных местах.
            << "4. Sort the array first in ascending order of the last digit, and if the last digits match, in descending order.\n" // Отсортировать массив вначале по возрастанию последней цифры, а при совпадении последних цифр - по убыванию.
            << "5. game over\n"; // конец
        std::cin >> choice;
        switch (choice)
        {
        case 1:
        {
            task1();
            break;
        }

        case 2:
        {
            task2();
            break;
        }

        case 3:
        {
            task3();
            break;
        }

        case 4:
        {
            task4();
            break;
        }

        case 5:
        {
            std::cout << "Good bye";
        }

        default:
        {
            return 0;
        }
        }
    }
}
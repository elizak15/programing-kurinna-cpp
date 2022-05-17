
/**
 * @mainpage
 * # Загальне завдання
 * **Сформувати** Зробити шаблоний клас-список (на базі динамічного масиву), що має шаблоноване поле
 * масиву (для будь-якого існуючого типу даних)
 * Створити наступні методи:
 *  вивод вмісту масиву на екран;
 * визначити індекс переданого елемента в заданому масиві;
 * відсортувати елементи масиву;
 * -визначити значення мінімального елемента масиву;
 * – додати елемент до кінця масиву;
 * – видалити елемент з масиву за індексом.
 *@author Kurinna E.
 *@date 17-May-2022
 *@version 2.2
 **/

/** 
 *@file main.cpp  
 *@brief Файл з демонстрацією роботи {@Train_with}, {@init}, {@addTrain}, {@printList}, {@findElement}, {@delElement}, {@fix_and_count} *@author Kurinna E.
 *@date 15-May-2022          
 *@version 2.2
 **/

/**Опис роботи*:
 * Послідовність дій:
 * - виділення пам'яті за дпомогою new;
 * - виділення пам'яті для LAB *lab;
 * - використання метода ініціалізації {@init}; 
 * - використаня метода {@add} 
 * - використання метода виведення на екран {@print};
 * - використання метода {@del} для видалення за індексом, який передасться в функцію(у нашому випадку index = 2);
 * - використання функції {@find} для знахождення  за індексом;
 * - використання функції {@sort} для сортування;
 * @return успішний код повернення з програми (0)
  */ 
#include "list.hpp"
using namespace std;


int main(){
//вивід на екран
    LAB <int> lab;
    lab.init();
    lab.add(4);
    cout << "Вивід на екран <int> " << endl;
    lab.print();
    cout << endl;
   


    LAB <double> lab1;
    lab1.init();
    lab1.add(5.6);
    cout << "Вивід на екран <double> " << endl;
    lab1.print();
    cout << endl;
    cout << endl;
     
//визначенння значення мінімального елементу
    int a = min<int>(3, 8);
    cout << "Визначенння значення мінімального елементу <int> " << endl << a << endl;
    float b = min<float>(3.9, 8.9);
    cout << "Визначенння значення мінімального елементу <float> " << endl << b << endl << endl;
     

    cout << "Додавання символів <string> ";
    LAB <char> lab3;
    lab3.init();
    
    int variable = 0;

    char temp;
    int number;
    cout <<endl<< "Кількість:  ";
    cin >> number;
    for( int i = 0; i < number; i++) {
    cout << "Ваші дані: ";
    cin >> temp;
    lab3.add(temp);
    cout << endl;
    cout << "Результат:" << endl;
    lab3.print();
    cout << endl;}

   lab3.sort();
    cout <<  endl << "Вигляд масиву після сортування: ";
    lab3.print();
    cout <<  endl << endl;

    char find;
    cout << "Який елемент хочете знайти: ";
    cin >> find;
    lab3.find(find);
    if (number != -1) {
    cout << "Елемент з індексом " << number - 2 << endl << endl;

    int index;
    cout << "Індекс за яким хочете видалити: "<< endl;
    cin >> index;
    lab3.del(index);
    cout << endl << "Результат після видалення: " << endl;
    lab3.print();
    cout << endl;
            } 

}

/**
 * @mainpage
 * # Загальне завдання
 * **Сформувати** 2 класи, 1 - читає з файлу, строки, консолі та записує у файл містить конструктор за замовчуванням, копіювання, конструктор з аргументами, деструктор, вивід на екран, гетери та сетери на поля;2 -знаходить за певним критерієм, добавляє і видaляює об'єкт
 *@author Kurinna E.
 *@date 15-May-2022
 *@version 2.2
 **/

/** 
 *@file main.cpp  
 *@brief Файл з демонстрацією роботи {@Train_with}, {@init}, {@addTrain}, {@printList}, {@findElement}, {@delElement}, {@fix_and_count} *@author Kurinna E.
 *@date 15-May-2022          
 *@version 2.2
 **/

/**
 *  
 *Головна функція    
 *
 * Послідовність дій:
 *  
 *- виділення пам'яті за дпомогою new;
 *          
 *- використання конструктора {@Train_with} для добавлення потягів;
 *                    
 *- переведення з одновимірного динамічного масиву в двохвимірний;
 *              
 *- виділення пам'яті для List *list;
 *               
 *- використання функції ініціалізації {@init}; 
 *                   
 * використання функції ініціалізації {@read}; 
 * 
 * використання функції ініціалізації {@TrainFromSTR}; 
 * 
 * використання функції ініціалізації {@get_details}; 
 * 
 * використання функції ініціалізації {@write}; 
 * 
 *- використаня функції {@addTrain} для 3 потягів;
 *
 *- використання функції виведення на екран {@printList};
 * 
 *- використання функції {@delElement} для видалення потягу за індексом, який передасться в функцію(у нашому випадку index = 2);
 * 
 * - використання функції {@findElement} для знахождення потягу за індексом(index = 2);
 *
 * - використання функції {@fix_and_count} для знаходження потяга, який потребує ремонт і має кількість вагонів більшу за 10; 
 *@return успішний код повернення з програми (0)
 **/



#include <iostream>
#include "list.h"
#include "entity.h"
using std::string; using std::cout; using std::cin; using std::ofstream; using std::ifstream;
int main(){

//виділення пам'яті
List list;
list.init();
Train train1;
Train train2;
Train train3;

//оператор введення
cout << "Оператор >> ";
cin >> train1;

train2.TrainFromSTR("0 D56 10 Italy Ukraine Engine");



//оператор виведення
cout << "Оператор << " << endl;
cout << "Потяг №1 "<< train1 << " " << endl;
cout << "Потяг №2 "<<train2 << endl;


//оператор присвоєння
Train train;
train = train2;
cout << "Оператор присвоєння "<< train  << endl;

//оператор порівняння
bool a = train1 == train2;
    cout <<"Результат:" << a << " " << "Оператор ==: 0 - false(різний стан ременту), 1 - true(однаковий)" << endl;

bool b = train1 != train2;
cout << "Результат:" << b << " " << "Оператор !=: 0 - false(стан ременту однаковий), 1 - true(стан ремонту різний)" << endl;

   

bool c = train1 > train2;
cout <<"Результат:" << c << " " << "Оператор >: 0 - false(Потяг №2 має більше вагонів), 1 - true(Потяг №1 має більше вагонів)" << endl;

bool d = train1 <= train2;
cout <<"Результат:" << d << " " << "Оператор <=: 0 - false(Потяг №1 має більше вагонів), 1 - true(Потяг №2 має більше вагонів)" << endl;

list.addTrain(train1);
list.addTrain(train2);

list.delElement(1);

//запис в output.txt
//list.write();
//list.printList();

cout << endl;

int index = 0;

Train tr = list.findElement(index);

cout << "Пошук за індексом №" << index  << ": ";


cout << tr;
//tr.print();

list.fix_and_count();
cout << "Оператори перевантаження для list" << endl;
List list1;
list1.init();
Train train4;
Train train5;
//оператор введення
cout << "Оператор введення >> для list" << endl;

train4.Train_z();
cin >> train5;
list1.addTrain(train4);
list1.addTrain(train5);
list1.read();

cout << train4 << endl << train5 <<  endl;

list1.delElement(1);
Train tr1 = list1.findElement(index);
list1.write();
cout << "Пошук за індексом №" << index  << ": ";


cout << tr1;
//tr.print();

list1.fix_and_count();
//виведення
cout << "Оператор виведення << для list" << endl << train4 << endl << train5;



return 0;}

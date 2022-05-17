/**
 * @mainpage
 * # Загальне завдання
 * **Сформувати** 2 класи, 1 - містить конструктор за замовчуванням, копіювання, конструктор з аргументами, деструктор, вивід на екран, гетери та сетери на поля;2 -знаходить за певним критерієм, добавляє і видaляює об'єкт
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
using namespace std;
int main(){
Train *train1 = new Train;
Train *train2 = new Train;
Train *train3 = new Train;
train1->Train_with(0, "A10", 1, "Poland", "Ukraine", "Engin");
train2->Train_with(1, "B15", 10, "England", "Ukraine", "Engin");
train3->Train_with(1, "C30", 15, "Germany", "Ukraine", "Engin");

List *list = new List();
list->init();
list->addTrain(*train1);
list->addTrain(*train2);
list->addTrain(*train3);
list->printList();

cout<<endl;
list->delElement(2);
list->printList();

cout << endl;

int index = 2;

Train tr = list->findElement(index - 1);

cout << "Пошук за індексом №" << index - 1 << ": ";

tr.print();

list->fix_and_count();

return 0;}

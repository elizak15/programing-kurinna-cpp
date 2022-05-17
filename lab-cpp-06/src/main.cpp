/**
 * @mainpage
 * # Загальне завдання
 * **Сформувати** Поширити реалізацію лабораторної роботи ʼДинамічні масивиʼ наступним шляхом: замінити масив та CRUD(create, read,update/delete) методи роботи з ним на використання STL, додати функцію сортування коллекції з використанням функтора
 *  @author Kurinna E.
 *  @date 17-May-2022
 *  @version 2.2
 **/

/** 
 *
 * @file main.cpp
 *  
 * @brief Файл з демонстрацією роботи {@add}, {@copy}, {@print}, {@del_end}, {@del_index}, {@del_evr}, {@sort}
 *     
 *      
 * @author Kurinna E.
 *   
 * @dare 17-May-2022
 *           
 *  @version 2.2
 **/

/**
 *
 * Головна функція 
 *   
 *    
 * Послідовність дій:
 *     
 * - зчитання даних з файлу в масив;
 *   
 * - виділення пам'яті під динамічні масиви;
 *           
 * - переведення з одновимірного динамічного масиву в двохвимірний;
 *            
 * - у функцію {@add} передається структура за допомогою push_back()
 *
 * - у функцію {@del_index} передається index, удаляє за індексом за допомогою erase();
 *   
 * - у функцію {@del_end} удаляє останній елемент за допомогою pop_back();
 * 
 * у функцію {@copy} передаються перемінні index, Train &info, копіює в train &info за індексом за допомогою at()
 * 
 * у функцію {@printList} читає дані і виводить на екран за допомогою size()
 *
 *у функцію {@sort} сортує за допомогою функтора
 * - у функцію {@del_evr} передається структура і перемінна size3  за допомогою clear()     
 * @return успішний код повернення з програми (0)
 **/


#include "entity.hpp"
#include "list.hpp"
#include <iostream>
int main(){
Train train2;
Train train3;
Train train4;
train2.TrainFromSTR("3 D56 9 Italy Ukraine Engine");
train3.TrainFromSTR("4 D56 93 Italy Ukraine Engine");
train4.TrainFromSTR("2 D56 91 Italy Ukraine Engine");


List list;
//list.init();

list.add(train2);
list.add(train3);
list.add(train4);
cout <<endl<< "Створення за допомогою push_back " << endl;
list.printList();
cout << endl << endl;

cout << "Сортування за допомогою sort(..begin(), ..end(), comparing()) " << endl;
list.sorting();

cout << endl <<"Видалення по індексу за допомогою erase() " << endl;
list.del_index(0);

int index = 0;
cout << endl << "Копіювання за індексом "<< index << " в новий масив trains за допомогою at()" << endl << endl;

Train trains;
list.copy(index, trains);
cout << endl << "trains: ";
trains.print();

cout <<endl<< "Видалення останнього елементу  за допомогою pop_push() " << endl;
list.del_end();

cout << endl;
list.printList();

cout <<endl<< "Видалення останнього елементу  за допомогою clear() " << endl<< endl;
list.del_evr();
cout <<endl<< "Результат : ";
list.printList();


return 0;}
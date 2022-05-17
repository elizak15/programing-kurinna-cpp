
#ifndef UNTITLED_LIST_H
#define UNTITLED_LIST_H
 /*
  * @file list.h
  * @brief Файл з реалізацією методів:
  *1. void List::init - ініціює список.
  *2. void List::printList - виводись на екран інформацію про потяги.
  *3. void List::addTrain - додавання нового потяга
  *4. Train & List::findElement - знаходження потяга за індексом
  *@param index;
  *return trainList[index]
  *5.void List::delElement - видалення потяга за індексом
  *@param index;
  *6.void List::fix_and_count - снаходження потяга, який потребує ремонт і має більше 10 вагонів
  *7.void List::read() - зчитування даних з файла.
  *8.void List::write() - запис даних у файл.            
  *@author Kurinna E.
  *@date 15-may-2022
  *@version 1.0
  **/


#include "entity.h"
#include <cstdio>
#include <iostream>


using namespace std;
class List{
	int size;
	Train *trainList;
public:
  void read();
  void write();
  void init();
	void addTrain(const Train &std);
	void printList();
	Train &findElement(int index);
	void delElement(const unsigned int index);
	void fix_and_count();
};

#endif //UNTITLED_LIST_H

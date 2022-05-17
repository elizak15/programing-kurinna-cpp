 /* 
  *@file list.cpp
  *@brief Файл з реалізацією методів:void List::init, void List::printList, void List::addTrain,Train & List::findElement, void List::delElement, void List::fix_and_count         
  *@author Kurinna E.
  *@date 15-may-2022
  *@version 1.0
  **/

/* 
 * @file list.cpp
 * @brief Файл з реалізацією методів:
 * 1. void List::init - ініціює список.
 * 2. void List::printList - виводись на екран інформацію про потяги.
 * 3. void List::addTrain - додавання нового потяга
 * 4. Train & List::findElement - знаходження потяга за індексом
 * @param index;
 * return trainList[index]
 * 5.void List::delElement - видалення потяга за індексом
 * @param index;
 * 6.void List::fix_and_count - снаходження потяга, який потребує ремонт і має більше 10 вагонів          
 * @author Kurinna E.
 * @date 15-may-2022
 * @version 1.0
 *              */

#include <cstring>
#include "list.h"
#include "entity.h"
#include <iostream>

//функція ініціалізації
void List::init(){
	trainList = nullptr;
	size = 0;}

//вивід на екран
void List::printList(){
	for(int i =0; i < size; i ++){
	std::cout<<trainList[i].getFix()<<" " <<trainList[i].getNumber()<<" " << trainList[i].getCount()<<" " << trainList[i].getStart()<<" " << trainList[i].getEnd()<<" " << trainList[i].getType()<<std::endl;
	}
}

//функція додавання елементу
void List::addTrain(const Train & std) {
	Train *tr = new Train[size + 1];
	memcpy(tr, trainList, sizeof(Train)*size);
	/*delete[] trainList; */ 
	trainList = tr;
	memcpy(trainList+size, &std, sizeof(Train));
	size++;
}

//пошук потяга за індексом
Train & List::findElement(int index) {
	if(index>=size || index < 0) {
	std::cout<<"no"<<std::endl;
	}
	else
		return trainList[index];
}

//видалення потяга за індектом
void List::delElement(const unsigned int index){
	Train *tr = new Train[size - 1];
	Train *trainList = new Train;
	memcpy(tr, trainList, sizeof(Train)*index);
	memcpy(tr+ index, (trainList+index+1), sizeof(Train)*(size-index-1));
	/*delete[] trainList;*/
	trainList = tr;
	size = size - 1;}

//функція пошуку потяга,який потребує ремонт і має бідьше 10 вагонів
void List::fix_and_count() {
	std::cout << "\n\nПотяги, які потребують ремонт і кількість вагонів більше 10: \n";
	for ( int i = 0; i < size + 1; i++) {
	if ( trainList[i].getFix() == 1) {
	int str = trainList[i].getCount();
	if( str >= 11) {
	int str_fix = trainList[i].getFix();
	int str_count = trainList[i].getCount();
	std::string str_number = trainList[i].getNumber();
	std::string str_start = trainList[i].getStart();
	std::string str_end = trainList[i].getEnd();
	std::string str_type = trainList[i].getType();
	std::cout << str_fix << " " << str_number << " " << str_count << " " << str_start << " " << str_end << " " << str_type;
	std::cout << "; ";

		}}}}
												            			         
			   





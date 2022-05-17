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
 * 7.void List::read() - зчитування даних з файла.
 * 8.void List::write() - запис даних у файл.  
 * @author Kurinna E.
 * @date 15-may-2022
 * @version 1.0
 *              */

#include <cstring>
#include "list.h"
#include "entity.h"
#include <iostream>
#include <sstream>
#include <fstream>
#include <string>



//функція ініціалізації
void List::init(){
	trainList = nullptr;
	size = 0;}

//оператор індексування
Train List::operator[](int index) { 
    return trainList[index]; 
}

//оператор введення
istream& operator >>(istream &infile, List &list){
	Train *train = new Train;
	cin >> *train;
	list.addTrain(*train);
	return infile;}


//оператор введення
std::ifstream& operator>>(std::ifstream &in, List &list) { 
    int i = 0; 
    while(!in.eof()) { 
        Train *train = new Train; 
        in >> *train; 
        list.addTrain(*train); 
        ++i; 
    }}
	
//оператор виведення
ostream& operator <<(ostream &outfile, List &list){
	for(int i = 0; i < 3; i++){
		cout << list.trainList[i];
	}
	return outfile;
}


 
 

//оператор зчитування з файла

void List::read(){
	string path= "/home/eliza/programing-kurinna-cpp/lab-cpp-03/assets/input.txt";
	std::ifstream infile;
	int i = 0;
	if(infile.is_open())
	cout << "File not found";
	while(!infile.eof()){
	infile.open(path);
	while(getline(infile, path) && i < size){
	trainList[i].TrainFromSTR(path);
	i++;
	}
	infile.close();}}

void List::write(){
	string path= "/home/eliza/programing-kurinna-cpp/lab-cpp-03/assets/output.txt";
	std::ofstream outfile;
	outfile.open(path);
	if((!outfile)){
	cout << "File not found" << endl;}
for(int i = 0; i < size; i++){
	outfile << trainList[i].getFix()<< " ";
	outfile << trainList[i].getNumber() << " ";
	outfile << trainList[i].getCount() << " ";
	outfile << trainList[i].getStart() << " ";
	outfile << trainList[i].getEnd() << " ";
	outfile << trainList[i].getType() << " " << endl;

}
	}




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

//видалення потяга за індектом
void List::delElement(const unsigned int index){
	Train *tr = new Train[size - 1];
	//Train *trainList = new Train;
	memcpy(tr, trainList, sizeof(Train)*index);
	memcpy(tr + index, (trainList+index+1), sizeof(Train)*(size-index-1));
	/*delete[] trainList;*/
	trainList = tr;
	size--;}

//пошук потяга за індексом
Train & List::findElement(int index) {
	if(index>=size || index < 0) {
	std::cout<<"no"<<std::endl;
	}
	else
		return trainList[index];
}



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
	std::cout << str_fix << " " << str_number << " " << str_count << " " << str_start << " " << str_end << " " << str_type << endl;
	

		}}}}
												            			         
			   





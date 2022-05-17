/**
 * @file list.hpp
 * @brief Поширити реалізацію лабораторної роботи ʼДинамічні масивиʼ наступним шляхом: замінити масив та CRUD(create, read,update/delete) методи роботи з ним на використання STL, додати функцію сортування коллекції з використанням функтора
 * @author Kurinna E.
 * @date 17-May-2022
 * version 1.2
 * 
 * 1.у функцію {@add} передається структура за допомогою push_back()
 *
 * 2.у функцію {@del_index} передається index, удаляє за індексом за допомогою erase();
 *   
 * 3.у функцію {@del_end} удаляє останній елемент за допомогою pop_back();
 * 
 * 4.функцію {@copy} передаються перемінні index, Train &info, копіює в train &info за індексом за допомогою at()
 * 
 * 5.функцію {@printList} читає дані і виводить на екран за допомогою size()
 *
 *6.у функцію {@sort} сортує за допомогою функтора
 * 7. у функцію {@del_evr} передається структура і перемінна size3  за допомогою clear() 
 **/



#include <iostream>
#include <cstring>
#include <vector>
#include <fstream>
#include <sstream>
#include <string>
#include <algorithm>

using namespace std;

struct Way{
	string start;
	string end;
};

class Train {
	int fix;
	string number;
	 int count;
	Way start_end;
	string type;

	public:

void TrainFromSTR(const string &str){
		std::stringstream plus(str);
		plus >> fix >> number >> count >> start_end.start >> start_end.end >> type;
	}
	//гетери та сетери на поля
int getFix(){
	return fix;}
void setFix(int add_fix){
	fix = add_fix;
	}

string getNumber(){
	        return number;}
void setNumber(string add_number){
	        number = add_number;}

int getCount(){
	        return count;}
void setCount(int add_count){
	        count = add_count;}

string getStart(){
	                return start_end.start;}
void setStart(string add_start ){
	                start_end.start = add_start;}

string getEnd(){
	                return start_end.end;}
void setEnd(string add_end){
	                start_end.end = add_end;}

string getType(){
	                return type;}
void setType(string add_type){
	                type =add_type;}

void print(){
std::cout<<fix <<" " << number <<" " << count <<" " << start_end.start <<" " << start_end.end <<" " << type <<std::endl;
}};


class List{
	vector<Train> trains;
public:

//create
void add(Train &info){
    trains.push_back(info);
	cout <<"Виведення розмірності за допомоги size()"<<endl<< "Кількість: " << trains.size() << endl;}

//delete
void del_end(){
trains.pop_back();
}

void del_evr(){
	trains.clear();
}

void del_index(int index){
	trains.erase(trains.begin() + index);
	printList();
}

//update
void copy(int index, Train &info){
	info = trains.at(index);}

//sort
struct comparing{
int operator()(Train train2, Train train3){
		return train2.getCount() < train3.getCount();}
	};

void sorting(){
	sort(trains.begin(), trains.end(), comparing());
	printList();
}
//read
void printList(){
	for(int i =0; i < trains.size(); i++){
	std::cout<<trains[i].getFix()<<" " <<trains[i].getNumber()<<" " << trains[i].getCount()<<" " << trains[i].getStart()<<" " << trains[i].getEnd()<<" " << trains[i].getType()<<std::endl;
	}}


};
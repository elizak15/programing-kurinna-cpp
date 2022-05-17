/*@file entity.cpp
* @brief Файл з реалізацією класу та методами :void Train::Train_z, void Train::Train_with, void Train::cpTrain, void Train::destTraind, Гетери та сетери для кожного елементу базового класу,void Train::print  
* @author Kurinna E.
* @date 15-May-2022
* @version 1.2
*      **/

/**
 *@file entity.cpp
 *@brief Файл з реалізацією методів, що
 *1. void Train::Train_z - встановлює за замовчуванням робітника.
 *2. void Train::Train_with - конструктор з аргументами.
 *3. void Train::cpTrain - копіює значення переданого аргументу.
 @param Train & trains;
 *4. void Train::destTraind- видаляє інформацію про потяг.
 *5. Гетери та сетери для кожного елементу базового класу.
 *6. void Train::print - вивід на екран.
 *7. void Train::get_details - введення з консолі.
 *8. void Train::TrainFromSTR(const string &str) - читання з строки.
 *@author Kurinna E.
 *@date 15-may-2022
 *@version 1.2
 *            */


#include <cstring>
#include <fstream>
#include "list.h"
#include "entity.h"
#include <string>
#include <sstream>
using namespace std;

void Train::get_details(){
	cout << "Enter information about train №4"<<endl;
	cout << "Fix"<<endl;
	cin>>fix;

	cout << "Number"<<endl;
	cin>>number;

	cout << "Count"<<endl;
	cin>>count;

	cout << "Start path"<<endl;
	cin>>start_end.start;

	cout << "End path"<<endl;
	cin>>start_end.end;

	cout << "Type"<<endl;
	cin>>type;


}
void Train::display_details(){
	cout<< "Fix" << fix<<endl;

	cout<< "Fix" << number<<endl;

	cout<< "Fix" << count<<endl;

	cout<< "Fix" << start_end.start<<endl;

	cout<< "Fix" << start_end.end<<endl;

	cout<< "Fix" << type<<endl;

}

void Train::TrainFromSTR(const string &str){
		std::stringstream plus(str);
		plus >> fix >> number >> count >> start_end.start >> start_end.end >> type;
	}
	
//конструктор за замовчуванням
void Train::Train_z(){
	
	fix = 0;
	number = "A10";
	count = 12;
	start_end.start = "Spain";
	start_end.end = "Ukraine";
	type = "Eng";}

//вивід на екран
void Train::print(){
std::cout<<fix <<" " << number <<" " << count <<" " << start_end.start <<" " << start_end.end <<" " << type <<std::endl;
}
//конструктор з аргументами
void Train::Train_with(int add_fix, string add_number, int add_count, string  add_start,string add_end, string add_type){
	fix = add_fix;
	number = add_number;
	count = add_count;
	start_end.start = add_start;
	start_end.end = add_end;
	type = add_type;}

//консруктор копіювання
void Train::cpTrain(const Train &trains){
	fix = trains.fix;
	number = trains.number;
	count = trains.count;
	start_end.start = trains.start_end.start;
	start_end.end = trains.start_end.end;
	type = trains.type;}

//деструктор
/*Train::~Train(){
	cout << "Destructor is run";
	delete fix;
	delete[] count;
	delete number;
	delete[] start_end.start;
	delete[] start_end.end;
	delete[] type;}
*/

//гетери та сетери на поля
int Train::getFix(){
	return fix;}
void Train::setFix(int add_fix){
	fix = add_fix;
	}

string Train::getNumber(){
	        return number;}
void Train::setNumber(string add_number){
	        number = add_number;}

int Train::getCount(){
	        return count;}
void Train::setCount(int add_count){
	        count = add_count;}

string Train::getStart(){
	                return start_end.start;}
void Train::setStart(string add_start ){
	                start_end.start = add_start;}

string Train::getEnd(){
	                return start_end.end;}
void Train::setEnd(string add_end){
	                start_end.end = add_end;}

string Train::getType(){
	                return type;}
void Train::setType(string add_type){
	                type =add_type;}




void Train::destrTrain(){
	fix = 0;
	number = "NULL";
	//count = "NULL";
	start_end.start = "NULL";
	start_end.end = "NULL";
	type = "NULL";
}


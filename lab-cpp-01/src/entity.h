#ifndef UNTITLED_STUD_H
#define UNTITLED_STUD_H

/**
 *  @file entity.h
 *  @brief Файл з реалізацією методів, що
 *  1. void Train::Train_z - встановлює за замовчуванням робітника.
 *  2. void Train::Train_with - конструктор з аргументами.
 *  3. void Train::cpTrain - копіює значення переданого аргументу.
 *  @param Train & trains;
 *  4. void Train::destTraind- видаляє інформацію про потяг.
 *  5. Гетери та сетери для кожного елементу базового класу.
 *  6. void Train::print - вивід на екран.
 *  @author Kurinna E.
 *  @date 15-may-2022
 *  @version 1.2
 **/

#include <cstdio>
#include <iostream>
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
	void Train_with(int add_fix, string add_number, int add_count, string add_start, string add_end, string add_type);

	void print();
	
	void Train_z();
	void cpTrain(const Train &trains);
	void destrTrain();		
	int getFix();
	void setFix(int fix);

	string getNumber();
	void setNumber(string number);

	int getCount();
	void setCount(int count);

	string getStart();
	void setStart(string start);

	string getEnd();
	void setEnd(string end);

	string getType();
	void setType(string type);
};
#endif

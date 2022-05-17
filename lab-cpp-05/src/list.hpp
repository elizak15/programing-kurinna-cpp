/**
 *
 * @file entity.hpp
 * @brief Файл з реалізацією методів, що
 * 1.використання метода ініціалізації {@init}; 
 * 2.використаня метода {@add}
 * 3.використання метода виведення на екран {@print};
 * 4.використання метода {@del} для видалення за індексом, який передасться в функцію(у нашому випадку index = 2);
 * 5.використання функції {@find} для знахождення  за індексом;
 * 6.використання функції {@sort} для сортування;
 * @return успішний код повернення з програми (0)
 * @author Kurinna E.
 * @date 17-may-2022
 * @version 1.2
  **/ 
#include <cstring>
#include <iostream>
template <typename T>

class LAB {
private:
    T *lab05;
    T *lab06;
    int number;

public:
 void init(){
     lab05 = nullptr;
     number = 0;
 }

 void add( const T & std) {
	T*tr = new T[number + 1];
	memcpy(tr, lab05, sizeof(T)*number);
	/*delete[] trainList; */ 
	lab05 = tr;
	memcpy(lab05+number, &std, sizeof(T));
	number++;

 }
 void print(){
     for (int i = 0; i < number; i ++){
  std:: cout << lab05[i] << " ";}}
 
 
 T min(T a, T b){
     return a < b ? a : b;}


int find(const T &data) {
        int i = 0;
        while(i < number) {
        if(lab05[i] == data) {
        return i;}
        i++;
        }
        return -1;}

void del(const int &index) {
    if( index < number) {
    T *lab06 = new T[number - 1];
    memcpy(lab06, lab05, sizeof(T)*number);
    memcpy((lab06 + index), (lab05 + index + 1), sizeof(T)*(number - index - 1));
    lab05= lab06;
    number--;}}

void sort() {
    for( int i = 0; i < number - 1; i++) {
    for( int j = 0; j < number - 1; j++) {
    if(lab05[j] > lab05[j + 1]) {
    T temp = lab05[j];
    lab05[j] = lab05[j + 1];
    lab05[j + 1] = temp; }}}}
 };

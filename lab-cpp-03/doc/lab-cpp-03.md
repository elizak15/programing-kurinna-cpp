#Лабораторна робота № 19. 0ПП. Перевантаження операторів

## 1 ВИМОГИ

### 1.1 Розробник

* Курінна Єлизавета Ігорівна;
* студент групи КН-921г;
* 16-травня-2022

### 1.2 Загальне завдання

**Сформувати** 2 класи, 1 - містить конструктор за замовчуванням, копіювання, конструктор з аргументами, деструктор, зчитування даних з файлу, запис у файл, введення з консолі та читання з строки, вивід на екран, гетери та сетери на поля;2 -знаходить за певним критерієм, добавляє і видaляює об'єкт



## 2 ОПИС ПРОГРАМИ

### 2.1 Функціональне призначення

Програма призначена для реалызації двох класів, де 1 - містить конструктор за замовчуванням, копіювання, конструктор з аргументами, деструктор, вивід на екран, гетери та сетери на поля;2 -знаходить за певним критерієм, добавляє і видaляює об'єкт



Демонстрація знайдених результатів передбачає покрокове виконання програми в режимі налагодження.

### 2.2 Опис логічної структури

Головна функція визиває наступну функцію: `void Train::Train_z()`, `void Train::Train_with(int add_fix, string add_number, int add_count, string  add_start,string add_end, string add_type)` , `void Train::cpTrain(const Train &trains)`
`void Train::destrTrain()`, `void List::init()`,  `void List::printList()`, `void List::addTrain(const Train & std)`, `Train & List::findElement(int index)`, `void List::delElement(const unsigned int index)`, `void List::read()`, `void List::write()`, `void List::TrainFromSTR()`, `void Train::get_details()`

//оператор прирівнювання
Train &Train::operator=(const Train& train){
	fix = train.fix;
	number = train.number;
	count = train.count;
	start_end.start = train.start_end.start;
	start_end.end = train.start_end.end;
	type = train.type;
return *this;}

//оператори порівняння
bool operator==(Train train1,  Train train2){
	return train1.fix == train2.fix;
}

bool operator!=(Train train1,  Train train2){
	return train1.fix  != train2.fix;
}

bool operator>(Train train1,  Train train2){
	return train1.count > train2.count;
}

bool operator<=(Train train1,  Train train2){
	return train1.count  <= train2.count;
}

//оператор виведення
ostream& operator<<(ostream  &outfile, Train &train){
	outfile << train.fix << " " << train.number  << " "<< train.count << " " << train.start_end.start << " " << train.start_end.end << " " << train.type;
return outfile;}

//оператор введення
istream& operator>>(istream &infile, Train &train){
cout << "Fix: ";
infile >> train.fix;
cout << "Number: ";
infile >> train.number;
cout << "Count: ";
infile >> train.count;
cout << "Start path: ";
infile >> train.start_end.start;
cout << "End path: ";
infile >> train.start_end.end;
cout << "Type: ";
infile >> train.type;
return infile;

}

//

Опис розроблених структур і функцій наводиться на базі результатів роботи системи автодокументування *Doxygen*.

### 2.2.1 Функція додавання потяга

```c

\void List::addTrain(const Train & std)


```

*Призначення*: додавання об'єкту


*Опис роботи*: спочатку виділення пам'яті, потім використання команди memcpy

**Аргументи**: 
-*Train &std* - масив структури


### 2.2.2 Функція видалення за індексом

```c

void List::delElement(const unsigned int index)


```

*Призначення*: видаляє об'єкт за переданим індексом


*Опис роботи*: видалення потяга

**Аргументи**: 
-*index* - індекс за яким видалити



### 2.2.3 Функція пошуку за індексом

```c

Train & List::findElement(int index) {



```

*Призначення*: пошук за полями структури


*Опис роботи*: функції передається індекс
**Аргументи**: 
- *index* - індекс, за яким буде пошук


### 2.2.4 Функція пошуку за певними полями

```c

void List::fix_and_count()

```

*Призначення*: пошук потягів, де кількість вагонів більше 10 і потребують ремонту

*Опис роботи*: пошук за змінними count i fix.






###2.2.3 Основна функція

```c

int main()

```
![Поля структури main](assets/1.png)
*Призначення*: головна функція.

*Опис роботи*:

Послідовність дій:
  
 - виділення пам'яті за дпомогою new;
           
 - використання конструктора {@Train_with} для добавлення потягів;
                     
 - переведення з одновимірного динамічного масиву в двохвимірний;
               
 - виділення пам'яті для List *list;
                
 - використання функції ініціалізації {@init}; 
                    
 - використаня функції {@addTrain} для 3 потягів;
 
 - використання функції виведення на екран {@printList};
  
 - використання функції {@delElement} для видалення потягу за індексом, який передасться в функцію(у нашому випадку index = 2);
  
  - використання функції {@findElement} для знахождення потягу за індексом(index = 2);
 
  - використання функції {@fix_and_count} для знаходження потяга, який потребує ремонт і має кількість вагонів більшу за 10; 
 @return успішний код повернення з програми (0)



####2.2.4 Структура проекту

```

        └── lab-cpp-03

            ├── Doxyfile

            ├── Makefile

            ├── README.md

            ├── doc

            │   └── lab-cpp-03.md

            ├── src

            │   └── main.cpp

            │   └── entity.cpp

            │   └── entity.h
            │   └── list.cpp
            │   └── list.h


```

### 2.3 Важливі фрагменти програми

#### 2.3.1 Початкові дані. Константи, перерахування

```c



```
cin >> train1;

train2.TrainFromSTR("0 D56 10 Italy Ukraine Engine");




```
#### 2.3.2 Виділення пам'яті 
        

```c

Train *train1 = new Train;
Train *train2 = new Train;
Train *train3 = new Train;
Train *train4 = new Train;
Train *train5= new Train;
List *list = new List();
List *list1 = new List();




```


## 3 ВАРІАНТИ ВИКОРИСТАННЯ

Для демонстрації результатів кожної задачі використовується:


**Варіант використання 1**: послідовність дій для запуску програми у режимі відлагодження:
Оператор >> Fix: 0
Number: G13
Count: 12
Start path: Poland
End path: Ukraine
Type: Eng
Оператор << 
Потяг №1 0 G13 12 Poland Ukraine Eng 
Потяг №2 0 D56 10 Italy Ukraine Engine
Оператор присвоєння 0 D56 10 Italy Ukraine Engine
Результат:1 Оператор ==: 0 - false(різний стан ременту), 1 - true(однаковий)
Результат:0 Оператор !=: 0 - false(стан ременту однаковий), 1 - true(стан ремонту різний)
Результат:1 Оператор >: 0 - false(Потяг №2 має більше вагонів), 1 - true(Потяг №1 має більше вагонів)
Результат:0 Оператор <=: 0 - false(Потяг №1 має більше вагонів), 1 - true(Потяг №2 має більше вагонів)

Пошук за індексом №0: 0 G13 12 Poland Ukraine Eng

Потяги, які потребують ремонт і кількість вагонів більше 10: 
Оператори перевантаження для list
Оператор введення >> для list
Fix: 0
Number: H13
Count: 1
Start path: Spain
End path: Ukraine
Type: Eng
Fix: 1
Number: J12
Count: 1
Start path: Italy
End path: Ukraine
Type: Eng
Пошук за індексом №0: 0 H13 1 Spain Ukraine Eng

Потяги, які потребують ремонт і кількість вагонів більше 10: 
Оператор виведення << для list
0 H13 1 Spain Ukraine Eng
1 J12 1 Italy Ukraine Eng


## ВИСНОВКИ

При виконанні даної лабораторної роботи було набуто практичного досвіду роботи з класами, операторами перевантаження, зчитуввання з файлу, строки, консолі та запис у файл, конструкторами за замовчуванням, копіювання, з аргументами, деструкторами, гетерами і сетерами на поля 

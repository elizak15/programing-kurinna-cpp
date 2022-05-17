#Лабораторна робота № 18. Потоки

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

//читання з файлу
void List::read(){
	string path= "/home/eliza/programing-kurinna-cpp/lab-cpp-02/assets/input.txt";
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

//читання з строки
void Train::TrainFromSTR(const string &str){
		std::stringstream plus(str);
		plus >> fix >> number >> count >> start_end.start >> start_end.end >> type;
	}

//введення з консолі
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

        └── lab-cpp-05

            ├── Doxyfile

            ├── Makefile

            ├── README.md

            ├── doc

            │   └── lab-cpp-02.md

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

int index = 2;
input.txt
0 A10 1 Poland Ukraine Engin
1 B15 10 England Ukraine Engin

```
train1->Train_z();
train2->Train_z();
//читання з строки
train3->TrainFromSTR("0 D56 9 Italy Ukraine Engine");
//введення з консолі
train4->get_details();




```
#### 2.3.2 Виділення пам'яті 
        

```c

Train *train1 = new Train;
Train *train2 = new Train;
Train *train3 = new Train;
Train *train4 = new Train;
List *list = new List();



```


## 3 ВАРІАНТИ ВИКОРИСТАННЯ

Для демонстрації результатів кожної задачі використовується:


**Варіант використання 1**: послідовність дій для запуску програми у режимі відлагодження:
Enter information about train №4
Fix
1
Number
F45
Count
4
Start path
Spain
End path
Ukraine
Type
Engine
0 A10 1 Poland Ukraine Engin
1 B15 11 England Ukraine Engin
0 D56 9 Italy Ukraine Engine
1 F45 4 Spain Ukraine Engine

0 A10 1 Poland Ukraine Engin
1 B15 11 England Ukraine Engin
0 D56 9 Italy Ukraine Engine

Пошук за індексом №1: 1 B15 11 England Ukraine Engin


Потяги, які потребують ремонт і кількість вагонів більше 10: 
1 B15 11 England Ukraine Engin;


## ВИСНОВКИ

При виконанні даної лабораторної роботи було набуто практичного досвіду роботи з класами,зчитуввання з файлу, строки, консолі та запис у файл, конструкторами за замовчуванням, копіювання, з аргументами, деструкторами, гетерами і сетерами на поля 

/*
 Гайворонский Е. Г.
 СТ РПО ПВ121
 20.01.2022

 Задание #3 DZ_ST_C++_01.

Разработать класс String, который в дальнейшем будет
использоваться для работы со строками. Класс должен
содержать:
- Конструктор по умолчанию, позволяющий создать
строку длиной 80 символов;
- Конструктор, позволяющий создавать строку произ-
вольного размера;
- Конструктор, который создаёт строку и инициализи-
рует её строкой, полученной от пользователя.
Необходимо создать деструктор, а также использовать
механизмы делегирования конструкторов, если это воз-
можно.
Класс должен содержать методы для ввода строк с клави-
атуры и вывода строк на экран. Также нужно реализовать
статическую функцию-член, которая будет возвращать
количество созданных объектов строк.
*/
#include <iostream>
#include "line.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int Line::total {0};

int main(int argc, char** argv) {
	std::cout<<"\n*"<<Line::gettotal()<<"*\n";
	Line str;
	std::cout<<"\n*"<<Line::gettotal()<<"*\n";
	Line str1("Hello from line");
	std::cout<<"\n*"<<Line::gettotal()<<"*\n";
	std::cout<<str.getsize()<<" "<<str1.getsize()<<std::endl;
	std::cout<<"\n*"<<Line::gettotal()<<"*\n";
	str1.read();
	std::cout<<"\n*"<<Line::gettotal()<<"*\n";
	std::cout << str1.getsize() <<std::endl; 
	std::cout<<"\n*"<<Line::gettotal()<<"*\n";
	str1.write();
	std::cout<<"\n*"<<Line::gettotal()<<"*\n";
	return 0;
}
#include "Line.h"
#include <iostream>
#include <string>

Line::Line() {
	line = new char[80];
	size = 80;
	total++;
}

Line::Line(int lsize) {
	line = new char[lsize];
	size =lsize;
	total++;
}

Line::Line(std::string lstr) {
	int lsize = lstr.size();
	line = new char[lsize];
	size =lsize;
	for(auto i=0; i<lsize;i++ ) line[i]=lstr[i];
	total++;
}

Line::~Line() {
	delete[] line;
	line = nullptr;
	total--;
}

void Line::read() {
	std::string str;
	std::getline(std::cin,str);
	delete[] line;
	line = nullptr;
	line = new char[str.size()];
	size = str.size();
	for(auto i = 0; i < str.size(); i++) line[i] = str[i];
}

void Line::write() {
	for(auto i = 0; i < size; i++)
		std::cout <<line[i];
}
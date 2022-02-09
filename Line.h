#ifndef LINE_H
#define LINE_H
#include<string>
class Line {
	protected:
		static int total;
		int   size;
		char* line;
	public:
		Line();
		Line(int);
		Line(std::string);
		~Line();
		inline int getsize() {return size;};
		static int gettotal() {return total;};
		void read();
		void write();
};

#endif
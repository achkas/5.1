// Наследование и полиморфизм 5.1.cpp 

#include <iostream>
#include <string>
#include <windows.h>

class Figure
{

protected:

	int sides_count;
	std::string name;

public:

	Figure() {
		sides_count = 0;
		name = "Фигура: ";
	}

	int get_sides_count(){

		return sides_count;
	}

	std::string get_name() {

		return name;
	}
	
};


class Triangle :public Figure {

public:
	
	Triangle() {
		sides_count = 3;
		name = "Треугольник: ";
	}
};


class Quadrangle :public Figure {	 

public:

	Quadrangle() {
		sides_count = 4;
		name = "Четырёхугольник: ";
	}
};



int main()
{
	setlocale(LC_ALL, "ru");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Figure f;
	Triangle t;
	Quadrangle w;

	std::cout << "Количество сторон:" << std::endl
		<< f.get_name() << f.get_sides_count() << std::endl
		<< t.get_name() << t.get_sides_count() << std::endl
		<< w.get_name() << w.get_sides_count();

	return 0;
}
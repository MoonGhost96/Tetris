#pragma once
#include "Tool.h"
#include <iostream>
/*
	cube:俄罗斯方块中的最小单元，用一个字符c表示，并包含其坐标值x和y
*/
class Cube final
{
private:
	Cube();
	Cube(const Cube&);
	Cube(const Cube&&);
	int _x;
	int _y;
	char _c;
public:
	Cube(const int& x, const int& y) :_x(x), _y(y), _c('#') {};
	void show() {
		Tool tool;
		tool.gotoxy(_x, _y);
		std::cout << _c;		
	};
	int get_x() const { return _x; };
	int get_y() const { return _y; };
	void set(const int& x, const int& y) { _x = x, _y = y; }
	void set_x(const int& x) { _x = x; }
	void set_y(const int& y) { _y = y; }
};
﻿// Task.cpp : Определяет функции для статической библиотеки.
//

#include "pch.h"
#include "Task.h"
#include <fstream>
#include <string>
/*
void findRoots(double a, double b, double c, double x1, double x2, double D)
{
	D = b * b - 4 * a * c;
	if (D > 0)
	{
		x1 = (-b - sqrt(D)) / 2 * a;
		x2 = (-b + sqrt(D)) / 2 * a;
	}
	else if (D == 0)
	{
		x1 = -b / 2 * a;
	}
	else if (a == 0 && b == 0 && c == 0)
		"infinity_solutions";
	else
		"no_solutions";
}
*/
bool Solve(std::string equations, std::string results)
{
	std::ifstream f(equations);
	std::ofstream r(results);
	if (f && r)
	{
		double a, b, c, x1, x2, D;
		while (f >> a >> b >> c)
		{
			D = b * b - 4 * a * c;
			if (D > 0)
			{
				x1 = (-b - sqrt(D)) / 2 * a;
				x2 = (-b + sqrt(D)) / 2 * a;
				r << a << ' ' << b << ' ' << c << ' ' << x1 << ' ' << x2 << '\n';
			}
			else if (D == 0)
			{
				x1 = -b / 2 * a;
				r << a << ' ' << b << ' ' << c << ' ' << x1 << '\n';
			}
			else if (a == 0 && b == 0)
			{
				r << a << ' ' << b << ' ' << c << ' ' << "infinity_solutions" << '\n';
			}
			else
			{
				r << a << ' ' << b << ' ' << c << ' ' << "no_solutions" << '\n';
			}
		}
		return true;
	}
	else
		return false;
}
/*
	Реализуйте в данном файле функцию, которая позволяет решать квадратные уравнения, считывая 
	исходные данные из одного текстового файла и записывает результат в другой текстовый файла.

	1. Функция должна иметь имя Solve.
	2. функция принимает 2 параметра:
		1 параметр - имя входного файла с исходными данными
		2 параметр - имя созхдаваемого выходного файла с выходными данными
	3. Функция должна возвращать true, если задачи успешно решены, и false, если указано неверное имя
	входного или выходного файла.

	Формат входного файла: текстовый файл с набором строк. Каждая строка содержит коэффициенты a, b, c
	для одного уравнения. Количество строк может быть произвольным, в том числе и 0. Каждая строка содержит
	3 числа, разделенных пробелом. Первое число - коэффициент a, второе - b, третье - c.
	Пример содержимого входного файл:

	1.2 -45.98 23
	0 65 4
	0 0 0
	22.4 1Е-01 0.0045
	3 2.2 -8
	1 2 2
	 
	Вы должны из каждой строки считать коэффициенты уравнения, передать их в функцию, которая отыскивает 
	корни, и записать результат в выходной файл. Каждая строка выходного файла содержит данные о решении
	одного уравнения.

	Пример выходного файла для строк данных, представленных выше:

	1.2 -45.98 23 37.80974 0.506924
	0 65 4 -0.0615385
	0 0 0 infinity_solutions
	22.4 1e-01 -8 1.306985 -2.04032
	1 2 2 no_solutions

	Эти данные следует понимать так:
	1 число - коэфф. а исходного уравнения
	2 число - коэфф. b исходного уравнения
	3 число - коэфф. c исходного уравнения
	4 число (если есть хотя бы один корень) первый корень уравнения
	5 число (если есть 2 корня) второй корень уравнения

	если в уравнении один корень - то 5 числа нет
	если в уравнении нет корней - то вместо 4 и 5 числа необходимо записать строку "no_solutions"
	если в уравнении бесконечное множество решений - то вместо 4 и 5 числа необходимо записать строку "infinity_solutions"


	!!!!! ВАЖНО !!!!!
	В данном файле разрешается разместить кроме кода требуемой функции - код любых других вспомогательных
	функций. Никакой функции main() в этом файле быть не должно.
	Если вы хотите испытать и отладить вашу функцию - пишите код в файле Example.cpp проекта Example данного решения
	Для этого задайте в качестве запускаемого проекта проект Example.

	ДЛЯ АВТОМАТИЧЕСКОГО ТЕСТИРОВАНИЯ  проверки правильности работы вашего задания - сделайте запукаемым проект
	Tests и запустите его. Если функция написана правильно - все тесты должны успешно выполниться
	(зеленый цвет в консоли). Если ваша функция работает некорректно - в консоли будут сообщения красным цветом
*/

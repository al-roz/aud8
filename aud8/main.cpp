#include <iostream>
#include "safe_array.h"
#include <fstream>
#include <tuple>
#include <vector>

//template < typename T>
//void my_swap(T& a, T& b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}

//struct  Person
//{
//	int years;
//	std::string name;
//};

int main()
{
	//##################################################################################
	/*int first_i = 10, second_i = 5;
	std::cout << "int test" << std::endl;
	std::cout << first_i << " " << second_i << std::endl;
	my_swap(first_i, second_i);
	std::cout << first_i << " " << second_i << std::endl;

	double first_d = 10.1, second_d = 5.2;
	std::cout << "douable test" << std::endl;
	std::cout << first_d << " " << second_d << std::endl;
	my_swap(first_d, second_d);
	std::cout << first_d << " " << second_d << std::endl;

	Person first = { 19,"AAA" };
	Person second = { 20,"BBB" };
	std::cout << "Person test" << std::endl;
	std::cout << first.name << " " << first.years << "      " << second.name << " " << second.years << std::endl;
	my_swap(first, second);
	std::cout << first.name << " " << first.years  << "      " << second.name << " " << second.years << std::endl;*/

	//##################################################################################

	/*safe_array<int> a(1);
	a[0] = 1;
	a.push(2);
	
	for (int i = 0; i < 10; ++i)
	{
		a.push(i);
	}
	for (int i = 0; i < a.get_size(); ++i)
	{
		std::cout << a[i] << " ";
	}
	a.pop();
	a.pop();
	a.pop();
	a.pop();
	std::cout << std::endl;
	for (int i = 0; i < a.get_size(); ++i)
	{
		std::cout << a[i] << " ";
	}*/
	//##################################################################################

	std::ifstream in("input.txt");
	int x, y, z;
	std::tuple<int, int, int> ans_point;
	int max = -1;

	while (!in.eof())
	{
		in >> x >> y >> z;
		if ((x * x + y * y + z * z) > max)
		{
			max = (x * x + y * y + z * z);
			ans_point = std::make_tuple(x, y, z);
		}
	}
	std::cout << std::get<0>(ans_point) << " " << std::get<1>(ans_point) << " " << std::get<2>(ans_point) << std::endl;



}
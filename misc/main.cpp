#include <iostream>
#include <array>
#include <vector>
#include <list>
#include <set>

int main()
{
	int a [10];

	a[17] = 6;

	std::array<int, 10> b;
	b[17] = 6;

	return 0;
}

// for (unsigned int i = 0; i < 10; i++)
// {
// 	vector.push_back(generateValue());
// 	std::cout << i << std::endl;
// }
// vector.push_back(5);
// std::fill(vector.begin(), vector.end(), generateValue());
// for(it = vector.begin(); it != vector.end(); it++)
// 	vector.insert(it, generateValue());
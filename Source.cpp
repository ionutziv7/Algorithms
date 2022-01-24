#include <iostream>
#include <vector>

using namespace std;

int main()
{
	cout << "Algoritms will be solved in this solution!" << endl<<endl;

	vector<string> first_three_algorithms;
	first_three_algorithms.push_back("Solve Me First");
	first_three_algorithms.push_back("Simple Array Sum");
	first_three_algorithms.push_back("Plus Minus");
	

	for (int i = 0; i < first_three_algorithms.size(); i++)
	{
		cout <<first_three_algorithms.at(i) << endl;
	}

	return 0;
}
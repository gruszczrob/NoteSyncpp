#include <iostream>
#include <filesWorkOn.hpp>
using namespace std;

int main()
{
	FilesWorkOn file = FilesWorkOn("aaa.txt", "bbb", "ccc", "ddd");
	std::cout << "1." << std::endl;
	file.readFile();
	file.appendFile("jvnsdkjnsdk\nskdvbdkvn sdvkdv");
	std::cout << "2." << std::endl;
	file.readFile();
	cout<<file.getLastChange();
	return 0;
}

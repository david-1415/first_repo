#include <iostream>

int main(void)
{
	int num = 5;
	std::cout << "num is " << num << "\nenter new valu for num" << std::endl;
	scanf_s("%d", &num);
	getchar();
	std::cout << "num is " << num << std::endl;
	system("pause");
	return 0;
}
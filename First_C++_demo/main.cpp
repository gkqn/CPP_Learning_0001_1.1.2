# include <iostream>
# include <cstdio>

int main() 
{	
	// 01. Hello World
	printf_s("HelloWorld!\n");
	std::cout << "Hello World!" << std::endl;
	std::cout << std::endl;

	// 02. �ڶ���C++�����������
	int a = 12;
	printf_s("I have %d dollars.\n", a);
	printf_s("I want buy: \n a book.\n");
	std::cout << "I have " << a << " dollars." << std::endl;
	std::cout << "I want buy: \n a book" << std::endl;

	// 03. ������C++�����������
	int b = 0, c = 0;
	//scanf_s("�����������ʼֵ��%d%d", &b, &c); // ��Ҫ���ַ�����scanf������
	scanf_s("%d,%d", &b, &c);
	printf_s("%d\n", (b + c));

	std::cin >> b >> c;
	std::cout << (b + c);
	std::cout << std::endl;

	return 0;
}
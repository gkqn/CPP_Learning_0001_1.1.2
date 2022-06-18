# include <iostream>
# include <cstdio>

int main() 
{	
	// 01. Hello World
	printf_s("HelloWorld!\n");
	std::cout << "Hello World!" << std::endl;
	std::cout << std::endl;

	// 02. 第二个C++程序：输出更多
	int a = 12;
	printf_s("I have %d dollars.\n", a);
	printf_s("I want buy: \n a book.\n");
	std::cout << "I have " << a << " dollars." << std::endl;
	std::cout << "I want buy: \n a book" << std::endl;

	// 03. 第三个C++程序：如何输入
	int b = 0, c = 0;
	//scanf_s("请输入变量初始值：%d%d", &b, &c); // 不要把字符放入scanf函数中
	scanf_s("%d,%d", &b, &c);
	printf_s("%d\n", (b + c));

	std::cin >> b >> c;
	std::cout << (b + c);
	std::cout << std::endl;

	return 0;
}
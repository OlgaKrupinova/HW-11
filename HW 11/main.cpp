#include <iostream>

int main() {
	setlocale(LC_ALL, "Russian");


	//������ 1 ������� ����� �� 2 �� 100

	std::cout << "������ 1\n";
	int counter;  
	for (int i = 2; i <= 100; i++) {
		counter = 0;
		for (int j = 1; j <= i; j++) {
			if (i % j == 0) {
				counter++;
			}
		}
		if (counter <= 2) {
			std::cout << i << std::endl;

		}
	}
	//������ 2 ���������

	std::cout << "������ 2\n\n";
	for (int i = 0; i < 7; i++) {
		for (int j = 0; j < 7; j++) {
			if (i == j || i == 6 - j || i == 3 || j == 3) {
				std::cout << " * ";
			}
			else {
				std::cout << "   ";
			}
		}
		std::cout << std::endl;
	}






	return 0;
}
#include "Class1.h"
#include<string>
void Print(std::vector<int> vector) {
	for (int i = 0; i < 10; i++) {
		std::cout << vector[i] << " ";
	}
}
void Insert_File() {
	std::ofstream File("text.txt");
	for (int i = 0; i < 10; i++) {
		File << rand() % 30 - 10<<std::endl;

	}


}
void Vector(int* vector) {
	std::ifstream File;
	File.open("text.txt");
	std::string str1;
	int i = 0;
	while (getline(File, str1)) {
		vector[i] = stoi(str1);
		i++;
	}
	
}
int Summa_Chisel(int* vector, int size) {
	int i = 0;
	int summ = 0;
	while (vector[i] > 0)i++;
	for (int j = i; j < size; j++) {
		summ += abs(vector[j]);
	}
	return summ;
}

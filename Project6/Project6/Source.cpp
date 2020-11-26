#include<iostream>
#include"Class1.h"
int main() {
	Insert_File();
	std::vector<int> vector(10);
	int *p =& vector[0];
	Vector(p);
	Print(vector);
	int x= Summa_Chisel(p, 10);
	std::cout <<std::endl<< x;
}
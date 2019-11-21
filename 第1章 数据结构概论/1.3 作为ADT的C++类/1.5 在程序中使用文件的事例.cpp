#include <iostream>
#include <fstream>
#include <stdlib.h>
using namespace std;

void main()
{
	ifstream inFile;															//inFile为输入流对象
	ofstream outFile;														//outFile为输出流对象
	outFile.open("my.dat", ios::out);								//建立输出文件"my.dat"
	char univ[] = "Tsinghua", name[10];
	int course = 2401, number;
	outFile << univ << endl;											//输出到"my.dat"
	outFile << course << endl;
	inFile.open("my.dat", ios::in);									//打开输入文件"my.dat"
	if (!inFile)
	{
		cerr << "不能打开my.dat" << endl;
		exit(-1);
	}
	char c;
	inFile >> name >> c >> number;
	outFile << "name:" << name << endl;
	outFile << "number:" << number << endl;
}
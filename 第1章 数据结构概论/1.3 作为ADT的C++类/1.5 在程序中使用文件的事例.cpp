#include <iostream>
#include <fstream>
#include <stdlib.h>
using namespace std;

void main()
{
	ifstream inFile;															//inFileΪ����������
	ofstream outFile;														//outFileΪ���������
	outFile.open("my.dat", ios::out);								//��������ļ�"my.dat"
	char univ[] = "Tsinghua", name[10];
	int course = 2401, number;
	outFile << univ << endl;											//�����"my.dat"
	outFile << course << endl;
	inFile.open("my.dat", ios::in);									//�������ļ�"my.dat"
	if (!inFile)
	{
		cerr << "���ܴ�my.dat" << endl;
		exit(-1);
	}
	char c;
	inFile >> name >> c >> number;
	outFile << "name:" << name << endl;
	outFile << "number:" << number << endl;
}
#ifndef SEQLIST_H
#define SEQLIST_H
#include <iostream>
#include <stdlib.h>
#include "linearList.h"
using namespace std;
const int defaultSize = 100;
template <class T>
class SeqList :public LinearList<T>
{
protected:
	T* data;																				//�������
	int maxSize;																			//�������ɱ��������
	int last;																					//��ǰ�Ѵ��������λ�ã���0��ʼ��
	void reSize(int newSize);														//�ı�data����ռ��С
public:
	SeqList(int sz = defaultSize);												//���캯��
	SeqList(SeqList<T>& L);														//���ƹ��캯��
	~SeqList() { delete[] data; }													//��������
	int Size() const { return maxSize; }										//������������ɱ������
	int Length() const { return last + 1; }									//�������
	int Search(T& x) const;															//����x�ڱ���λ�ã��������ر������
	int Locate(int i) const;															//��λ��i������������ر������
	bool getData(int i, T& x) const												//ȡ��i�������ֵ
	{
		if (i > 0 && i <= last + 1)
		{
			x = data[i - 1];
			return true;
		}
		else
			return false;
	}
	void setData(int i, T& x)														//��x�޸ĵ�i�������ֵ
	{
		if (i > 0 && i <= last + 1)
			data[i - 1] = x;
	}
	bool Insert(int i, T& x);															//����x�ڵ�i������֮��
	bool Remove(int i, T& x);														//ɾ����i�����ͨ��x���ر����ֵ
	bool IsEmpty()																		//�б�շ񣬿��򷵻�true;���򷵻�false
	{
		return (last == - 1) ? true : false;
	}
	bool IsFull()																			//�б��������򷵻�true;���򷵻�false
	{
		return (last == maxSize - 1) ? true : false;
	}
	void input();																			//����
	void output();																		//���
	SeqList<T> operator= (SeqList<T>& L);								//�����帳ֵ
};
#endif

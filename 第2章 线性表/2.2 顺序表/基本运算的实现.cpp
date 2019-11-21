/*��2.5�и��ֻ������ܵ�ʵ��*/

#include "2.5 ˳����������.h"

template<class T>
SeqList<T>::SeqList(int sz)
{
	//���캯����ͨ��ָ������sz��������ĳ���
	if (sz > 0)
	{
		maxSize = sz;															//�ñ��ʵ�ʳ���Ϊ��
		last = -1;																	
		data = new T[maxSize];											//����˳���洢����
		if(data==NULL)														//��̬����ʧ��
		{
			cerr << "�洢�������" << endl;
			exit(-1);
		}
	}
}

template<class T>
SeqList<T>::SeqList(SeqList<T>& L)
{
	//���ƹ��캯�����ò������и���������˳����ʼ���½���˳���
	maxSize = L.Size(); last = L.Length() - 1; T value;
	data = new T[maxSize];												//����˳���洢����
	if (data == NULL)															//��̬����ʧ��
	{
		cerr << "�洢�������" << endl; exit(-1);
	}
	for (int i=1;i<=last+1;i++)
	{
		L.getData(i, value); data[i - 1] = value;
	}
}

template<class T>
void SeqList<T>::reSize(int newSize)
{
	//˽�к���������˳���Ĵ洢����ռ��С���������Ԫ�ظ���ΪnewSize��
	if (newSize < 0)															//�������ĺ�����
	{
		cerr << "��Ч�������С" << endl; return;
	}
	if (newSize != maxSize)												//�޸�
	{
		T* newarray = new T[newSize];								//	����������
		if (newarray == NULL)
		{
			cerr << "�洢�������" << endl; exit(-1);
		}
		int n = last + 1;
		T* srcptr = data;														//Դ�����׵�ַ
		T* destptr = newarray;												//Ŀ�������׵�ַ
		while (n--) *destptr++ = *srcptr++;							//����
		delete[] data;															//ɾ��������
		data = newarray; maxSize = newSize;						//����������
	}
}

template<class T>
int SeqList<T>::Search(T& x) const
{
	//�����������ڱ���˳�����������ֵxƥ��ı���ҵ��������ظñ����ǵڼ���Ԫ�أ�����������0����ʾ����ʧ��
	for (int i = 0; i <= last; i++)
		if (data[i] == x) return i + 1;										//˳������
	return 0;																		//����ʧ��
}

template<class T>
int SeqList<T>::Locate(int i) const
{
	//��λ�������������ص�i��1<=i<=last+1���������λ�ã�����������0����ʾ��λʧ�ܡ�
	if (i >= 1 && i <= last + 1) return i;
	else return 0;
}

template<class T>
bool SeqList<T>::Insert(int i, T& x)
{
	//����Ԫ��x������е�i(0<=i<=last+1)������֮�󡣺������ز���ɹ�����Ϣ��������ɹ���
	//�򷵻�true�����򷵻�false��i=0������ģ�ʵ�����ǲ��뵽��1��Ԫ��λ��
	if (last == maxSize - 1) return false;								//���������۲���
	if (i<0 || i>last + 1) return false;									//����i���������ܲ���
	for (int j = last; j >= i; j--)											
		data[j + 1] = data[j];													//���κ��ƣ��ճ���i��λ��
	data[i] = x;																	//����
	last++;																			//���λ�ü�1
	return true;																	//����ɹ�
}

template<class T>
bool SeqList<T>::Remove(int i, T& x)
{
	//�ӱ���ɾ����i(1<=i<=last+1)�����ͨ�������Ͳ�������ɾ����Ԫ��ֵ����������ɾ��
	//�ɹ�����Ϣ����ɾ���ɹ��򷵻�true�����򷵻�false��
	if (last == -1) return false;											//��գ�����ɾ��
	if (i<1 || i>last + 1) return false;									//����i����������ɾ��
	x = data[i - 1];																//�汴ɾ����Ԫ��
	for (int j = i; j <= last; j++)								
		data[j - 1] = data[j];													//����ǰ�ƣ��
	last--;																			//���λ�ü�1
	return true;																	//ɾ���ɹ�
}

template<class T>
void SeqList<T>::input()
{
	//�ӱ�׼���루���̣�����������룬����˳���
	cout << "��ʼ����˳������������Ԫ�ظ�����";
	while (1)
	{
		cin >> last;																//����Ԫ�����λ��
		if (last <= maxSize - 1) break;
		cout << "��Ԫ�ظ����������󣬷�Χ���ܳ���" << maxSize - 1 << ":";
	}
	for (int i = 0; i <= last; i++)											//��������Ԫ��
	{
		cin >> data[i]; cout << i + 1 << endl;
	}
}

template<class T>
void SeqList<T>::output()
{
	//��˳���ȫ��Ԫ���������Ļ��
	cout << "˳���ǰԪ�����λ��Ϊ��" << last << endl;
	for (int i = 0; i <= las; i++)
		cout << "#" << i + 1 << ":" << data[i] << endl;
}

template<class T>
SeqList<T> SeqList<T>::operator= (SeqList<T>& L)
{
	//���ز�����˳������帳ֵ������ǰ���ô˲����Ķ���ΪL1�������β�L�ı����ΪL2����ʹ�÷�ʽΪL1=L2��
	maxSize = L.Size(); last = L.Length() - 1; T value;
	data = new T[maxSize];												//����˳���洢����
	if (data == NULL)															//��̬����ʧ��
	{
		cerr << "�洢�������" << endl; exit(-1);
	}
	for (int i = 1; i <= last + 1; i++)
	{
		L.getData(i, value); data[i - 1] = value;
	}
}
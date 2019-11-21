#ifndef LINEARLIST
#define LINEARLIST
template<class T>
class LinearList
{
public:
	LinearList();
	~LinearList();
	virtual int Size() const = 0;//���������
	virtual int Length() cosnt = 0;//���
	virtual int Search(T& x) const = 0;//�ڱ�����������ֵx
	virtual int Locate(int i) const = 0;//�ڱ��ж�λ��i�������ֵ
	virtual bool getData(int i, T& x) const = 0;//ȡ��i�������ֵ
	virtual void setData(int i, T& x) const = 0;//�޸ĵ�i�������ֵ
	virtual bool Insert(int i, T& x) const = 0;//�������
	virtual bool Remove(int i, T& x) const = 0;//ɾ������
	virtual bool IsEmpty() const = 0;//�б��
	virtual bool IsFull() const = 0;//�б���
	virtual void Sort() = 0;//����
	virtual input() = 0;//����
	virtual output() = 0;//���
	virtual LinearList<T> operator= (LinearList<T>& L) = 0;//����
};
#endif

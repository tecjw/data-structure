#ifndef LINEARLIST
#define LINEARLIST
template<class T>
class LinearList
{
public:
	LinearList();
	~LinearList();
	virtual int Size() const = 0;//求表最大体积
	virtual int Length() cosnt = 0;//求表长
	virtual int Search(T& x) const = 0;//在表中搜索给定值x
	virtual int Locate(int i) const = 0;//在表中定位第i个表项的值
	virtual bool getData(int i, T& x) const = 0;//取第i个表项的值
	virtual void setData(int i, T& x) const = 0;//修改第i个表项的值
	virtual bool Insert(int i, T& x) const = 0;//插入表项
	virtual bool Remove(int i, T& x) const = 0;//删除表项
	virtual bool IsEmpty() const = 0;//判表空
	virtual bool IsFull() const = 0;//判表满
	virtual void Sort() = 0;//排序
	virtual input() = 0;//输入
	virtual output() = 0;//输出
	virtual LinearList<T> operator= (LinearList<T>& L) = 0;//复制
};
#endif

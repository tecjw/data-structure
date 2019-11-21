ADT LinearList is
Objects: n(>=0)个原子表项的一个有限序列。每个表项的数据类型为T。
Function:
	create()											创建一个空线性表
	int Length()									计算表长度
	int search(T& x)							搜索函数：找x在表中位置，返回表项位置
	int Locate(int i)								定位函数：返回第i个表项在表中位置
	bool getData(int i,T& x)				取第i个表项的值
	void setData(int i,T& x)				用x修改第i个表项内容
	bool Insert(int i,T& x)					插入x在表中第i个表项之后，函数返回成功标志
	bool Remove(int i,T& x)				删除表中第i个表项，通过x返回删除表项的值，函数返回成功标志
	bool IsEmpty()								判断表空否，空则返回ture；否则返回false
	bool IsFull()									判断表满否，满则返回true；否则返回false
	void CopyList(List<T>& L)			将表L复制到当前的表中
	void Sort()									对当前的表排序
end LinearList
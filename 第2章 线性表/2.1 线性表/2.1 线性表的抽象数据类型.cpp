ADT LinearList is
Objects: n(>=0)��ԭ�ӱ����һ���������С�ÿ���������������ΪT��
Function:
	create()											����һ�������Ա�
	int Length()									�������
	int search(T& x)							������������x�ڱ���λ�ã����ر���λ��
	int Locate(int i)								��λ���������ص�i�������ڱ���λ��
	bool getData(int i,T& x)				ȡ��i�������ֵ
	void setData(int i,T& x)				��x�޸ĵ�i����������
	bool Insert(int i,T& x)					����x�ڱ��е�i������֮�󣬺������سɹ���־
	bool Remove(int i,T& x)				ɾ�����е�i�����ͨ��x����ɾ�������ֵ���������سɹ���־
	bool IsEmpty()								�жϱ�շ񣬿��򷵻�ture�����򷵻�false
	bool IsFull()									�жϱ��������򷵻�true�����򷵻�false
	void CopyList(List<T>& L)			����L���Ƶ���ǰ�ı���
	void Sort()									�Ե�ǰ�ı�����
end LinearList
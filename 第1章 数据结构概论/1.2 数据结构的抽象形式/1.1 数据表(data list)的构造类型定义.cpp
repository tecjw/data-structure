#define ListSize 100						//��ռ�Ĵ�С���ɸ���ʵ���������
typedef int DataType;					//����Ԫ�ص��������ͣ��ٶ�Ϊint
typedef struct {
	DataType data[ListSize];			//��ű�Ԫ�ص�����
	int length;								//��ǰ�ı���
} DataList;
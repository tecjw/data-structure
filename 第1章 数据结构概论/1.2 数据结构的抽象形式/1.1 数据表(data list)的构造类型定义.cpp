#define ListSize 100						//表空间的大小，可根据实际情况而定
typedef int DataType;					//表中元素的数据类型，假定为int
typedef struct {
	DataType data[ListSize];			//存放表元素的向量
	int length;								//当前的表长度
} DataList;
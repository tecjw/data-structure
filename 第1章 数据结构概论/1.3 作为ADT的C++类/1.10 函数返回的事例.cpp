#include <iostream>
using namespace std;

class Temperature
{
private:
	float highTemp, lowTemp;												//���ݳ�Ա
public:
	Temperature(int hi, int lo)												//���캯��
	{
		highTemp = hi;
		lowTemp = lo;
	}
	void UpdateTemp(float temp);											//��ֵ����
	float GetHighTemp() const;												//��ֵ����
	float GetLowTemp() const;												//��ֵ����
};

void Temperature::UpdateTemp(float temp)
{
	if (temp > highTemp) highTemp = temp;
	if (temp < lowTemp)lowTemp = temp;
}
float Temperature::GetLowTemp() const
{
	return lowTemp;
}
float Temperature::GetHighTemp() const
{
	return highTemp;
}
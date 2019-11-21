#include <iostream>
using namespace std;

class Temperature
{
private:
	float highTemp, lowTemp;												//数据成员
public:
	Temperature(int hi, int lo)												//构造函数
	{
		highTemp = hi;
		lowTemp = lo;
	}
	void UpdateTemp(float temp);											//传值返回
	float GetHighTemp() const;												//常值返回
	float GetLowTemp() const;												//常值返回
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
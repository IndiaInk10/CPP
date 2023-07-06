#include "../std_lib_facilities.h"

int area(int length, int width)
{
	if (length <= 0 || width <= 0)  error("����� �ƴ� ����");
	return length * width;
}
int framed_area(int x, int y)
{
	constexpr int frame_width = 2;
	if (x - frame_width <= 0 || y - frame_width <= 0)
		error("framed_area()�� ���� ������ ����� �ƴ� ���ڷ� area() ȣ��");

	return area(x - frame_width, y - frame_width);
}

int f(int x, int y, int z)
{
	int area1 = area(x, y);
	if (area1 <= 0)  error("������ �ƴ� ����");
	int area2 = framed_area(1, z);
	int area3 = framed_area(y, z);
	double ratio = double(area1) / area3; // -inf

	cout << "area1 : " << area1 << '\n';
	cout << "area2 : " << area2 << '\n';
	cout << "area3 : " << area3 << '\n';
	cout << "ratio : " << ratio << '\n';

	return 0;
}

int main()
{
	int x, y, z;
	cin >> x >> y >> z;
	return f(x, y, z);
}
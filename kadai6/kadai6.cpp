

#include <iostream>
using namespace std;

class Box
{
public:
	float width, height, depth;
	Box(float width, float height, float depth)
	{
		this->width = width;
		this->height = height;
		this->depth = depth;
	}
	float GetSurface()
	{
		return (width * height + depth * height + width * depth) * 2;
	}
    float GetVolume()
	{
		return width * height * depth;
	}

};
int main()
{
	float width, height, depth;
	cout << "幅";
	cin >> width;
	cout << "高さ";
	cin >> height;
	cout << "奥行";
	cin >> depth;
	Box* box = new Box(width, height, depth);
	cout << "箱の表面積" << box->GetSurface() << "箱の体積 " << box->GetVolume();
	delete box;
}
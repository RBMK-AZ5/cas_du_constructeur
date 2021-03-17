#include<iostream>
using namespace std;
class point
{
private:
	int x;
	int y;
public:
	point(int, int);
	~point();
	point(point&);
};
class cfpoint :public point
{
private:
	char color;
public:
	cfpoint(int, int, char);
	~cfpoint();
	cfpoint(cfpoint&);
};
point::point(int abs, int ord)
{
	x = abs;
	y = ord;
	cout << "+CP+ valeur de x est de y : " << x << " " << y << endl;
}
point::~point()
{
	cout << "-DP-valeur de x est de y : " << x << " " << y << endl;
}
point::point(point& p)
{
	x = p.x;
	y = p.y;
	cout << "+CRP+ valeur de x est de y : " << x << " " << y << endl;
}
cfpoint::cfpoint(int abs, int ord, char c) : point(abs, ord)
{
	color = c;
	cout << "++CC++ valeur de color : " << color << endl;
}
cfpoint::~cfpoint()
{
	cout << "--DC-- valeur de color : " << color << endl;
}
cfpoint::cfpoint(cfpoint& p) :point(p)
{
	color = p.color;
	cout << "++CRC++ valeur de color" << color << endl;
}
void fonction(cfpoint);
int main()
{
	point a(7, 9);
	cfpoint b(9, 2, 'd');
	fonction(b);
}
void fonction(cfpoint b)
{
	cout << "Appel de la foncion ";
}
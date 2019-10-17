#include <iostream>
//#include <cmath>
#include <cstdlib>
#include "CPoint.h"

//using namespace std;

//Exemple de programme en C ++
//POO C++
//Class (données et méthodes)


int main()
{
	CPoint ptMonPoint;

	ptMonPoint.getX();
	ptMonPoint.getY();

	ptMonPoint.setX(0);
	ptMonPoint.setY(0);

	std::cout << "X : " << ptMonPoint.getX() << std::endl;
	std::cout << "Y : " << ptMonPoint.getY() << std::endl;

	system("pause");
	return 0;
}
#include "CPoint.h"

int CPoint::getX()
{
	return nX;
}

int CPoint::getY()
{
	return nY;
}

void CPoint::setX(int nX)
{
	//this veux dire prendre son objet actuel
	this->nX = nX;
}

void CPoint::setY(int nY)
{
	this->nY = nY;
}

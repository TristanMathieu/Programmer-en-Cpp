#include "CPoint.h"
#include <stdio.h>
#include <stdlib.h>

int CPoint::getX()
{
	return nX;
}

int CPoint::getY()
{
	return nY;
}

int CPoint::getpX()
{
	return *pnX;
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

void CPoint::init(int nX, int nY)
{
	this->nX = nX;
	this->nY = nY;
}

CPoint::CPoint()
{
	this->nX = 0;
	this->nY = 0;

	this->pnX = new int;
	*pnX = 90;
}

CPoint::CPoint(int nX, int nY)
{
	this->nX = nX;
	this->nY = nY;
}

CPoint::~CPoint()
{
	free(pnX);
	//delete pour entieremet supprimé au lieu de free
}

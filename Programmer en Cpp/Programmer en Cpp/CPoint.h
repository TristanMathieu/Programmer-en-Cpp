#pragma once
//Point dans un plan
class CPoint
{
private : 
	//Par d�faut votre variable sera priv�e
	//Donn�es membres de la classe
	int nX;
	int nY;
	
public :
	//Prototype ou d�clarations
	int getX();
	int getY();

	void setX(int nX);
	void setY(int nY);
};


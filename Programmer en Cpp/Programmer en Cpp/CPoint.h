#pragma once
//Point dans un plan
class CPoint
{
private : 
	//Par défaut votre variable sera privée
	//Données membres de la classe
	int nX;
	int nY;
	
public :
	//Prototype ou déclarations
	int getX();
	int getY();

	void setX(int nX);
	void setY(int nY);
};


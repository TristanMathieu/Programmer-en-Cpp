#pragma once
//Point dans un plan
class CPoint
{
private : 
	//Par d�faut votre variable sera priv�e
	//Donn�es membres de la classe
	int nX;
	int nY;
	
	int *pnX;

public :
	//Prototype ou d�clarations
	int getX();
	int getY();
	int getpX();

	//Mutateurs
	void setX(int nX);
	void setY(int nY);
	
	//Init
	void init(int nX, int nY);

	//Constructeur sans parametres
	CPoint();
	CPoint(int nX, int nY);

	//Destructeur
	~CPoint();


};


#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

//Exemple de programme en C ++



int main()
{
	int i = 0;
	float x = 0.0;
	float racx = 0.0;

	const int NFOIS = 5;

	cout << "Je vais vous calculer " << NFOIS << " racines carrees\n";

	for (i = 0; i < NFOIS; i++) {

		cout << "Donnez un nombre : ";
		cin >> x;


		if (x < 0.0)

			cout << "Le nombre	" << x << " ne possede pas de racine carree\n";
		else {
			racx = sqrtf(x);
			cout << "Le nombre " << x << "a  pour racine carree" << racx << endl;
		}
	}

	cout << "Travail Termine" << endl;

	system("pause");

	return 0;
}
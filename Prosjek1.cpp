#include <iostream>
using namespace std;

int main ()
{
	int a;
    unos: cout << "Molimo unesite uspjeh" << endl;
     cin >> a;
    
   if (a<1||a>5)
{
	cout << "Došlo je do greške. Molimo ponovite unos" << endl;
	goto unos;
}
    else
{
cout << "Vaš uspjeh je: ";
switch (a)
{
	case 1:
		cout << "nedovoljan." << endl;
		break;
	case 2:
	    cout << "dovoljan."<< endl;
		break;
	case 3:
	    cout << "dobar." << endl;
		break;
	case 4:
	    cout << "vrlo dobar."<< endl;
		break;
	case 5:
	    cout << "odlican." << endl;
		break;	
}
}
return 0;
}

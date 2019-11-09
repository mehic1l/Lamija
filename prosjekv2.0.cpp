/* Ovaj program omogucava korisniku da unese broj ocjena 1-5, kao i broj predmeta, i kao 
finalni rezultat ispisuje prosjek ocjena i uspjeh (s tim sto racuna 4.5 kao odlican uspjeh).
U slucaju da korisnik ima zakljucenu jedinicu, program mu javlja da nije prosao, a u slucaju
da se broj ocjena ne podudara s brojem predmeta, program to shvata kao gresku i korisnik treba 
ponoviti unos.*/
#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
	float bp,bc,bt,bd,bj,brp,brpr,pr,nz;
	int prz;
	
	unos: cout << "Unesite broj predmeta: ";
	cin >> brp;
	
	cout << "Unesite broj petica: ";
	cin >> bp;
	
	cout << "Unesite broj cetvorki: ";
	cin >> bc;
	
	cout << "Unesite broj trojki: ";
	cin >> bt;
	
	cout << "Unesite broj dvojki: ";
	cin >> bd;
	
	cout << "Unesite broj jedinica: ";
    cin >> bj;
    
    nz=bp+bc+bt+bd;
	brpr=(bp*5)+(bc*4)+(bt*3)+(bd*2);
    pr=brpr/brp;
    
    if (nz==brp)
    {
	   if (bj>0)
        {
    	cout << "Zao nam je ali niste prosli.";
    	return 0;
      	} 
      	else
         	{
         	    cout << "Vas prosjek ocjena je: " << pr << endl;
         	    prz=round(pr);
         	    
                cout << "Vaš uspjeh je: ";
                   switch (prz)
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
	}
	else
	{
		cout << "Doslo je do greske. Molimo ponovite unos." << endl;
		goto unos;
	}
	return 0;
}	


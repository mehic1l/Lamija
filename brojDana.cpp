#include <iostream>
using namespace std;

int brojDana(int d, int m, int g)
{
	int broj = 0;
	for(int i = 1900; i <=g; i++){
		if(i % 4 == 0){
			broj += 366;
		}
		else{
			broj += 365;
		}
	}
	
	for( int i = 1 ; i < m ; i++){
		switch(i){
			case 1: 
				broj += 31;
				break;
			case 2:
				if(g % 4 == 0)
					broj += 29;
				else
					broj += 28;
				break;
			case 3:
				broj += 31;
			    break;
			case 4:
				broj += 30;
			    break;
			case 5:
				broj += 31;
			    break;
			case 6:
				broj += 30;
			    break;
			case 7:
				broj += 31;
			    break;
			case 8:
				broj += 31;
			    break;
			case 9:
				broj += 30;
			    break;
			case 10: 
				broj += 31;
			    break;
			case 11: 
				broj += 30;
			    break;
		}
	}
		broj += d;
	return broj;
}

int main(){
int dd,mm,yy,d,m,y;
	cout<<"***********************************************\n";
	cout<<"*******   BROJ DANA IZMEDJU DVA DATUMA  *******\n";
    cout<<"***********************************************\n";

	cout<<"Unesite pocetni datum: "<< endl;
    cin >> dd >> mm >> yy;
	cout << "Unesite krajnji datum: "<< endl;
	cin >> d >> m >> y;
	cout<<"\nBroj dana izmedju navedenih datuma iznosi: ";
	cout<<brojDana(d,m,y) - brojDana(dd,mm,yy)<<"\n";
	
	return 0;
}

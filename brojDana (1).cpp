#include <iostream>
using namespace std;
//funkcija za vracanje rednog broja dana, pocevsi od 1.1.1900
int brojDana(int d, int m, int g){
	//varijabla broj predstavlja redni broj dana od 1.1.1900, na nju cemo dodavati sve dane
	//u programiranju, za razliku od matematike, '=' ne znaci jednako, nego 'postaje'  broj = broj + 1 (ili krace broj += 1); 
	//cita se kao "broj postaje broj + 1";
	int broj = 0;
	
	//dio funkcije koji dodaje dane za pune godine
	for(int i = 1900; i <=g; i++){
		if(i % 4 == 0){
			broj += 366;
		}
		else{
			broj += 365;
		}
	}
	
	//nakon ovog dijela imamo broj dana za pune godine
	//potrebno je dodijeliti dane preostale, koji ne pune godinu
	//npr 13.9.2019 - dani do 13.9. nece napuniti godinu to jest <365
	
	//dodajmo pune mjesece 
	for( int i = 1 ; i < m ; i++){
		// i < m -> broj i ce ici do prethodnog mjeseca, npr 1.11.2019 imamo 10 punih mjeseci, i par dana u novembru
		switch(i){
			case 1: 
				broj += 31;
				break;
			case 2:
				//moramo provjeriti da li je prestupna trenutna godina (sve ovo smo mogli ranije dodijeliti nekim varijablama, pa ovdje samo dodavati
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
	
	//još je preostalo da dodamo broj dana koji ne pune mjesec
	
		broj += d;
	
	//na kraju naša funkcija mora imati povratni tip	
	return broj;
}

/*
NAPOMENA: zadatak smo mogli uraditi i bez funkcije u glavnom programu, s tim što bi to pravilo veliki kod, i stvorilo konfuziju
Zadatak se mogao riješiti i bez for petlji, da prvo oduzmemo godine, pa da meðu njima provjerimo koliko je prestupnih (dijeljenjem), pa onda dodavanje tog broja

NAPOMENA 2.: Svaki zadatak se može uraditi na beskonacno nacina, razlikuju se po optimalnosti
*/
int main(){
	
	//provjera u glavnom programu
	cout<<"***********************************************\n";
	cout<<"*******   BROJ DANA IZMEDJU DVA DATUMA  *******\n";
    cout<<"***********************************************\n";

	
	cout<<"\nBroj dana izmedju 1.1.1991. i 1.11.2019 je : ";
	cout<<brojDana(1,11,2019) - brojDana(1,1,1991)<<"\n";
	
	return 0;
}

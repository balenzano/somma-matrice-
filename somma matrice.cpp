#include<iostream>
using namespace std;
int main()

{
	const int RIGHE=100;
	const int COLONNE=100;
	int i;
	int j;
	int matrice[RIGHE][COLONNE];
	int somma=0;
	int n=2;
	int m=3;
	cout<<"caricamento matrice";
	cout<<endl;
	
	for(i=0;i<n;i++){
for (j=0;j<m;j++){
	cout<<"inserisci il numero nella matrice"<<i<<","<<j<<":";
    cin>>matrice[i][j];
}
	}
	
	cout<<endl<<endl;
	 for(i=0;i<n;i++){
for (j=0;j<m;j++){
	
somma=somma+matrice[i][j];
}
	}
	 cout<<"la somma e "<<somma<<endl;
	 
	
	return 0;
}

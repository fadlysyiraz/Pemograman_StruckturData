#include <iostream>
using namespace std;

int main(){
	
	int v, r;
	char lagi;
	
	atas :
//	clrscr();
	cout<<"\nMasukan Bilangan = ";
	cin>> v;
	
	r = v % 2;
	
	printf("Nilai %d %% 2 adalah = %d",v,r);
	printf("\n\nIngin Hitung Lagi [Y/T] : ");
	
	lagi = getchar();
	
	if (lagi == 'Y' || lagi == 'y')
	goto  atas;
	
	getchar();
	
}

#include <iostream>
using namespace std;

int main(){
	
		int x = 3, y = 2, z = 1, bil;
//	clrsrc();
	printf("BIL-A | BIL-B | BIL-C\n");
	printf("----------------------");
	
	for(bil = 1; bil <= 10; ++bil){
		x+=y, y+=z, z+=2;
		
		printf("\n%d\t|%d\t|%d", x,y,z);
		if(z == 13){
			break;
		}
	}
	
}

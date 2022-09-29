#include <iostream>
using namespace std;
int main(){
	int angka;
	int n;
	
	cin>> angka;
	cin>> n;
	
	for(int x = angka ;x <= n; x += angka){
	cout << x << " ";
	
	}
	return 0;

}

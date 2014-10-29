#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;
int main (int argc, char** argv)
{
	srand(time(NULL));
	int max_dots=atoi(argv[1]);
	int circle_dots=0;
	double x, y;
	double y_prime;
	for(int i=0; i<max_dots; i++){
		x=rand()%1000/1000.0;
		y=rand()%1000/1000.0;
		y_prime=sqrt(1-(x*x));
		//cout << x << endl << y << endl << y_prime << endl;
		if(y < y_prime) {circle_dots++;}
	}
	cout << ((double)circle_dots/max_dots) * 4  << endl;
	//cout << circle_dots << endl << max_dots << endl;

	return 0;
}

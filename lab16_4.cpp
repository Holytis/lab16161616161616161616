#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int &,int &,int &,int &);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(a,b,c,d);
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

void shuffle(int &a,int &b,int &c,int &d)
{
	int k[4] ;
	int p[] = {a,b,c,d} ;
	for(int i=0;i<4;i++)
	{
		k[i] = rand()%4 ;
		for(int j=0;j<i;j++)
		{
			if(k[i] == k[j]){
			i-- ;
			break;
			}
		}

	}
	a = p[k[0]] ;
	b = p[k[1]] ;
	c = p[k[2]] ;
	d = p[k[3]] ;
	
}

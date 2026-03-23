#include <iostream>
int ascii_to_int (char *a){
return a[0]-0x30;
}
int main (int argc, char *argv[])
{
	int fahr,celcius;
	int lower,upper,step;
	lower = ascii_to_int(argv[1]);
	upper = ascii_to_int(argv[2]);
	step = ascii_to_int(argv[3]);

	fahr=lower;
	while (fahr <=upper){
	celcius = 5* (fahr - 32)/9;
	std::cout<<"fahr: "<<fahr<<"\tcelcius:"<<celcius<<std::endl;
	fahr=fahr+step;
	}
return 0;
}

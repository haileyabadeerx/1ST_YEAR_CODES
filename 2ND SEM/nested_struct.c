#include <stdio.h>

struct name{
	char fname[80];
	char mname[80];
	char sname[80];
};

struct birthday{
	int day;
	int mo;
	int year;
};

struct person
{
	struct name n;
	struct birthday bday;
	float allowance;
};

struct person stud = {{"Julia","Tajodloy", "Alpornon"},{3,7,2003}, 1000};


int main (int argc, char * argv[]){
		printf("%s %s %s \n%d %d %d \n%.2f", stud.n.fname, stud.n.mname, stud.n.sname, stud.bday.day, stud.bday.mo, stud.bday.year, stud.allowance);
	
	
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

struct employee {
	char name[80];
	int id;
	float salary;;
};

struct pen{
	char color[80];
	char brand[80];
	float price;
};

struct employee emp = {"Aira", 123, 5000};
struct pen bp[3] = {{"red", "HBW", 12}, {"black","Dong-A", 20}, {"blue","FiverCastle",15}};

void display(struct pen *a);

int main (int argc, char * argv[]){
	
	display(bp);
	
	return 0;
}

void display(struct pen *a){
	for (int i = 0; i < 3; i++){
	printf("%s %s %.2f\n", a[i].color, a[i].brand, a[i].price);
	}	
}

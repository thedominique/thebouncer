#include <stdio.h>
#include "exceptions.h"
#include "messages.h"
#include "calcutaltion.h"

#define CAPASITY 10
#define GUESTLIST 5

void howmany(int *newarrivals){
	printf("how many are you? :");
	scanf("%d", newarrivals); 
}

void checklist(int *list, int *na){
	if(*list>=GUESTLIST){
		stdmessage();
	}
	else{
		listfitcalc(na, list);
	}
}

void entertheparty(int *people, int *list, int *na){
	printf("hello welcome to the club ");
	if (*people<CAPASITY){
		howmany(na);
		fitinclubcalc(people, na, list);
	}
	else if(*people>=CAPASITY){
		checklist(list, na);
	}
}

int main(int argc, char **argv)
{	int people=0, list=0, newarrivals=0, i=0;
	for(i=0;i<5;i++){
		entertheparty(&people, &list, &newarrivals);
		
	}
	return 0;
}

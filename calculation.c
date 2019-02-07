#include "calculation.h"

void listfitcalc(int *na, int *list){
	int total= (*na)+(*list);
	if(total>=GUESTLIST){
		stdmessage();
		return;
	}
	else{
		printf("Get in line bitch\n");
		*list=total;
	}
	
///////////////////////////////////////////////////////////////////////////

	void fitinclubcalc(int *people, int *na, int *list){
	int total=*people;
	total=(*na)+(*people);

	if(total>=CAPASITY){
		checklist(list, na);
		return;
	}
	else{
		*people = total;
		luckynight();
	}
}

	
}
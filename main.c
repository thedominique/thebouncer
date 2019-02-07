#include <stdio.h>

#define CAPASITY 10
#define GUESTLIST 5

void stdmessage(){
	printf("GTFO fkn looser\n");
}

void luckynight(){
	char ans;
	printf("You know what time it is? (n)\n");
	scanf( " %c",&ans);
	printf("Time to get fucked up, welcome to the club B^) \n");
}

void howmany(int *newarrivals){
	printf("how many are you? :");
	scanf("%d", newarrivals); 
}

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
	
}

void checklist(int *list, int *na){
	if(*list>=GUESTLIST){
		stdmessage();
	}
	else{
		listfitcalc(na, list);
	}
}

void fitinclubcalc(int *people, int *na, int *list){
	int total=*people;
	total=(*na)+(*people);
	printf("Total = %d\n", total);
	printf("People = %d\n", *people);
	printf("NA = %d\n", *na);
	printf("List = %d\n", *list);

	if(total>=CAPASITY){
		checklist(list, na);
		return;
	}
	else{
		*people = total;
		luckynight();
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
{	int people=0, list=0, newarrivals=0, time=0, i=0;
	//whatisthetime(&time);
	for(i=0;i<5;i++){
		entertheparty(&people, &list, &newarrivals);
	}
	
	
	
	return 0;
}

#include <stdio.h>
#include "exceptions.h"

int ruaGirl(){
	char ans='n';
	printf("Are you a member of the female sex? ");
	scanf(" %c", &ans);
	if(ans=='y'){
		return 1;
	}
	else{
		return 0;
	}
}
int ruRich(){
	char ans='n';
	printf("Are you a trust fund kid? ");
	scanf(" %c", &ans);
	if(ans=='y'){
		return 1;
	}
	else{
		return 0;
	}
}

void exeptions(){
	int woman=ruaGirl();
	int cashcow=ruRich();
	if(woman ==1 || cashcow==1){
		luckynight();
	}
	
}
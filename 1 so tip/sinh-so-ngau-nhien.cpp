#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int khoitao = 0;  
int ngaunhien(){
	if(khoitao == 0){
		srand(time(0));
		khoitao = 1; 
	}
	return 1+rand()%100;
}

int main(){
	for(int i = 0; i < 20; i++){
		printf("%d ", ngaunhien());
	}
} 

////////////////////////////////////
// CACH 2:

//int ngaunhien(){
//	return 1+rand()%100;
//}
//
//int main(){
//	srand(time(0));
//	for(int i = 0; i < 20; i++){
//		printf("%d ", ngaunhien());
//	}
//} 



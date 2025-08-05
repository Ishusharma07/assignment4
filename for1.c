#include <stdio.h>
void main(){
	int n ;
	printf("enter the value");
	scanf("%d" , &n);
	
	for(int i = 1 ; i<=n; i++){
		int sum = 0;
		int temp = i;
		
		while(temp != 0){
			int r =  temp  % 10;
			sum = sum+ r* r * r;
			temp = temp / 10; 
		}
		
		if(sum == i){
			printf("amstrong value %d\n" , i);
		}
		
	} 
	
	
	
}










	







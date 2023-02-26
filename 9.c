#include<stdio.h>
int main(){
	double sum = 0;
	double i = 1,j = 2;
	for (int count = 1;count <= 20;count++){
		sum += (i/j);
		printf("%.2f/%.2f\n",i,j);
		double m = i + j;
		i = j;
		j = m;
	}
	printf("%.9f\n" , sum);
	return 0;
}

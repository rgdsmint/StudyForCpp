#include <stdio.h>
int main() {
	
    int angle[10][10];
    for(int i = 0; i<= 9; i++) {
		for (int j = 0; j <= i; j++) {
			if(j == 0 || j == i || i ==1) {
				angle[i][j] = 1;
			} else {
				angle[i][j] = angle[i-1][j] + angle[i-1][j-1];
			}
		}
	}
	
	for(int i = 0; i<= 9; i++) {
		for (int j = 0; j <= i; j++) {
			printf("%d\t",angle[i][j]);
		}
		printf("\n");
	}
    return 0;
}

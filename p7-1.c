#include <stdio.h>
#include <string.h>

int main() {
	int n;
	scanf("%d", &n);

	while(n--) {
		char input[80];
		scanf("%s", input);
		if(strlen(input) < 6) {
			printf("Your password is tai duan le.\n");
			continue;
		} else {
			int hasNum = 0;
			int hasAbc = 0;
			int flag = 1;
			for(int i = 0; i < strlen(input); i++) {
				if(input[i] >= '0' && input[i] <= '9') {
					hasNum = 1;
				} else if((input[i] >= 'a' && input[i] <= 'z') || (input[i] >= 'A' && input[i] <= 'Z')) {
					hasAbc = 1;
				} else if(input[i]!='.') {
					printf("Your password is tai luan le.\n");
					flag = 0;
					break;
				}
			}
			if(!flag) {
				continue;
			}
			if(hasNum && hasAbc) {
				printf("Your password is wan mei.\n");
			} else if(hasNum) {
				printf("Your password needs zi mu.\n");
			} else {
				printf("Your password needs shu zi.\n");
			}
		}
	}
}

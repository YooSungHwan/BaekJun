#include <stdio.h>
#include <string.h>
#define MAX_SIZE 51


int main()
{
	char str[MAX_SIZE];
	int val;

	scanf_s("%d", &val);

	for (int i = 0; i < val; i++) {
		int balance = 0;
		scanf_s("%s", &str, 51);

		for (int j = 0; str[j] != '\0'; j++) {
			if (str[j] == '(') {
				balance++;
			}
			else {
				balance--;
			}
			if (balance < 0) {
				break;
			}
		}
		if (balance == 0) {
			printf("YES\n");
		}
		else {
			printf("NO\n");
		}
	}
	return 0;
}
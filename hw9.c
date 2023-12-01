#include <stdio.h>
#include <ctype.h>

int main() {
	char str[100];
	printf("Input> ");
	fgets(str, sizeof(str), stdin);

	for (int i = 0; str[i]; i++) {
		char ch = str[i];
		if (islower(ch)) str[i] = toupper(ch);
		else if (isupper(ch)) str[i] = tolower(ch);
	}

	printf("Output> %s", str);
	return 0;
}

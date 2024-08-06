#include <stdio.h>
#include <string.h>
int main(void) {
	//            0123456789
	char str[] = "unIVERsiTy";
	int i;
	void my_str_display(const char *);
	int my_str_strlen(const char *);
	char *my_str_strupr(char *);
	char *my_str_strlwr(char *);
	int my_str_strcmp(const char *, const char *);
	
	printf("\nThe length of the string is %d...", my_str_strlen(str));
	my_str_display(str);
	printf("\n\nThe string in the upper case is %s...", my_str_strupr(str));
	printf("\n\nThe string in the upper case is %s...", my_str_strlwr(str));
	my_str_display(str);
	printf("\nOutcome of comparing two strings is %d...", my_str_strcmp("amit", "amit"));  // 0
	printf("\nOutcome of comparing two strings is %d...", my_str_strcmp("amitava", "amit"));  // 1
	printf("\nOutcome of comparing two strings is %d...", my_str_strcmp("amit", "amitava"));  // -1
	printf("\nOutcome of comparing two strings is %d...", my_str_strcmp("Amit", "amit"));  // -1
	printf("\nOutcome of comparing two strings is %d...", my_str_strcmp("amit", "kamal"));  // -1
	printf("\nOutcome of comparing two strings is %d...", my_str_strcmp("X", "kamal"));  // -1
	printf("\n-------------------------------------------------------");
	printf("\nOutcome of comparing two strings is %d...", strcmp("Amit", "aMIt"));  // -1
	printf("\nOutcome of comparing two strings is %d...", strcmpi("Amit", "aMIt"));  // -1
	
	printf("\n\nEnd of the program...");
}

int my_str_strcmp(const char *st1, const char *st2) {
	int diff, i = -1;
	while (i == -1 || (*(st1 + i) != '\x0' && *(st2 + i) != '\x0')) {
		i++;
		diff = *(st1 + i) - *(st2 + i);
		if (diff != 0) break;
	}
	if (diff == 0) return 0;
	return (diff < 0)? -1: 1;
}

/*
ASCII Codes: American Standard Code for Information Interchange Codes
8 bit codes: ranging from 0 to 255 (2^8 - 1)
Two categories:
	1. Standard ASCII Codes (Printable): 0 to 127
	2. Extended ASCII Codes (Non-Printable): 128 to 255 (Used as control characters)
	0 -> NULL, Tab -> 8, Bach Space -> 9, Space -> 32, Enter -> 13 (Carriage Return (CR))
	A -> 65, B -> 66, ..., Z -> 90
	a -> 97, b -> 98, ..., z -> 122
	0 -> 48, 1 -> 49, ..., 9 -> 57
*/
char * my_str_strlwr(char *st) {
	int i = 0;
	char ch;
	while (*(st + i) != '\x0') {
		ch = *(st + i);
		if (ch >= 'A' && ch <= 'Z') {
			*(st + i) = ch + 32;
		}
		i++;
	}
	return st;
}
char * my_str_strupr(char *st) {
	int i = 0;
	char ch;
	while (*(st + i) != '\x0') {
		ch = *(st + i);
		if (ch >= 'a' && ch <= 'z') {
			*(st + i) = ch - 32;
		}
		i++;
	}
	return st;
}
int my_str_strlen(const char *st) {
	int i = 0;
	while (*(st + i) != '\x0') {
		i++;
	}
	return i;
}
void my_str_display(const char *st) {
	int i;
	// printf("\nThe string is %s...", st);
	
	printf("\nThe string is ");
	i = 0;
	while (*(st + i) != '\x0') {
		printf("%c", *(st + i));
		i++;
	}
	printf("...");
}

int my_str_strcmpi(char *st1, char *st2) {
	int diff, i = -1;
	printf("\n%s and %s...", st1, st2);
	while (i == -1 || (*(st1 + i) != '\x0' && *(st2 + i) != '\x0')) {
		i++;
		diff = toupper(*(st1 + i)) - toupper(*(st2 + i));
		if (diff != 0) break;
	}
	if (diff == 0) return 0;
	return (diff < 0)? -1: 1;
}
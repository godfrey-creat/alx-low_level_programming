#include <stdio.h>
/**
 * premain - func that runs before main
 * Return: nothing
 */
void __attribute__((constructor))premain()
{
	printf("You're beat! and yet, you must allow\n");
	printf("I bore my house upon my back!\n");
}

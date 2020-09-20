/*
 ============================================================================
 Name        : 000_HelloWorld.c
 Author      : Carlos Martinez
 Version     : 1.0
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void printText(char* text);

int main(void)
{
	printText("!!!Hello World!!!"); /* prints !!!Hello World!!! */
	return EXIT_SUCCESS;
}

void printText(char* text)
{
	puts(text);
}

/*
 *       Author    |    Date     |                 Description                   |
 *     Carlos Mtz  | 19/Sep/2020 | Initial Version                               |
 *     Carlos Mtz  | 19/Sep/2020 | Change code format                            |
 *     Carlos Mtz  | 19/Sep/2020 | Added printText function                      |
 */

/*
 * main.c
 *
 * Copyright (C) 2025.12.30 TOP WAYE topwaye@hotmail.com
 * 
 * distributed computer front-end and back-end model to show what Vue is
 */

#include <stdio.h>

/* Spring Boot */
int back_end ( int n )
{
	return n;
}

/* Vue */
int front_end ( int n )
{
	printf ( "%d\n", n );
	return n;
}

/* Html */
int main ( )
{
	/* <html> */
	int a, b;

	/* <javascript> */
	a = front_end ( back_end ( 0 ) );
	b = front_end ( back_end ( 1 ) );

	return 1;
}

/*
 * main.c
 *
 * Copyright (C) 2025.12.31 TOP WAYE topwaye@hotmail.com
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
	return n;
}

/* <div> a </div> */
void component ( int a )
{
	printf ( "%d\n", a );
}

/* Html */
int main ( )
{
	int a;

	/* <javascript> */
	a = front_end ( back_end ( 0 ) );

	/* <div> a </div> */
	component ( a );

	return 1;
}

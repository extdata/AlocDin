#include <iostream>
#include <cstdlib>
#include <ctime>

using std::cout;
using std::cin;

void fillquestions( int *, int  );
void checkquestions( int *, int * );
void printquestions( int *, int * );

int main()
{
	srand(( int ) time( 0 ));
	int Nquestions = { 10, 50, 100 };
	int *templatePtr = 0;
	int *questionsPtr = 0;
	const int NTESTS = 100;
	const int SIZE = 3;
	int count = 0;
	int perc;
	
	for ( int i = 0; i < SIZE; i++ )
	{
		questionsPtr = new int [ Nquestions [i] ];
		templatePtr = new int [ Nquestions [i] ];
		
		fillquestions( templatePtr, Nquestions [i] );
		
		for ( int j = 0; j < NTESTS; j++ )
		{
			fillquestions( questionsPtr, Nquestions [i]  );
			
			if ( checkquestions( templatePtr, questionsPtr,  Nquestions [i] ) )
				count++; 
			
		}
		
		
		perc[ i ] = double( count ) / double( NTESTS );
		
		delete [ ] questionsPtr;
		delete [ ] templatePtr;
	}
	
}

void fillquestions( )
{
	
}

void checkquestions()
{
	
}

void printquestions()
{
	
}

#include <stdio.h>

#include "Singleton.h"

int main()
{
	SINGLETON* instance = NULL;
	void * data = NULL;

	instance = GetSingletonInstance();

	instance->Container->WriteData( instance->Container, data );

	return 0;
}
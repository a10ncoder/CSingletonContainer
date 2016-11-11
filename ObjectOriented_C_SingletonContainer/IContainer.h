#pragma once

typedef struct _ICONTAINER  ICONTAINER;
struct _ICONTAINER
{
	void* Object;

	void(*WriteData)(ICONTAINER*, void * );
	void(*GetData)(ICONTAINER* , void * );

};

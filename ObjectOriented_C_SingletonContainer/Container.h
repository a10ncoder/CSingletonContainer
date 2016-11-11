#pragma once
#include "IContainer.h"

typedef struct _CONTAINER  CONTAINER;
struct _CONTAINER
{
	
	union
	{
		ICONTAINER;
		ICONTAINER IContainer;
		
	};

};


ICONTAINER* CreateContainer( );
void CloseContainer(ICONTAINER * Container);
#include <stdio.h>
#include "Container.h"

void* WriteData(ICONTAINER* Container, void * Data);
void* GetData(ICONTAINER* Container, void * ContainerData);


ICONTAINER* CreateContainer(  )
{
	CONTAINER * Container;
	

	Container = calloc(1, sizeof(CONTAINER));

	Container->WriteData = WriteData;
	Container->GetData = GetData;

	return Container;
	
}

void* WriteData(ICONTAINER* Container, void * Data)
{
	printf("[Container][WriteData]");
}

void* GetData(ICONTAINER* Container, void * ContainerData)
{

}

void CloseContainer(ICONTAINER * Container)
{
	if (Container != NULL)
	{
		free( Container );
	}
}
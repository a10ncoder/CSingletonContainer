#pragma once
#include "IContainer.h"

typedef struct _SINGLETON  SINGLETON;
struct _SINGLETON
{
	void* Object;
	ICONTAINER* Container;

};



SINGLETON* GetSingletonInstance();
void DestroySingleton();
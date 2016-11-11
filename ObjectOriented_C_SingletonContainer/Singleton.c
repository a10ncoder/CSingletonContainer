#include <stdio.h>
#include "Singleton.h"
#include "Container.h"



void Init(SINGLETON** instance)
{
	SINGLETON * Singleton = NULL;
	

	//ICONTAINER* Container = NULL;


	Singleton = calloc(1, sizeof(SINGLETON));

	if (Singleton == NULL)
	{
		return;
	}
	

	Singleton->Container = CreateContainer();
	*instance = Singleton;

	
}

SINGLETON* GetSingletonInstance()
{
	static SINGLETON * instance = NULL;


	//lock method here
	if (instance == NULL)
	{
		Init(&instance);
	}

	//release lock

	return instance;
};


void DestroySingleton()
{
	SINGLETON * Instance = GetSingletonInstance();

	CloseContainer( Instance->Container);


}
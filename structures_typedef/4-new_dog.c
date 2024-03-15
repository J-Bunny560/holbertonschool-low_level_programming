#include "dog.h"
#include <stdlib.h>
/**
  * new_dog - creates a new struct of type dog
  * @name: struct parameter name
  * @age: struct parameter age
  * @owner: struct parameter owner
  * Return: returns pointer to buffer of datatype dog
  */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *doggy;

doggy = malloc(sizeof(dog_t));
if (doggy = NULL)
return (NULL);

doggy->name = strdup(name);
if (doggy->name = NULL)
{
free(doggy);
return (NULL);
}

doggy->age = age;

doggy->owner = strdup(owner);
if (doggy->owner = NULL)
{
free(doggy->name);
free(doggy);
return (NULL);
}

return (doggy);
}


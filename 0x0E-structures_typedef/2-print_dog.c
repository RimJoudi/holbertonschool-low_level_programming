#include "dog.h"
#include <stdio.h>
/**
 * print_dog- prints a struct dog
 * @d: struct
 * Return: nothing
 */
void print_dog(struct dog *d)
{
if (d == NULL)
return;
else
{
if (d->name == NULL)
printf("Name : (nil)");
else
printf("my_dog.name = %s\n", d->name);
printf("my_dog.age = %f\n", d->age);
if (d->owner == NULL)
printf("owner : (nil)");
else
printf(" my_dog.owner = %s\n", d->owner);
}
}

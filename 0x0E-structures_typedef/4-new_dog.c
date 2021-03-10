#include "dog.h"
#include <stdio.h>
/**
 * new_dog- creates a new dog.
 * @name: char
 * @age: float
 * @owner: owner
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
int l1, l2, i, j;
char *p;
for (l1 = 0; name[l1] != '\0'; l1++)
continue;
p->name[i] = malloc(sizeof(char) * l1 + 1);
if (p == NULL)
return (NULL);
else
{
for (i = 0; i < l1; i++)
p[i] = p->name[i];
}
for (l2 = 0; owner[l2] != '\0'; l2++)
continue;
p->owner[i] = malloc(sizeof(char) * l2 + 1);
if (p == NULL)
return (NULL);
else
{
for (j = 0; j < l2; j++)
p[j] = p->owner[j];
}
return (p)
}

#ifndef DOG_H
#define DOG_H
/**
 * struct dog - function that defines struct dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * description: first task on structures
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif

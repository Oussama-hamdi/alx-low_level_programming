#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure for a dog
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 * Description: a structure for a dogs data
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /** DOG_H */

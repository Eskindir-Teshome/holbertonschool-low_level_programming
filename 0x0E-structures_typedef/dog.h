#ifndef DOG_H
#define DOG_H
int _putchar (char c);
/**
 * struct dog - data structure
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Description: dog with name, age, and owner's name.
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
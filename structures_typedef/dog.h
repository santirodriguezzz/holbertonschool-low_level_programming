#ifndef DOG_H
#define DOG_H
/**
* struct dog - poppy
* @name : nombre perro
* @owner : dueño
* @age : edad
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

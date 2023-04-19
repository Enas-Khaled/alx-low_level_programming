#ifndef _DOG_H
#define _DOG_H
/**
 * struct dog - dog
 * @name: name
 * @age: age
 * @owner: owner
 * Description: This struct represents a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif /* _DOG_H */

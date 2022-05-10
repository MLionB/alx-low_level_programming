#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - definition
 * @name: name
 * @age: age
 * @owner: owner
 * Description: dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif

#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Structure of a dog
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: structure of a dog
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

#endif /* DOG_H */

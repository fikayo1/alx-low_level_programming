#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a struct with some elements in it
 * @name: a pointer to the name string
 * @age: a pointer to age
 * @owner: a poiner to owner
 */
struct dog
{
char *name;
float age;
char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif

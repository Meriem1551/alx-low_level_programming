#ifndef _dog_h_
#define _dog_h_
/**
 * struct dog - such structure, wow
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 */
typedef struct dog
{
char *name;
float age;
char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif /*_dog_h_*/

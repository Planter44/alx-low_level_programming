#ifndef DOG_H
#define DOG_H

/**
 * struct dog -Dog's basic infomation.
 * @name: The 1st member,
 * @age: The 2nd member,
 * @owner: The 3rd  member,
 *
 * Description: Longer description
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

// dog_t -typedef for struct the dog

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif

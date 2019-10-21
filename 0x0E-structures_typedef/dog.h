#ifndef DOG_H
#define DOG_H

struct dog
{
	char *name;
	float age;
	char *owner;
};

int _putchar(char);
void init_dog(struct dog *, char *, float, char *);
void print_dog(struct dog *);

typedef struct dog dog_t;

dog_t *new_dog(char *, float, char *);

#endif /* DOG_H */

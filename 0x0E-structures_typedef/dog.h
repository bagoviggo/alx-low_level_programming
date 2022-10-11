#ifndef DOG_H
#define DOG_H

/**
* struct dog - data type for dog
*@name: first member //dog's name
*@age: second member //dogs age
*@owner: third member //dogs owner
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
*struct dog - typedef for struct dog
*@name: first member //char
*@age: second member //int
*@owner: third member //char
*/
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);


#endif /*DOG_H*/

## Tasks
<img align="right" src="../.imgs/dog0.jpg" alt="dog0" width="120" height="120">
0. [Poppy](./dog.h) : A new type `struct dog` with the following elements.
	- `name`, type = `char *`
	- `age`, type = `float`
	- `owner`, type = `char *`
	- Compile the code this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c -o a`
<img align="right" src="../.imgs/dog1.jpg" alt="dog1" width="120" height="120">
1. [A dog is the only thing on earth that loves you more than you love yourself](./1-init_dog.c) : A function that initialize a variable of type `struct dog`
	- Prototype: `void init_dog(struct dog *d, char *name, float age, char *owner);`
	- Compile the code this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-init_dog.c -o b`
<img align="right" src="../.imgs/dog2.jpg" alt="dog2" width="120" height="120">
2. [A dog will teach you unconditional love. If you can have that in your life, things won't be too bad](./2-print_dog.c) : A function that prints a `struct dog`
	- Prototype: `void print_dog(struct dog *d);`
	- Format: see example below.

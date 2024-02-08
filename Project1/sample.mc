struct entity {
	static int counter = 0;
	int id = 0;

	static int next_id() {
		int current = counter;
		counter = counter + 1;
		printf("counter updated: %i -> %i\n", counter - 1, counter);
		return current;
	}

	constructor() {
		id = next_id();
	}

	constructor(int myid)
	{
		id = myid;
	}

	cast string() {
		return (string)"Hello";
	}

	int my_id() {
		return id;
	}
}

void print(cstring name, entity e) {
	printf("%s: %i\n", name, e.id);
}

int main() {
	entity a;
	entity b;
	entity c = 3; // I don't know that I truly like this syntax.

	printf("counter: %i\n", entity.counter);

	print("a", a);
	print("b", b);
	print("c", c);

	return 0;
}
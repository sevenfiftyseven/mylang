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

	cast string() {
		return (string)"Hello";
	}

	int my_id() {
		return id;
	}
}

int main() {
	entity a;
	entity b;

	printf("a: %i\n", a.id);
	printf("b: %i\n", b.my_id());
	return 0;
}
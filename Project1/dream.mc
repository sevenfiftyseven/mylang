

// probably need to work out the structure of this lambda better.
int(int, int) returnfn(int op) // this cannot infer return type.
{
	return (int x, int y) {
		return x + op; // infer return type? -- this gets spicy
	};
}




// probably need to work out the structure of this lambda better.
int(int, int) returnfn(int op) // this cannot infer return type.
{
	if (op == 1) {
		return (int x, int y) {
			return x + 1; // infer return type? -- this gets spicy
		};
	}
}


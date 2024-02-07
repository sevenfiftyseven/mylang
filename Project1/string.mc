// this is more or less how strings currently work.

struct string {
	char* cstr;
	
	[cdef]
	static int strlen(char* str);

	[cdef]
	static char* strcpy(char* dest, char* src);

	[cdef]
	static char* strcat(char* dest, char* src);

	int length() {
		return strlen(cstr);
	}

	static string operator +(string a, string b) {
		char* newstr = char[a.length() + b.length() + 1];
		strcpy(newstr, a.cstr);
		strcat(newstr, b.cstr);
	}

	// this operator isn't static? -- this is not implemented currently
	char operator [](int index) {
		return cstr[index];
	}

	static cast char* (string a) {
		return a.cstr;
	}

	string() {
		cstr = "";
	}

	string(char* _cstr) {
		int len = strlen(_cstr);
		cstr = malloc(len + 1);
		strcpy(cstr, _cstr);
	}

	// not implemented.
	~string() {
		free(cstr);
	}
};
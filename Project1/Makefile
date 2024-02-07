

antlr: *.g4
	antlr4 -Dlanguage=Cpp base_lexer.g4 -o AntlrFiles/intermediate
	antlr4 -Dlanguage=Cpp mylang.g4 -listener -visitor -o AntlrFiles -lib AntlrFiles/intermediate


optimized_output.ll: out.ll
	"C:/Users/Braed/Downloads/llvm-project/llvm-project-16.0.5.src/build/Debug/bin/llvm-as" < out.ll | "C:/Users/Braed/Downloads/llvm-project/llvm-project-16.0.5.src/build/Debug/bin/opt" -O3 -debug-pass-manager -o out.bc
	"C:/Users/Braed/Downloads/llvm-project/llvm-project-16.0.5.src/build/Debug/bin/llvm-dis" out.bc -o optimized_output.ll

main.o: optimized_output.ll
	C:/Users/Braed/Downloads/llvm-project/llvm-project-16.0.5.src/build/Debug/bin/llc -filetype=obj out.ll -o main.o

core.o: core.ll
	C:/Users/Braed/Downloads/llvm-project/llvm-project-16.0.5.src/build/Debug/bin/llc -filetype=obj core.ll -o core.o

build: main.o core.o
	clang main.o core.o -o main.exe
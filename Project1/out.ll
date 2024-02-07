; ModuleID = 'top'
source_filename = "top"

@0 = private unnamed_addr constant [4 x i8] c"%i\0A\00", align 1

declare i32 @strlen(i8*)

declare i32 @printf(...)

declare i8* @itoa(i32, i8*, i32)

define i32 @main() {
  %1 = alloca i32, align 4
  store i32 0, i32* %1, align 4
  %2 = load i32, i32* %1, align 4
  store i32 %2, i32* %1, align 4
  %3 = load i32, i32* %1, align 4
  %4 = add i32 %3, 5
  %5 = load i32, i32* %1, align 4
  store i32 %5, i32* %1, align 4
  %6 = load i32, i32* %1, align 4
  %7 = add i32 %6, 4
  %8 = load i32, i32* %1, align 4
  %9 = call i32 (...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @0, i32 0, i32 0), i32 %8)
  ret i32 0
}

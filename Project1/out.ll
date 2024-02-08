; ModuleID = 'top'
source_filename = "top"

%0 = type { i32, i32 }
%1 = type { i8* }

@0 = common global i32 0
@1 = private unnamed_addr constant [27 x i8] c"counter updated: %i -> %i\0A\00", align 1
@2 = private unnamed_addr constant [6 x i8] c"Hello\00", align 1
@3 = private unnamed_addr constant [7 x i8] c"a: %i\0A\00", align 1
@4 = private unnamed_addr constant [7 x i8] c"b: %i\0A\00", align 1

declare i32 @strlen(i8*)

declare i32 @printf(...)

declare i8* @itoa(i32, i8*, i32)

define i32 @next_id() {
  %1 = alloca i32, align 4
  %2 = load i32, i32* @0, align 4
  store i32 %2, i32* %1, align 4
  %3 = load i32, i32* @0, align 4
  %4 = add i32 %3, 1
  store i32 %4, i32* @0, align 4
  %5 = load i32, i32* @0, align 4
  %6 = sub i32 %5, 1
  %7 = load i32, i32* @0, align 4
  %8 = call i32 (...) @printf(i8* getelementptr inbounds ([27 x i8], [27 x i8]* @1, i32 0, i32 0), i32 %6, i32 %7)
  %9 = load i32, i32* %1, align 4
  ret i32 %9
}

define void @__entity_constructor_entity(%0* %0) {
  %2 = getelementptr inbounds %0, %0* %0, i32 0, i32 0
  %3 = getelementptr inbounds %0, %0* %0, i32 0, i32 0
  %4 = call i32 @next_id()
  store i32 %4, i32* %3, align 4
  ret void
}

define %1 @__entity_CAST_string(%0* %0) {
  %2 = alloca %1, align 8
  %3 = call i32 @strlen(i8* getelementptr inbounds ([6 x i8], [6 x i8]* @2, i32 0, i32 0))
  %4 = add i32 %3, 1
  %5 = mul i32 ptrtoint (i8* getelementptr (i8, i8* null, i32 1) to i32), %4
  %6 = tail call i8* @malloc(i32 %5)
  %7 = getelementptr inbounds %1, %1* %2, i32 0, i32 0
  %8 = call i8* @strcpy(i8* %6, i8* getelementptr inbounds ([6 x i8], [6 x i8]* @2, i32 0, i32 0))
  store i8* %6, i8** %7, align 8
  %9 = load %1, %1* %2, align 8
  ret %1 %9
}

declare i8* @strcpy(i8*, i8*)

declare noalias i8* @malloc(i32)

define i32 @my_id(%0* %0) {
  %2 = getelementptr inbounds %0, %0* %0, i32 0, i32 0
  %3 = getelementptr inbounds %0, %0* %0, i32 0, i32 0
  %4 = load i32, i32* %3, align 4
  ret i32 %4
}

define i32 @main() {
  %1 = alloca %0, align 8
  call void @__entity_constructor_entity(%0* %1)
  %2 = alloca %0, align 8
  call void @__entity_constructor_entity(%0* %2)
  %3 = getelementptr inbounds %0, %0* %1, i32 0, i32 0
  %4 = load i32, i32* %3, align 4
  %5 = call i32 (...) @printf(i8* getelementptr inbounds ([7 x i8], [7 x i8]* @3, i32 0, i32 0), i32 %4)
  %6 = call i32 @my_id(%0* %2)
  %7 = call i32 (...) @printf(i8* getelementptr inbounds ([7 x i8], [7 x i8]* @4, i32 0, i32 0), i32 %6)
  ret i32 0
}

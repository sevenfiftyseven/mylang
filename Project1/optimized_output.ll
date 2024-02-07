; ModuleID = 'out.bc'
source_filename = "top"

@0 = private unnamed_addr constant [4 x i8] c"%i\0A\00", align 1

declare i32 @printf(...) local_unnamed_addr

define i32 @main() local_unnamed_addr {
  %1 = tail call i32 (...) @printf(ptr nonnull @0, i32 0)
  ret i32 0
}

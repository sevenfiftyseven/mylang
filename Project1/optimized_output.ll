; ModuleID = 'out.bc'
source_filename = "top"

%0 = type { ptr }
%1 = type { i32, i32 }

@0 = internal unnamed_addr global i32 0
@1 = private unnamed_addr constant [27 x i8] c"counter updated: %i -> %i\0A\00", align 1
@2 = private unnamed_addr constant [6 x i8] c"Hello\00", align 1
@3 = private unnamed_addr constant [8 x i8] c"%s: %i\0A\00", align 1
@4 = private unnamed_addr constant [13 x i8] c"counter: %i\0A\00", align 1
@5 = private unnamed_addr constant [2 x i8] c"a\00", align 1
@6 = private unnamed_addr constant [2 x i8] c"b\00", align 1
@7 = private unnamed_addr constant [2 x i8] c"c\00", align 1

declare i32 @strlen(ptr) local_unnamed_addr

declare i32 @printf(...) local_unnamed_addr

define i32 @__entity_next_id() local_unnamed_addr {
  %1 = load i32, ptr @0, align 4
  %2 = add i32 %1, 1
  store i32 %2, ptr @0, align 4
  %3 = tail call i32 (...) @printf(ptr nonnull @1, i32 %1, i32 %2)
  ret i32 %1
}

define void @__entity_constructor_entity(ptr nocapture writeonly %0) local_unnamed_addr {
  %2 = load i32, ptr @0, align 4
  %3 = add i32 %2, 1
  store i32 %3, ptr @0, align 4
  %4 = tail call i32 (...) @printf(ptr nonnull @1, i32 %2, i32 %3)
  store i32 %2, ptr %0, align 4
  ret void
}

; Function Attrs: mustprogress nofree norecurse nosync nounwind willreturn memory(argmem: write)
define void @__entity_constructor_entity_int(ptr nocapture writeonly %0, i32 %1) local_unnamed_addr #0 {
  store i32 %1, ptr %0, align 4
  ret void
}

define %0 @__entity_CAST_string(ptr nocapture readnone %0) local_unnamed_addr {
  %2 = tail call i32 @strlen(ptr nonnull @2)
  %3 = add i32 %2, 1
  %4 = tail call ptr @malloc(i32 %3)
  tail call void @llvm.memcpy.p0.p0.i64(ptr noundef nonnull align 1 dereferenceable(6) %4, ptr noundef nonnull align 1 dereferenceable(6) @2, i64 6, i1 false)
  %.fca.0.insert = insertvalue %0 poison, ptr %4, 0
  ret %0 %.fca.0.insert
}

declare noalias ptr @malloc(i32) local_unnamed_addr

; Function Attrs: mustprogress nofree norecurse nosync nounwind willreturn memory(argmem: read)
define i32 @__entity_my_id_entity(ptr nocapture readonly %0) local_unnamed_addr #1 {
  %2 = load i32, ptr %0, align 4
  ret i32 %2
}

define void @print(ptr %0, %1 %1) local_unnamed_addr {
  %.fca.0.extract = extractvalue %1 %1, 0
  %3 = tail call i32 (...) @printf(ptr nonnull @3, ptr %0, i32 %.fca.0.extract)
  ret void
}

define i32 @main() local_unnamed_addr {
  %1 = load i32, ptr @0, align 4
  %2 = add i32 %1, 1
  store i32 %2, ptr @0, align 4
  %3 = tail call i32 (...) @printf(ptr nonnull @1, i32 %1, i32 %2)
  %4 = load i32, ptr @0, align 4
  %5 = add i32 %4, 1
  store i32 %5, ptr @0, align 4
  %6 = tail call i32 (...) @printf(ptr nonnull @1, i32 %4, i32 %5)
  %7 = load i32, ptr @0, align 4
  %8 = tail call i32 (...) @printf(ptr nonnull @4, i32 %7)
  %9 = tail call i32 (...) @printf(ptr nonnull @3, ptr nonnull @5, i32 %1)
  %10 = tail call i32 (...) @printf(ptr nonnull @3, ptr nonnull @6, i32 %4)
  %11 = tail call i32 (...) @printf(ptr nonnull @3, ptr nonnull @7, i32 3)
  ret i32 0
}

; Function Attrs: nocallback nofree nounwind willreturn memory(argmem: readwrite)
declare void @llvm.memcpy.p0.p0.i64(ptr noalias nocapture writeonly, ptr noalias nocapture readonly, i64, i1 immarg) #2

attributes #0 = { mustprogress nofree norecurse nosync nounwind willreturn memory(argmem: write) }
attributes #1 = { mustprogress nofree norecurse nosync nounwind willreturn memory(argmem: read) }
attributes #2 = { nocallback nofree nounwind willreturn memory(argmem: readwrite) }

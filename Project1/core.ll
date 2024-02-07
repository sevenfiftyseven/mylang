; ModuleID = 'core'
source_filename = "core"

declare i32 @printf(...)

define void @i32ptr_op_assign_i32(i32** %a, i32* %v) {
	entry:
	store i32* %v, i32** %a
	ret void
}
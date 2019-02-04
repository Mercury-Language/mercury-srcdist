

mslice.optdate mslice.trans_opt_date mslice.err mslice.c_date mslice.s_date mslice.pic_s_date mslice.il_date mslice.java_date : mslice.m \
	builtin.int \
	getopt.int \
	io.int \
	list.int \
	maybe.int \
	mdbcomp.int \
	private_builtin.int \
	string.int \
	mdbcomp.slice_and_dice.int \
	assoc_list.int2 \
	bitmap.int2 \
	bool.int2 \
	char.int2 \
	construct.int2 \
	deconstruct.int2 \
	enum.int2 \
	map.int2 \
	ops.int2 \
	pair.int2 \
	set.int2 \
	set_ordlist.int2 \
	stream.int2 \
	term.int2 \
	time.int2 \
	tree234.int2 \
	type_desc.int2 \
	univ.int2 \
	mdbcomp.prim_data.int2 \
	mdbcomp.program_representation.int2 \
	mdbcomp.rtti_access.int2 \
	mdbcomp.trace_counts.int2

ifeq ($(TARGET_ASM),yes)
mslice.mh mslice.mih : mslice.s
else
mslice.mh mslice.mih : mslice.c
endif

ifeq ($(TARGET_ASM),yes)
mslice.module_dep : mslice.s
else
 ifeq ($(findstring il,$(GRADE)),il)
mslice.module_dep : mslice.il
  ifeq ($(findstring java,$(GRADE)),java)
mslice.module_dep : mslice.java
  else
mslice.module_dep : mslice.c
  endif
 endif
endif

mslice.date mslice.date0 : mslice.m \
	builtin.int3 \
	getopt.int3 \
	io.int3 \
	list.int3 \
	maybe.int3 \
	mdbcomp.int3 \
	private_builtin.int3 \
	string.int3 \
	mdbcomp.slice_and_dice.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	bool.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	map.int3 \
	ops.int3 \
	pair.int3 \
	set.int3 \
	set_ordlist.int3 \
	stream.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3 \
	mdbcomp.prim_data.int3 \
	mdbcomp.program_representation.int3 \
	mdbcomp.rtti_access.int3 \
	mdbcomp.trace_counts.int3

mslice.date0 : mslice.m \
	builtin.int3 \
	getopt.int3 \
	io.int3 \
	list.int3 \
	maybe.int3 \
	mdbcomp.int3 \
	private_builtin.int3 \
	string.int3 \
	mdbcomp.slice_and_dice.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	bool.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	map.int3 \
	ops.int3 \
	pair.int3 \
	set.int3 \
	set_ordlist.int3 \
	stream.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3 \
	mdbcomp.prim_data.int3 \
	mdbcomp.program_representation.int3 \
	mdbcomp.rtti_access.int3 \
	mdbcomp.trace_counts.int3



mslice.$O :  \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh



mslice.pic_o :  \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh


mslice.int0 : mslice.date0
	@:
mslice.int : mslice.date
	@:
mslice.int2 : mslice.date
	@:
mslice.int3 : mslice.date3
	@:
mslice.opt : mslice.optdate
	@:
mslice.trans_opt : mslice.trans_opt_date
	@:

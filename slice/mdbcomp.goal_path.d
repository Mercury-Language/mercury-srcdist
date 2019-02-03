

mdbcomp.goal_path.optdate mdbcomp.goal_path.trans_opt_date mdbcomp.goal_path.err mdbcomp.goal_path.c_date mdbcomp.goal_path.s_date mdbcomp.goal_path.pic_s_date mdbcomp.goal_path.il_date mdbcomp.goal_path.java_date : mdbcomp.goal_path.m \
	mdbcomp.int0 \
	array.int \
	assoc_list.int \
	bimap.int \
	builtin.int \
	char.int \
	cord.int \
	int.int \
	list.int \
	map.int \
	maybe.int \
	pair.int \
	private_builtin.int \
	require.int \
	string.int \
	bitmap.int2 \
	bool.int2 \
	construct.int2 \
	deconstruct.int2 \
	enum.int2 \
	io.int2 \
	ops.int2 \
	pretty_printer.int2 \
	random.int2 \
	rtti_implementation.int2 \
	set.int2 \
	set_ordlist.int2 \
	stream.int2 \
	term.int2 \
	time.int2 \
	tree234.int2 \
	type_desc.int2 \
	univ.int2

ifeq ($(TARGET_ASM),yes)
mdbcomp.goal_path.mh mdbcomp.goal_path.mih : mdbcomp.goal_path.s
else
mdbcomp.goal_path.mh mdbcomp.goal_path.mih : mdbcomp.goal_path.c
endif

ifeq ($(TARGET_ASM),yes)
mdbcomp.goal_path.module_dep : mdbcomp.goal_path.s
else
 ifeq ($(findstring il,$(GRADE)),il)
mdbcomp.goal_path.module_dep : mdbcomp.goal_path.il
 else
  ifeq ($(findstring java,$(GRADE)),java)
mdbcomp.goal_path.module_dep : jmercury/mdbcomp__goal_path.java
  else
mdbcomp.goal_path.module_dep : mdbcomp.goal_path.c
  endif
 endif
endif

mdbcomp.goal_path.date mdbcomp.goal_path.date0 \
	mdbcomp.date : mdbcomp.goal_path.m \
	mdbcomp.int0 \
	array.int3 \
	assoc_list.int3 \
	bimap.int3 \
	builtin.int3 \
	char.int3 \
	cord.int3 \
	int.int3 \
	list.int3 \
	map.int3 \
	maybe.int3 \
	pair.int3 \
	private_builtin.int3 \
	require.int3 \
	string.int3 \
	bitmap.int3 \
	bool.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	io.int3 \
	ops.int3 \
	pretty_printer.int3 \
	random.int3 \
	rtti_implementation.int3 \
	set.int3 \
	set_ordlist.int3 \
	stream.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3

mdbcomp.goal_path.date0 \
	mdbcomp.date0 : mdbcomp.goal_path.m \
	array.int3 \
	assoc_list.int3 \
	bimap.int3 \
	builtin.int3 \
	char.int3 \
	cord.int3 \
	int.int3 \
	list.int3 \
	map.int3 \
	maybe.int3 \
	pair.int3 \
	private_builtin.int3 \
	require.int3 \
	string.int3 \
	bitmap.int3 \
	bool.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	io.int3 \
	ops.int3 \
	pretty_printer.int3 \
	random.int3 \
	rtti_implementation.int3 \
	set.int3 \
	set_ordlist.int3 \
	stream.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3



mdbcomp.goal_path.$O :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh \
	array.mh \
	array.mh \
	mdbcomp.mh



mdbcomp.goal_path.pic_o :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh \
	array.mh \
	array.mh \
	mdbcomp.mh


mdbcomp.goal_path.int0 : mdbcomp.goal_path.date0
	@:
mdbcomp.goal_path.int : mdbcomp.goal_path.date
	@:
mdbcomp.goal_path.int2 : mdbcomp.goal_path.date
	@:
mdbcomp.goal_path.int3 : mdbcomp.goal_path.date3
	@:
mdbcomp.goal_path.opt : mdbcomp.goal_path.optdate
	@:
mdbcomp.goal_path.trans_opt : mdbcomp.goal_path.trans_opt_date
	@:



branch_and_bound.optdate branch_and_bound.trans_opt_date branch_and_bound.err branch_and_bound.c_date branch_and_bound.s_date branch_and_bound.pic_s_date branch_and_bound.il_date branch_and_bound.java_date : branch_and_bound.m \
	benchmarking.int \
	builtin.int \
	float.int \
	int.int \
	io.int \
	list.int \
	mutvar.int \
	pair.int \
	private_builtin.int \
	require.int \
	set.int \
	string.int \
	unit.int \
	array.int2 \
	assoc_list.int2 \
	bitmap.int2 \
	bool.int2 \
	char.int2 \
	construct.int2 \
	deconstruct.int2 \
	enum.int2 \
	map.int2 \
	maybe.int2 \
	ops.int2 \
	pretty_printer.int2 \
	random.int2 \
	rtti_implementation.int2 \
	set_ordlist.int2 \
	stream.int2 \
	term.int2 \
	time.int2 \
	tree234.int2 \
	type_desc.int2 \
	univ.int2

ifeq ($(TARGET_ASM),yes)
branch_and_bound.mh branch_and_bound.mih : branch_and_bound.s
else
branch_and_bound.mh branch_and_bound.mih : branch_and_bound.c
endif

ifeq ($(TARGET_ASM),yes)
branch_and_bound.module_dep : branch_and_bound.s
else
 ifeq ($(findstring il,$(GRADE)),il)
branch_and_bound.module_dep : branch_and_bound.il
 else
  ifeq ($(findstring java,$(GRADE)),java)
branch_and_bound.module_dep : jmercury/branch_and_bound.java
  else
branch_and_bound.module_dep : branch_and_bound.c
  endif
 endif
endif

branch_and_bound.date branch_and_bound.date0 : branch_and_bound.m \
	benchmarking.int3 \
	builtin.int3 \
	float.int3 \
	int.int3 \
	io.int3 \
	list.int3 \
	mutvar.int3 \
	pair.int3 \
	private_builtin.int3 \
	require.int3 \
	set.int3 \
	string.int3 \
	unit.int3 \
	array.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	bool.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	map.int3 \
	maybe.int3 \
	ops.int3 \
	pretty_printer.int3 \
	random.int3 \
	rtti_implementation.int3 \
	set_ordlist.int3 \
	stream.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3

branch_and_bound.date0 : branch_and_bound.m \
	benchmarking.int3 \
	builtin.int3 \
	float.int3 \
	int.int3 \
	io.int3 \
	list.int3 \
	mutvar.int3 \
	pair.int3 \
	private_builtin.int3 \
	require.int3 \
	set.int3 \
	string.int3 \
	unit.int3 \
	array.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	bool.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	map.int3 \
	maybe.int3 \
	ops.int3 \
	pretty_printer.int3 \
	random.int3 \
	rtti_implementation.int3 \
	set_ordlist.int3 \
	stream.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3



branch_and_bound.$O :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	array.mh \
	array.mh \
	string.mh \
	io.mh \
	io.mh



branch_and_bound.pic_o :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	array.mh \
	array.mh \
	string.mh \
	io.mh \
	io.mh


branch_and_bound.int0 : branch_and_bound.date0
	@:
branch_and_bound.int : branch_and_bound.date
	@:
branch_and_bound.int2 : branch_and_bound.date
	@:
branch_and_bound.int3 : branch_and_bound.date3
	@:
branch_and_bound.opt : branch_and_bound.optdate
	@:
branch_and_bound.trans_opt : branch_and_bound.trans_opt_date
	@:

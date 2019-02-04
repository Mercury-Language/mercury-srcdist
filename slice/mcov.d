

mcov.optdate mcov.trans_opt_date mcov.err mcov.c_date mcov.s_date mcov.pic_s_date mcov.il_date mcov.java_date : mcov.m \
	assoc_list.int \
	bool.int \
	builtin.int \
	getopt.int \
	int.int \
	io.int \
	list.int \
	map.int \
	maybe.int \
	mdbcomp.int \
	pair.int \
	private_builtin.int \
	require.int \
	set.int \
	string.int \
	svmap.int \
	term_io.int \
	mdbcomp.prim_data.int \
	mdbcomp.program_representation.int \
	mdbcomp.trace_counts.int \
	array.int2 \
	bitmap.int2 \
	char.int2 \
	construct.int2 \
	deconstruct.int2 \
	enum.int2 \
	ops.int2 \
	pretty_printer.int2 \
	random.int2 \
	set_ordlist.int2 \
	stream.int2 \
	term.int2 \
	time.int2 \
	tree234.int2 \
	type_desc.int2 \
	univ.int2 \
	varset.int2 \
	mdbcomp.rtti_access.int2

ifeq ($(TARGET_ASM),yes)
mcov.mh mcov.mih : mcov.s
else
mcov.mh mcov.mih : mcov.c
endif

ifeq ($(TARGET_ASM),yes)
mcov.module_dep : mcov.s
else
 ifeq ($(findstring il,$(GRADE)),il)
mcov.module_dep : mcov.il
  ifeq ($(findstring java,$(GRADE)),java)
mcov.module_dep : mcov.java
  else
mcov.module_dep : mcov.c
  endif
 endif
endif

mcov.date mcov.date0 : mcov.m \
	assoc_list.int3 \
	bool.int3 \
	builtin.int3 \
	getopt.int3 \
	int.int3 \
	io.int3 \
	list.int3 \
	map.int3 \
	maybe.int3 \
	mdbcomp.int3 \
	pair.int3 \
	private_builtin.int3 \
	require.int3 \
	set.int3 \
	string.int3 \
	svmap.int3 \
	term_io.int3 \
	mdbcomp.prim_data.int3 \
	mdbcomp.program_representation.int3 \
	mdbcomp.trace_counts.int3 \
	array.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	ops.int3 \
	pretty_printer.int3 \
	random.int3 \
	set_ordlist.int3 \
	stream.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3 \
	varset.int3 \
	mdbcomp.rtti_access.int3

mcov.date0 : mcov.m \
	assoc_list.int3 \
	bool.int3 \
	builtin.int3 \
	getopt.int3 \
	int.int3 \
	io.int3 \
	list.int3 \
	map.int3 \
	maybe.int3 \
	mdbcomp.int3 \
	pair.int3 \
	private_builtin.int3 \
	require.int3 \
	set.int3 \
	string.int3 \
	svmap.int3 \
	term_io.int3 \
	mdbcomp.prim_data.int3 \
	mdbcomp.program_representation.int3 \
	mdbcomp.trace_counts.int3 \
	array.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	ops.int3 \
	pretty_printer.int3 \
	random.int3 \
	set_ordlist.int3 \
	stream.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3 \
	varset.int3 \
	mdbcomp.rtti_access.int3



mcov.$O :  \
	array.mh \
	array.mh \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh



mcov.pic_o :  \
	array.mh \
	array.mh \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh


mcov.int0 : mcov.date0
	@:
mcov.int : mcov.date
	@:
mcov.int2 : mcov.date
	@:
mcov.int3 : mcov.date3
	@:
mcov.opt : mcov.optdate
	@:
mcov.trans_opt : mcov.trans_opt_date
	@:

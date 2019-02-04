

query.optdate query.trans_opt_date query.err query.c_date query.s_date query.pic_s_date query.il_date query.java_date : query.m \
	array.int \
	assoc_list.int \
	bool.int \
	builtin.int \
	exception.int \
	exclude.int \
	html_format.int \
	int.int \
	interface.int \
	io.int \
	list.int \
	map.int \
	maybe.int \
	measurements.int \
	pair.int \
	private_builtin.int \
	profile.int \
	require.int \
	string.int \
	top_procs.int \
	unit.int \
	univ.int \
	bitmap.int2 \
	char.int2 \
	construct.int2 \
	deconstruct.int2 \
	enum.int2 \
	ops.int2 \
	pretty_printer.int2 \
	random.int2 \
	set.int2 \
	set_ordlist.int2 \
	store.int2 \
	stream.int2 \
	term.int2 \
	time.int2 \
	tree234.int2 \
	type_desc.int2

ifeq ($(TARGET_ASM),yes)
query.mh query.mih : query.s
else
query.mh query.mih : query.c
endif

ifeq ($(TARGET_ASM),yes)
query.module_dep : query.s
else
 ifeq ($(findstring il,$(GRADE)),il)
query.module_dep : query.il
  ifeq ($(findstring java,$(GRADE)),java)
query.module_dep : query.java
  else
query.module_dep : query.c
  endif
 endif
endif

query.date query.date0 : query.m \
	array.int3 \
	assoc_list.int3 \
	bool.int3 \
	builtin.int3 \
	exception.int3 \
	exclude.int3 \
	html_format.int3 \
	int.int3 \
	interface.int3 \
	io.int3 \
	list.int3 \
	map.int3 \
	maybe.int3 \
	measurements.int3 \
	pair.int3 \
	private_builtin.int3 \
	profile.int3 \
	require.int3 \
	string.int3 \
	top_procs.int3 \
	unit.int3 \
	univ.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	ops.int3 \
	pretty_printer.int3 \
	random.int3 \
	set.int3 \
	set_ordlist.int3 \
	store.int3 \
	stream.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3

query.date0 : query.m \
	array.int3 \
	assoc_list.int3 \
	bool.int3 \
	builtin.int3 \
	exception.int3 \
	exclude.int3 \
	html_format.int3 \
	int.int3 \
	interface.int3 \
	io.int3 \
	list.int3 \
	map.int3 \
	maybe.int3 \
	measurements.int3 \
	pair.int3 \
	private_builtin.int3 \
	profile.int3 \
	require.int3 \
	string.int3 \
	top_procs.int3 \
	unit.int3 \
	univ.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	ops.int3 \
	pretty_printer.int3 \
	random.int3 \
	set.int3 \
	set_ordlist.int3 \
	store.int3 \
	stream.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3



query.$O :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	array.mh \
	array.mh \
	string.mh \
	io.mh \
	io.mh



query.pic_o :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	array.mh \
	array.mh \
	string.mh \
	io.mh \
	io.mh


query.int0 : query.date0
	@:
query.int : query.date
	@:
query.int2 : query.date
	@:
query.int3 : query.date3
	@:
query.opt : query.optdate
	@:
query.trans_opt : query.trans_opt_date
	@:



html_format.optdate html_format.trans_opt_date html_format.err html_format.c_date html_format.s_date html_format.pic_s_date html_format.il_date html_format.java_date : html_format.m \
	bool.int \
	builtin.int \
	char.int \
	float.int \
	int.int \
	interface.int \
	list.int \
	maybe.int \
	measurements.int \
	private_builtin.int \
	profile.int \
	require.int \
	string.int \
	top_procs.int \
	unit.int \
	array.int2 \
	assoc_list.int2 \
	bitmap.int2 \
	construct.int2 \
	deconstruct.int2 \
	enum.int2 \
	io.int2 \
	map.int2 \
	ops.int2 \
	pair.int2 \
	pretty_printer.int2 \
	random.int2 \
	set.int2 \
	set_ordlist.int2 \
	stream.int2 \
	term.int2 \
	time.int2 \
	tree234.int2 \
	type_desc.int2 \
	univ.int2

ifeq ($(TARGET_ASM),yes)
html_format.mh html_format.mih : html_format.s
else
html_format.mh html_format.mih : html_format.c
endif

ifeq ($(TARGET_ASM),yes)
html_format.module_dep : html_format.s
else
 ifeq ($(findstring il,$(GRADE)),il)
html_format.module_dep : html_format.il
  ifeq ($(findstring java,$(GRADE)),java)
html_format.module_dep : html_format.java
  else
html_format.module_dep : html_format.c
  endif
 endif
endif

html_format.date html_format.date0 : html_format.m \
	bool.int3 \
	builtin.int3 \
	char.int3 \
	float.int3 \
	int.int3 \
	interface.int3 \
	list.int3 \
	maybe.int3 \
	measurements.int3 \
	private_builtin.int3 \
	profile.int3 \
	require.int3 \
	string.int3 \
	top_procs.int3 \
	unit.int3 \
	array.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	io.int3 \
	map.int3 \
	ops.int3 \
	pair.int3 \
	pretty_printer.int3 \
	random.int3 \
	set.int3 \
	set_ordlist.int3 \
	stream.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3

html_format.date0 : html_format.m \
	bool.int3 \
	builtin.int3 \
	char.int3 \
	float.int3 \
	int.int3 \
	interface.int3 \
	list.int3 \
	maybe.int3 \
	measurements.int3 \
	private_builtin.int3 \
	profile.int3 \
	require.int3 \
	string.int3 \
	top_procs.int3 \
	unit.int3 \
	array.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	io.int3 \
	map.int3 \
	ops.int3 \
	pair.int3 \
	pretty_printer.int3 \
	random.int3 \
	set.int3 \
	set_ordlist.int3 \
	stream.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3



html_format.$O :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	array.mh \
	array.mh \
	string.mh \
	io.mh \
	io.mh



html_format.pic_o :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	array.mh \
	array.mh \
	string.mh \
	io.mh \
	io.mh


html_format.int0 : html_format.date0
	@:
html_format.int : html_format.date
	@:
html_format.int2 : html_format.date
	@:
html_format.int3 : html_format.date3
	@:
html_format.opt : html_format.optdate
	@:
html_format.trans_opt : html_format.trans_opt_date
	@:

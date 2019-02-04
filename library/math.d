math.trans_opt_date : \
	private_builtin.trans_opt

math.optdate math.trans_opt_date math.err math.c_date math.s_date math.pic_s_date math.il_date math.java_date : math.m \
	builtin.int \
	exception.int \
	float.int \
	private_builtin.int \
	assoc_list.int2 \
	bitmap.int2 \
	bool.int2 \
	char.int2 \
	construct.int2 \
	deconstruct.int2 \
	enum.int2 \
	io.int2 \
	list.int2 \
	map.int2 \
	maybe.int2 \
	ops.int2 \
	pair.int2 \
	set.int2 \
	set_ordlist.int2 \
	store.int2 \
	stream.int2 \
	string.int2 \
	term.int2 \
	time.int2 \
	tree234.int2 \
	type_desc.int2 \
	univ.int2

math.$O :  \
	array.mh \
	assoc_list.mh \
	benchmarking.mh \
	bitmap.mh \
	bool.mh \
	builtin.mh \
	char.mh \
	construct.mh \
	deconstruct.mh \
	dir.mh \
	enum.mh \
	exception.mh \
	float.mh \
	int.mh \
	integer.mh \
	io.mh \
	lexer.mh \
	list.mh \
	map.mh \
	math.mh \
	maybe.mh \
	mutvar.mh \
	ops.mh \
	pair.mh \
	parser.mh \
	private_builtin.mh \
	random.mh \
	require.mh \
	rtti_implementation.mh \
	set.mh \
	set_ordlist.mh \
	set_tree234.mh \
	solutions.mh \
	std_util.mh \
	store.mh \
	stream.mh \
	string.mh \
	svmap.mh \
	svset.mh \
	table_builtin.mh \
	term.mh \
	term_io.mh \
	time.mh \
	tree234.mh \
	type_desc.mh \
	unit.mh \
	univ.mh \
	varset.mh \
	stream.string_writer.mh

math.trans_opt_date math.err math.c_date math.s_date math.pic_s_date math.il_date math.java_date :  \
	math.opt \
	builtin.opt \
	exception.opt \
	float.opt \
	private_builtin.opt

math.err math.c_date math.s_date math.pic_s_date math.il_date math.java_date :  \
	math.trans_opt \
	builtin.trans_opt \
	exception.trans_opt \
	float.trans_opt \
	private_builtin.trans_opt

ifeq ($(TARGET_ASM),yes)
math.mh math.mih : math.s
else
math.mh math.mih : math.c
endif

ifeq ($(TARGET_ASM),yes)
math.module_dep : math.s
else
 ifeq ($(findstring il,$(GRADE)),il)
math.module_dep : math.il
  ifeq ($(findstring java,$(GRADE)),java)
math.module_dep : math.java
  else
math.module_dep : math.c
  endif
 endif
endif

math.date math.date0 : math.m \
	builtin.int3 \
	exception.int3 \
	float.int3 \
	private_builtin.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	bool.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	io.int3 \
	list.int3 \
	map.int3 \
	maybe.int3 \
	ops.int3 \
	pair.int3 \
	set.int3 \
	set_ordlist.int3 \
	store.int3 \
	stream.int3 \
	string.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3

math.date0 : math.m \
	builtin.int3 \
	exception.int3 \
	float.int3 \
	private_builtin.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	bool.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	io.int3 \
	list.int3 \
	map.int3 \
	maybe.int3 \
	ops.int3 \
	pair.int3 \
	set.int3 \
	set_ordlist.int3 \
	store.int3 \
	stream.int3 \
	string.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3



math.$O :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh \
	math.mh



math.pic_o :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh \
	math.mh


math.int0 : math.date0
	@:
math.int : math.date
	@:
math.int2 : math.date
	@:
math.int3 : math.date3
	@:
math.opt : math.optdate
	@:
math.trans_opt : math.trans_opt_date
	@:

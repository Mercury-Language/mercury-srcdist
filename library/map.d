map.trans_opt_date : \
	pair.trans_opt \
	private_builtin.trans_opt \
	require.trans_opt \
	set.trans_opt \
	string.trans_opt \
	svmap.trans_opt \
	svset.trans_opt \
	term.trans_opt \
	tree234.trans_opt

map.optdate map.trans_opt_date map.err map.c_date map.s_date map.pic_s_date map.il_date map.java_date : map.m \
	assoc_list.int \
	builtin.int \
	list.int \
	pair.int \
	private_builtin.int \
	require.int \
	set.int \
	string.int \
	svmap.int \
	svset.int \
	term.int \
	tree234.int \
	bitmap.int2 \
	bool.int2 \
	char.int2 \
	construct.int2 \
	deconstruct.int2 \
	enum.int2 \
	io.int2 \
	maybe.int2 \
	ops.int2 \
	pretty_printer.int2 \
	set_ordlist.int2 \
	stream.int2 \
	time.int2 \
	type_desc.int2 \
	univ.int2

map.$O :  \
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
	erlang_rtti_implementation.mh \
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
	pretty_printer.mh \
	private_builtin.mh \
	random.mh \
	require.mh \
	rtti_implementation.mh \
	set.mh \
	set_ordlist.mh \
	set_tree234.mh \
	solutions.mh \
	std_util.mh \
	stm_builtin.mh \
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

map.trans_opt_date map.err map.c_date map.s_date map.pic_s_date map.il_date map.java_date :  \
	map.opt \
	assoc_list.opt \
	builtin.opt \
	list.opt \
	pair.opt \
	private_builtin.opt \
	require.opt \
	set.opt \
	string.opt \
	svmap.opt \
	svset.opt \
	term.opt \
	tree234.opt

map.err map.c_date map.s_date map.pic_s_date map.il_date map.java_date :  \
	map.trans_opt \
	assoc_list.trans_opt \
	builtin.trans_opt \
	list.trans_opt \
	pair.trans_opt \
	private_builtin.trans_opt \
	require.trans_opt \
	set.trans_opt \
	string.trans_opt \
	svmap.trans_opt \
	svset.trans_opt \
	term.trans_opt \
	tree234.trans_opt

ifeq ($(TARGET_ASM),yes)
map.mh map.mih : map.s
else
map.mh map.mih : map.c
endif

ifeq ($(TARGET_ASM),yes)
map.module_dep : map.s
else
 ifeq ($(findstring il,$(GRADE)),il)
map.module_dep : map.il
  ifeq ($(findstring java,$(GRADE)),java)
map.module_dep : map.java
  else
map.module_dep : map.c
  endif
 endif
endif

map.date map.date0 : map.m \
	assoc_list.int3 \
	builtin.int3 \
	list.int3 \
	pair.int3 \
	private_builtin.int3 \
	require.int3 \
	set.int3 \
	string.int3 \
	svmap.int3 \
	svset.int3 \
	term.int3 \
	tree234.int3 \
	bitmap.int3 \
	bool.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	io.int3 \
	maybe.int3 \
	ops.int3 \
	pretty_printer.int3 \
	set_ordlist.int3 \
	stream.int3 \
	time.int3 \
	type_desc.int3 \
	univ.int3

map.date0 : map.m \
	assoc_list.int3 \
	builtin.int3 \
	list.int3 \
	pair.int3 \
	private_builtin.int3 \
	require.int3 \
	set.int3 \
	string.int3 \
	svmap.int3 \
	svset.int3 \
	term.int3 \
	tree234.int3 \
	bitmap.int3 \
	bool.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	io.int3 \
	maybe.int3 \
	ops.int3 \
	pretty_printer.int3 \
	set_ordlist.int3 \
	stream.int3 \
	time.int3 \
	type_desc.int3 \
	univ.int3



map.$O :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh



map.pic_o :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh


map.int0 : map.date0
	@:
map.int : map.date
	@:
map.int2 : map.date
	@:
map.int3 : map.date3
	@:
map.opt : map.optdate
	@:
map.trans_opt : map.trans_opt_date
	@:

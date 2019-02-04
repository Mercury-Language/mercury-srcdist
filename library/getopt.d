getopt.trans_opt_date : \
	bool.trans_opt \
	builtin.trans_opt \
	char.trans_opt \
	list.trans_opt \
	map.trans_opt \
	maybe.trans_opt \
	pair.trans_opt \
	private_builtin.trans_opt \
	require.trans_opt \
	set.trans_opt \
	solutions.trans_opt \
	string.trans_opt \
	svset.trans_opt

getopt.optdate getopt.trans_opt_date getopt.err getopt.c_date getopt.s_date getopt.pic_s_date getopt.il_date getopt.java_date : getopt.m \
	bool.int \
	builtin.int \
	char.int \
	list.int \
	map.int \
	maybe.int \
	pair.int \
	private_builtin.int \
	require.int \
	set.int \
	solutions.int \
	string.int \
	svset.int \
	assoc_list.int2 \
	bitmap.int2 \
	construct.int2 \
	deconstruct.int2 \
	enum.int2 \
	io.int2 \
	ops.int2 \
	pretty_printer.int2 \
	set_ordlist.int2 \
	stream.int2 \
	term.int2 \
	time.int2 \
	tree234.int2 \
	type_desc.int2 \
	univ.int2

getopt.$O :  \
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

getopt.trans_opt_date getopt.err getopt.c_date getopt.s_date getopt.pic_s_date getopt.il_date getopt.java_date :  \
	getopt.opt \
	bool.opt \
	builtin.opt \
	char.opt \
	list.opt \
	map.opt \
	maybe.opt \
	pair.opt \
	private_builtin.opt \
	require.opt \
	set.opt \
	solutions.opt \
	string.opt \
	svset.opt

getopt.err getopt.c_date getopt.s_date getopt.pic_s_date getopt.il_date getopt.java_date :  \
	getopt.trans_opt \
	bool.trans_opt \
	builtin.trans_opt \
	char.trans_opt \
	list.trans_opt \
	map.trans_opt \
	maybe.trans_opt \
	pair.trans_opt \
	private_builtin.trans_opt \
	require.trans_opt \
	set.trans_opt \
	solutions.trans_opt \
	string.trans_opt \
	svset.trans_opt

ifeq ($(TARGET_ASM),yes)
getopt.mh getopt.mih : getopt.s
else
getopt.mh getopt.mih : getopt.c
endif

ifeq ($(TARGET_ASM),yes)
getopt.module_dep : getopt.s
else
 ifeq ($(findstring il,$(GRADE)),il)
getopt.module_dep : getopt.il
  ifeq ($(findstring java,$(GRADE)),java)
getopt.module_dep : getopt.java
  else
getopt.module_dep : getopt.c
  endif
 endif
endif

getopt.date getopt.date0 : getopt.m \
	bool.int3 \
	builtin.int3 \
	char.int3 \
	list.int3 \
	map.int3 \
	maybe.int3 \
	pair.int3 \
	private_builtin.int3 \
	require.int3 \
	set.int3 \
	solutions.int3 \
	string.int3 \
	svset.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	io.int3 \
	ops.int3 \
	pretty_printer.int3 \
	set_ordlist.int3 \
	stream.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3

getopt.date0 : getopt.m \
	bool.int3 \
	builtin.int3 \
	char.int3 \
	list.int3 \
	map.int3 \
	maybe.int3 \
	pair.int3 \
	private_builtin.int3 \
	require.int3 \
	set.int3 \
	solutions.int3 \
	string.int3 \
	svset.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	io.int3 \
	ops.int3 \
	pretty_printer.int3 \
	set_ordlist.int3 \
	stream.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3



getopt.$O :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh



getopt.pic_o :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh


getopt.int0 : getopt.date0
	@:
getopt.int : getopt.date
	@:
getopt.int2 : getopt.date
	@:
getopt.int3 : getopt.date3
	@:
getopt.opt : getopt.optdate
	@:
getopt.trans_opt : getopt.trans_opt_date
	@:

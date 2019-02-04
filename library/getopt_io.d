getopt_io.trans_opt_date : \
	bool.trans_opt \
	builtin.trans_opt \
	char.trans_opt \
	io.trans_opt \
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

getopt_io.optdate getopt_io.trans_opt_date getopt_io.err getopt_io.c_date getopt_io.s_date getopt_io.pic_s_date getopt_io.il_date getopt_io.java_date : getopt_io.m \
	bool.int \
	builtin.int \
	char.int \
	io.int \
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
	ops.int2 \
	pretty_printer.int2 \
	set_ordlist.int2 \
	stream.int2 \
	term.int2 \
	time.int2 \
	tree234.int2 \
	type_desc.int2 \
	univ.int2

getopt_io.$O :  \
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

getopt_io.trans_opt_date getopt_io.err getopt_io.c_date getopt_io.s_date getopt_io.pic_s_date getopt_io.il_date getopt_io.java_date :  \
	getopt_io.opt \
	bool.opt \
	builtin.opt \
	char.opt \
	io.opt \
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

getopt_io.err getopt_io.c_date getopt_io.s_date getopt_io.pic_s_date getopt_io.il_date getopt_io.java_date :  \
	getopt_io.trans_opt \
	bool.trans_opt \
	builtin.trans_opt \
	char.trans_opt \
	io.trans_opt \
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
getopt_io.mh getopt_io.mih : getopt_io.s
else
getopt_io.mh getopt_io.mih : getopt_io.c
endif

ifeq ($(TARGET_ASM),yes)
getopt_io.module_dep : getopt_io.s
else
 ifeq ($(findstring il,$(GRADE)),il)
getopt_io.module_dep : getopt_io.il
  ifeq ($(findstring java,$(GRADE)),java)
getopt_io.module_dep : getopt_io.java
  else
getopt_io.module_dep : getopt_io.c
  endif
 endif
endif

getopt_io.date getopt_io.date0 : getopt_io.m \
	bool.int3 \
	builtin.int3 \
	char.int3 \
	io.int3 \
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
	ops.int3 \
	pretty_printer.int3 \
	set_ordlist.int3 \
	stream.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3

getopt_io.date0 : getopt_io.m \
	bool.int3 \
	builtin.int3 \
	char.int3 \
	io.int3 \
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
	ops.int3 \
	pretty_printer.int3 \
	set_ordlist.int3 \
	stream.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3



getopt_io.$O :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh



getopt_io.pic_o :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh


getopt_io.int0 : getopt_io.date0
	@:
getopt_io.int : getopt_io.date
	@:
getopt_io.int2 : getopt_io.date
	@:
getopt_io.int3 : getopt_io.date3
	@:
getopt_io.opt : getopt_io.optdate
	@:
getopt_io.trans_opt : getopt_io.trans_opt_date
	@:

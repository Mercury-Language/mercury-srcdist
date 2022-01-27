lazy.trans_opt_date : \
	builtin.trans_opt \
	mutvar.trans_opt \
	private_builtin.trans_opt

lazy.optdate lazy.trans_opt_date lazy.err lazy.c_date lazy.s_date lazy.pic_s_date lazy.il_date lazy.java_date : lazy.m \
	builtin.int \
	mutvar.int \
	private_builtin.int

lazy.$O :  \
	array.mh \
	assoc_list.mh \
	benchmarking.mh \
	bitmap.mh \
	bool.mh \
	builtin.mh \
	calendar.mh \
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
	table_builtin.mh \
	term.mh \
	term_io.mh \
	time.mh \
	tree234.mh \
	type_desc.mh \
	unit.mh \
	univ.mh \
	varset.mh \
	version_array.mh \
	stream.string_writer.mh \
	string.format.mh \
	string.parse_runtime.mh \
	string.parse_util.mh \
	string.to_string.mh

lazy.trans_opt_date lazy.err lazy.c_date lazy.s_date lazy.pic_s_date lazy.il_date lazy.java_date :  \
	lazy.opt \
	builtin.opt \
	mutvar.opt \
	private_builtin.opt

lazy.err lazy.c_date lazy.s_date lazy.pic_s_date lazy.il_date lazy.java_date :  \
	lazy.trans_opt \
	builtin.trans_opt \
	mutvar.trans_opt \
	private_builtin.trans_opt

lazy.pic_o lazy.$O : \
	array.mih \
	assoc_list.mih \
	benchmarking.mih \
	bitmap.mih \
	bool.mih \
	builtin.mih \
	calendar.mih \
	char.mih \
	construct.mih \
	deconstruct.mih \
	dir.mih \
	enum.mih \
	erlang_rtti_implementation.mih \
	exception.mih \
	float.mih \
	int.mih \
	integer.mih \
	io.mih \
	lexer.mih \
	list.mih \
	map.mih \
	math.mih \
	maybe.mih \
	mutvar.mih \
	ops.mih \
	pair.mih \
	parser.mih \
	pretty_printer.mih \
	private_builtin.mih \
	random.mih \
	require.mih \
	rtti_implementation.mih \
	set.mih \
	set_ordlist.mih \
	set_tree234.mih \
	solutions.mih \
	std_util.mih \
	stm_builtin.mih \
	store.mih \
	stream.mih \
	string.mih \
	table_builtin.mih \
	term.mih \
	term_io.mih \
	time.mih \
	tree234.mih \
	type_desc.mih \
	unit.mih \
	univ.mih \
	varset.mih \
	version_array.mih \
	stream.string_writer.mih \
	string.format.mih \
	string.parse_runtime.mih \
	string.parse_util.mih \
	string.to_string.mih

lazy.mh lazy.mih : lazy.c


ifeq ($(findstring il,$(GRADE)),il)
lazy.module_dep : lazy.il
else
 ifeq ($(findstring java,$(GRADE)),java)
lazy.module_dep : jmercury/lazy.java
 else
lazy.module_dep : lazy.c
 endif
endif


lazy.date lazy.date0 : lazy.m \
	builtin.int3 \
	mutvar.int3 \
	private_builtin.int3

lazy.date0 : lazy.m \
	builtin.int3 \
	mutvar.int3 \
	private_builtin.int3


lazy.int0 : lazy.date0
	@:
lazy.int : lazy.date
	@:
lazy.int2 : lazy.date
	@:
lazy.int3 : lazy.date3
	@:
lazy.opt : lazy.optdate
	@:
lazy.trans_opt : lazy.trans_opt_date
	@:

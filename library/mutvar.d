mutvar.trans_opt_date : \
	private_builtin.trans_opt

mutvar.optdate mutvar.trans_opt_date mutvar.err mutvar.c_date mutvar.s_date mutvar.pic_s_date mutvar.il_date mutvar.java_date : mutvar.m \
	builtin.int \
	private_builtin.int

mutvar.$O :  \
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

mutvar.trans_opt_date mutvar.err mutvar.c_date mutvar.s_date mutvar.pic_s_date mutvar.il_date mutvar.java_date :  \
	mutvar.opt \
	builtin.opt \
	private_builtin.opt

mutvar.err mutvar.c_date mutvar.s_date mutvar.pic_s_date mutvar.il_date mutvar.java_date :  \
	mutvar.trans_opt \
	builtin.trans_opt \
	private_builtin.trans_opt

mutvar.pic_o mutvar.$O : \
	array.mih \
	assoc_list.mih \
	benchmarking.mih \
	bitmap.mih \
	bool.mih \
	builtin.mih \
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

mutvar.mh mutvar.mih : mutvar.c


ifeq ($(findstring il,$(GRADE)),il)
mutvar.module_dep : mutvar.il
else
 ifeq ($(findstring java,$(GRADE)),java)
mutvar.module_dep : jmercury/mutvar.java
 else
mutvar.module_dep : mutvar.c
 endif
endif


mutvar.date mutvar.date0 : mutvar.m \
	builtin.int3 \
	private_builtin.int3

mutvar.date0 : mutvar.m \
	builtin.int3 \
	private_builtin.int3



mutvar.$O :  \
	mutvar.mh



mutvar.pic_o :  \
	mutvar.mh


mutvar.int0 : mutvar.date0
	@:
mutvar.int : mutvar.date
	@:
mutvar.int2 : mutvar.date
	@:
mutvar.int3 : mutvar.date3
	@:
mutvar.opt : mutvar.optdate
	@:
mutvar.trans_opt : mutvar.trans_opt_date
	@:

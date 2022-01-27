list.trans_opt_date : \
	pretty_printer.trans_opt \
	private_builtin.trans_opt \
	require.trans_opt \
	set_tree234.trans_opt \
	string.trans_opt \
	term.trans_opt

list.optdate list.trans_opt_date list.err list.c_date list.s_date list.pic_s_date list.il_date list.java_date : list.m \
	builtin.int \
	int.int \
	pretty_printer.int \
	private_builtin.int \
	require.int \
	set_tree234.int \
	string.int \
	term.int \
	array.int2 \
	assoc_list.int2 \
	bitmap.int2 \
	bool.int2 \
	char.int2 \
	construct.int2 \
	deconstruct.int2 \
	enum.int2 \
	io.int2 \
	map.int2 \
	maybe.int2 \
	ops.int2 \
	pair.int2 \
	random.int2 \
	rtti_implementation.int2 \
	set.int2 \
	set_ordlist.int2 \
	stream.int2 \
	time.int2 \
	tree234.int2 \
	type_desc.int2 \
	univ.int2

list.$O :  \
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
	stream.string_writer.mh

list.trans_opt_date list.err list.c_date list.s_date list.pic_s_date list.il_date list.java_date :  \
	list.opt \
	builtin.opt \
	int.opt \
	pretty_printer.opt \
	private_builtin.opt \
	require.opt \
	set_tree234.opt \
	string.opt \
	term.opt

list.err list.c_date list.s_date list.pic_s_date list.il_date list.java_date :  \
	list.trans_opt \
	builtin.trans_opt \
	int.trans_opt \
	pretty_printer.trans_opt \
	private_builtin.trans_opt \
	require.trans_opt \
	set_tree234.trans_opt \
	string.trans_opt \
	term.trans_opt

list.mh list.mih : list.c


ifeq ($(findstring il,$(GRADE)),il)
list.module_dep : list.il
else
 ifeq ($(findstring java,$(GRADE)),java)
list.module_dep : jmercury/list.java
 else
list.module_dep : list.c
 endif
endif


list.date list.date0 : list.m \
	builtin.int3 \
	int.int3 \
	pretty_printer.int3 \
	private_builtin.int3 \
	require.int3 \
	set_tree234.int3 \
	string.int3 \
	term.int3 \
	array.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	bool.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	io.int3 \
	map.int3 \
	maybe.int3 \
	ops.int3 \
	pair.int3 \
	random.int3 \
	rtti_implementation.int3 \
	set.int3 \
	set_ordlist.int3 \
	stream.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3

list.date0 : list.m \
	builtin.int3 \
	int.int3 \
	pretty_printer.int3 \
	private_builtin.int3 \
	require.int3 \
	set_tree234.int3 \
	string.int3 \
	term.int3 \
	array.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	bool.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	io.int3 \
	map.int3 \
	maybe.int3 \
	ops.int3 \
	pair.int3 \
	random.int3 \
	rtti_implementation.int3 \
	set.int3 \
	set_ordlist.int3 \
	stream.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3



list.$O :  \
	array.mh \
	array.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	time.mh \
	io.mh \
	io.mh \
	list.mh



list.pic_o :  \
	array.mh \
	array.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	time.mh \
	io.mh \
	io.mh \
	list.mh


list.int0 : list.date0
	@:
list.int : list.date
	@:
list.int2 : list.date
	@:
list.int3 : list.date3
	@:
list.opt : list.optdate
	@:
list.trans_opt : list.trans_opt_date
	@:

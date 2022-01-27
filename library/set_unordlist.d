set_unordlist.trans_opt_date : \
	bool.trans_opt \
	builtin.trans_opt \
	list.trans_opt \
	private_builtin.trans_opt

set_unordlist.optdate set_unordlist.trans_opt_date set_unordlist.err set_unordlist.c_date set_unordlist.s_date set_unordlist.pic_s_date set_unordlist.il_date set_unordlist.java_date : set_unordlist.m \
	bool.int \
	builtin.int \
	list.int \
	private_builtin.int \
	assoc_list.int2 \
	bitmap.int2 \
	char.int2 \
	construct.int2 \
	deconstruct.int2 \
	enum.int2 \
	io.int2 \
	map.int2 \
	maybe.int2 \
	ops.int2 \
	pair.int2 \
	pretty_printer.int2 \
	rtti_implementation.int2 \
	set.int2 \
	set_ordlist.int2 \
	stream.int2 \
	string.int2 \
	term.int2 \
	time.int2 \
	tree234.int2 \
	type_desc.int2 \
	univ.int2

set_unordlist.$O :  \
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

set_unordlist.trans_opt_date set_unordlist.err set_unordlist.c_date set_unordlist.s_date set_unordlist.pic_s_date set_unordlist.il_date set_unordlist.java_date :  \
	set_unordlist.opt \
	bool.opt \
	builtin.opt \
	list.opt \
	private_builtin.opt

set_unordlist.err set_unordlist.c_date set_unordlist.s_date set_unordlist.pic_s_date set_unordlist.il_date set_unordlist.java_date :  \
	set_unordlist.trans_opt \
	bool.trans_opt \
	builtin.trans_opt \
	list.trans_opt \
	private_builtin.trans_opt

set_unordlist.pic_o set_unordlist.$O : \
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

set_unordlist.mh set_unordlist.mih : set_unordlist.c


ifeq ($(findstring il,$(GRADE)),il)
set_unordlist.module_dep : set_unordlist.il
else
 ifeq ($(findstring java,$(GRADE)),java)
set_unordlist.module_dep : jmercury/set_unordlist.java
 else
set_unordlist.module_dep : set_unordlist.c
 endif
endif


set_unordlist.date set_unordlist.date0 : set_unordlist.m \
	bool.int3 \
	builtin.int3 \
	list.int3 \
	private_builtin.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	io.int3 \
	map.int3 \
	maybe.int3 \
	ops.int3 \
	pair.int3 \
	pretty_printer.int3 \
	rtti_implementation.int3 \
	set.int3 \
	set_ordlist.int3 \
	stream.int3 \
	string.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3

set_unordlist.date0 : set_unordlist.m \
	bool.int3 \
	builtin.int3 \
	list.int3 \
	private_builtin.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	io.int3 \
	map.int3 \
	maybe.int3 \
	ops.int3 \
	pair.int3 \
	pretty_printer.int3 \
	rtti_implementation.int3 \
	set.int3 \
	set_ordlist.int3 \
	stream.int3 \
	string.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3



set_unordlist.$O :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	time.mh \
	io.mh \
	io.mh



set_unordlist.pic_o :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	time.mh \
	io.mh \
	io.mh


set_unordlist.int0 : set_unordlist.date0
	@:
set_unordlist.int : set_unordlist.date
	@:
set_unordlist.int2 : set_unordlist.date
	@:
set_unordlist.int3 : set_unordlist.date3
	@:
set_unordlist.opt : set_unordlist.optdate
	@:
set_unordlist.trans_opt : set_unordlist.trans_opt_date
	@:

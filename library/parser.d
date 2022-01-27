parser.trans_opt_date : \
	private_builtin.trans_opt \
	require.trans_opt \
	string.trans_opt \
	term.trans_opt \
	term_io.trans_opt \
	varset.trans_opt

parser.optdate parser.trans_opt_date parser.err parser.c_date parser.s_date parser.pic_s_date parser.il_date parser.java_date : parser.m \
	bool.int \
	builtin.int \
	char.int \
	float.int \
	int.int \
	io.int \
	lexer.int \
	list.int \
	map.int \
	maybe.int \
	ops.int \
	private_builtin.int \
	require.int \
	string.int \
	term.int \
	term_io.int \
	varset.int \
	array.int2 \
	assoc_list.int2 \
	bitmap.int2 \
	construct.int2 \
	deconstruct.int2 \
	enum.int2 \
	pair.int2 \
	pretty_printer.int2 \
	random.int2 \
	rtti_implementation.int2 \
	set.int2 \
	set_ordlist.int2 \
	stream.int2 \
	time.int2 \
	tree234.int2 \
	type_desc.int2 \
	univ.int2

parser.$O :  \
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
	string.to_string.mh

parser.trans_opt_date parser.err parser.c_date parser.s_date parser.pic_s_date parser.il_date parser.java_date :  \
	parser.opt \
	bool.opt \
	builtin.opt \
	char.opt \
	float.opt \
	int.opt \
	io.opt \
	lexer.opt \
	list.opt \
	map.opt \
	maybe.opt \
	ops.opt \
	private_builtin.opt \
	require.opt \
	string.opt \
	term.opt \
	term_io.opt \
	varset.opt

parser.err parser.c_date parser.s_date parser.pic_s_date parser.il_date parser.java_date :  \
	parser.trans_opt \
	bool.trans_opt \
	builtin.trans_opt \
	char.trans_opt \
	float.trans_opt \
	int.trans_opt \
	io.trans_opt \
	lexer.trans_opt \
	list.trans_opt \
	map.trans_opt \
	maybe.trans_opt \
	ops.trans_opt \
	private_builtin.trans_opt \
	require.trans_opt \
	string.trans_opt \
	term.trans_opt \
	term_io.trans_opt \
	varset.trans_opt

parser.pic_o parser.$O : \
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
	string.to_string.mih

parser.mh parser.mih : parser.c


ifeq ($(findstring il,$(GRADE)),il)
parser.module_dep : parser.il
else
 ifeq ($(findstring java,$(GRADE)),java)
parser.module_dep : jmercury/parser.java
 else
parser.module_dep : parser.c
 endif
endif


parser.date parser.date0 : parser.m \
	bool.int3 \
	builtin.int3 \
	char.int3 \
	float.int3 \
	int.int3 \
	io.int3 \
	lexer.int3 \
	list.int3 \
	map.int3 \
	maybe.int3 \
	ops.int3 \
	private_builtin.int3 \
	require.int3 \
	string.int3 \
	term.int3 \
	term_io.int3 \
	varset.int3 \
	array.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	pair.int3 \
	pretty_printer.int3 \
	random.int3 \
	rtti_implementation.int3 \
	set.int3 \
	set_ordlist.int3 \
	stream.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3

parser.date0 : parser.m \
	bool.int3 \
	builtin.int3 \
	char.int3 \
	float.int3 \
	int.int3 \
	io.int3 \
	lexer.int3 \
	list.int3 \
	map.int3 \
	maybe.int3 \
	ops.int3 \
	private_builtin.int3 \
	require.int3 \
	string.int3 \
	term.int3 \
	term_io.int3 \
	varset.int3 \
	array.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	pair.int3 \
	pretty_printer.int3 \
	random.int3 \
	rtti_implementation.int3 \
	set.int3 \
	set_ordlist.int3 \
	stream.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3



parser.$O :  \
	array.mh \
	array.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	time.mh \
	io.mh \
	io.mh



parser.pic_o :  \
	array.mh \
	array.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	time.mh \
	io.mh \
	io.mh


parser.int0 : parser.date0
	@:
parser.int : parser.date
	@:
parser.int2 : parser.date
	@:
parser.int3 : parser.date3
	@:
parser.opt : parser.optdate
	@:
parser.trans_opt : parser.trans_opt_date
	@:

string.to_string.trans_opt_date :

string.to_string.optdate string.to_string.trans_opt_date string.to_string.err string.to_string.c_date string.to_string.s_date string.to_string.pic_s_date string.to_string.il_date string.to_string.java_date : string.to_string.m \
	string.int0 \
	array.int \
	assoc_list.int \
	bitmap.int \
	builtin.int \
	char.int \
	deconstruct.int \
	int.int \
	list.int \
	maybe.int \
	ops.int \
	pair.int \
	pretty_printer.int \
	private_builtin.int \
	require.int \
	rtti_implementation.int \
	std_util.int \
	stream.int \
	term_io.int \
	type_desc.int \
	univ.int \
	version_array.int \
	string.format.int \
	string.parse_util.int \
	bool.int2 \
	construct.int2 \
	enum.int2 \
	integer.int2 \
	io.int2 \
	map.int2 \
	random.int2 \
	set.int2 \
	set_ordlist.int2 \
	term.int2 \
	time.int2 \
	tree234.int2 \
	varset.int2

string.to_string.$O :  \
	array.mh \
	assoc_list.mh \
	benchmarking.mh \
	bitmap.mh \
	bool.mh \
	builtin.mh \
	calendar.mh \
	char.mh \
	construct.mh \
	cord.mh \
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
	term_conversion.mh \
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

string.to_string.trans_opt_date string.to_string.err string.to_string.c_date string.to_string.s_date string.to_string.pic_s_date string.to_string.il_date string.to_string.java_date :  \
	string.to_string.opt \
	array.opt \
	assoc_list.opt \
	bitmap.opt \
	builtin.opt \
	char.opt \
	deconstruct.opt \
	int.opt \
	list.opt \
	maybe.opt \
	ops.opt \
	pair.opt \
	pretty_printer.opt \
	private_builtin.opt \
	require.opt \
	rtti_implementation.opt \
	std_util.opt \
	stream.opt \
	term_io.opt \
	type_desc.opt \
	univ.opt \
	version_array.opt \
	string.format.opt \
	string.parse_util.opt \
	string.int0

string.to_string.err string.to_string.c_date string.to_string.s_date string.to_string.pic_s_date string.to_string.il_date string.to_string.java_date :  \
	string.to_string.trans_opt \
	array.trans_opt \
	assoc_list.trans_opt \
	bitmap.trans_opt \
	builtin.trans_opt \
	char.trans_opt \
	deconstruct.trans_opt \
	int.trans_opt \
	list.trans_opt \
	maybe.trans_opt \
	ops.trans_opt \
	pair.trans_opt \
	pretty_printer.trans_opt \
	private_builtin.trans_opt \
	require.trans_opt \
	rtti_implementation.trans_opt \
	std_util.trans_opt \
	stream.trans_opt \
	term_io.trans_opt \
	type_desc.trans_opt \
	univ.trans_opt \
	version_array.trans_opt \
	string.format.trans_opt \
	string.parse_util.trans_opt

string.to_string.pic_o string.to_string.$O : \
	array.mih \
	assoc_list.mih \
	benchmarking.mih \
	bitmap.mih \
	bool.mih \
	builtin.mih \
	calendar.mih \
	char.mih \
	construct.mih \
	cord.mih \
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
	term_conversion.mih \
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

string.to_string.mh string.to_string.mih : string.to_string.c


ifeq ($(findstring il,$(GRADE)),il)
string.to_string.module_dep : string.to_string.il
else
 ifeq ($(findstring java,$(GRADE)),java)
string.to_string.module_dep : jmercury/string__to_string.java
 else
string.to_string.module_dep : string.to_string.c
 endif
endif


string.to_string.date string.to_string.date0 \
	string.date : string.to_string.m \
	string.int0 \
	array.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	builtin.int3 \
	char.int3 \
	deconstruct.int3 \
	int.int3 \
	list.int3 \
	maybe.int3 \
	ops.int3 \
	pair.int3 \
	pretty_printer.int3 \
	private_builtin.int3 \
	require.int3 \
	rtti_implementation.int3 \
	std_util.int3 \
	stream.int3 \
	term_io.int3 \
	type_desc.int3 \
	univ.int3 \
	version_array.int3 \
	string.format.int3 \
	string.parse_util.int3 \
	bool.int3 \
	construct.int3 \
	enum.int3 \
	integer.int3 \
	io.int3 \
	map.int3 \
	random.int3 \
	set.int3 \
	set_ordlist.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	varset.int3

string.to_string.date0 \
	string.date0 : string.to_string.m \
	array.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	builtin.int3 \
	char.int3 \
	deconstruct.int3 \
	int.int3 \
	list.int3 \
	maybe.int3 \
	ops.int3 \
	pair.int3 \
	pretty_printer.int3 \
	private_builtin.int3 \
	require.int3 \
	rtti_implementation.int3 \
	std_util.int3 \
	stream.int3 \
	term_io.int3 \
	type_desc.int3 \
	univ.int3 \
	version_array.int3 \
	string.format.int3 \
	string.parse_util.int3 \
	bool.int3 \
	construct.int3 \
	enum.int3 \
	integer.int3 \
	io.int3 \
	map.int3 \
	random.int3 \
	set.int3 \
	set_ordlist.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	varset.int3



string.to_string.$O :  \
	string.mh \
	array.mh \
	bitmap.mh \
	version_array.mh \
	io.mh \
	string.mh \
	time.mh



string.to_string.pic_o :  \
	string.mh \
	array.mh \
	bitmap.mh \
	version_array.mh \
	io.mh \
	string.mh \
	time.mh


string.to_string.int0 : string.to_string.date0
	@:
string.to_string.int : string.to_string.date
	@:
string.to_string.int2 : string.to_string.date
	@:
string.to_string.int3 : string.to_string.date3
	@:
string.to_string.opt : string.to_string.optdate
	@:
string.to_string.trans_opt : string.to_string.trans_opt_date
	@:

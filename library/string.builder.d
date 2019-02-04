string.builder.trans_opt_date : \
	array.trans_opt \
	assoc_list.trans_opt \
	bool.trans_opt \
	builtin.trans_opt \
	char.trans_opt \
	deconstruct.trans_opt \
	float.trans_opt \
	int.trans_opt \
	integer.trans_opt \
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
	univ.trans_opt

string.builder.optdate string.builder.trans_opt_date string.builder.err string.builder.c_date string.builder.s_date string.builder.pic_s_date string.builder.il_date string.builder.java_date : string.builder.m \
	string.int0 \
	array.int \
	assoc_list.int \
	bool.int \
	builtin.int \
	char.int \
	deconstruct.int \
	float.int \
	int.int \
	integer.int \
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
	bitmap.int2 \
	construct.int2 \
	enum.int2 \
	io.int2 \
	map.int2 \
	random.int2 \
	set.int2 \
	set_ordlist.int2 \
	term.int2 \
	time.int2 \
	tree234.int2 \
	varset.int2

string.builder.$O :  \
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

string.builder.trans_opt_date string.builder.err string.builder.c_date string.builder.s_date string.builder.pic_s_date string.builder.il_date string.builder.java_date :  \
	string.builder.opt \
	array.opt \
	assoc_list.opt \
	bool.opt \
	builtin.opt \
	char.opt \
	deconstruct.opt \
	float.opt \
	int.opt \
	integer.opt \
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
	string.int0

string.builder.err string.builder.c_date string.builder.s_date string.builder.pic_s_date string.builder.il_date string.builder.java_date :  \
	string.builder.trans_opt \
	array.trans_opt \
	assoc_list.trans_opt \
	bool.trans_opt \
	builtin.trans_opt \
	char.trans_opt \
	deconstruct.trans_opt \
	float.trans_opt \
	int.trans_opt \
	integer.trans_opt \
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
	univ.trans_opt

ifeq ($(TARGET_ASM),yes)
string.builder.mh string.builder.mih : string.builder.s
else
string.builder.mh string.builder.mih : string.builder.c
endif

ifeq ($(TARGET_ASM),yes)
string.builder.module_dep : string.builder.s
else
 ifeq ($(findstring il,$(GRADE)),il)
string.builder.module_dep : string.builder.il
  ifeq ($(findstring java,$(GRADE)),java)
string.builder.module_dep : mercury/string_/builder.java
  else
string.builder.module_dep : string.builder.c
  endif
 endif
endif

string.builder.date string.builder.date0 \
	string.date : string.builder.m \
	string.int0 \
	array.int3 \
	assoc_list.int3 \
	bool.int3 \
	builtin.int3 \
	char.int3 \
	deconstruct.int3 \
	float.int3 \
	int.int3 \
	integer.int3 \
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
	bitmap.int3 \
	construct.int3 \
	enum.int3 \
	io.int3 \
	map.int3 \
	random.int3 \
	set.int3 \
	set_ordlist.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	varset.int3

string.builder.date0 \
	string.date0 : string.builder.m \
	array.int3 \
	assoc_list.int3 \
	bool.int3 \
	builtin.int3 \
	char.int3 \
	deconstruct.int3 \
	float.int3 \
	int.int3 \
	integer.int3 \
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
	bitmap.int3 \
	construct.int3 \
	enum.int3 \
	io.int3 \
	map.int3 \
	random.int3 \
	set.int3 \
	set_ordlist.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	varset.int3



string.builder.$O :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh \
	array.mh \
	array.mh \
	string.mh



string.builder.pic_o :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh \
	array.mh \
	array.mh \
	string.mh


string.builder.int0 : string.builder.date0
	@:
string.builder.int : string.builder.date
	@:
string.builder.int2 : string.builder.date
	@:
string.builder.int3 : string.builder.date3
	@:
string.builder.opt : string.builder.optdate
	@:
string.builder.trans_opt : string.builder.trans_opt_date
	@:

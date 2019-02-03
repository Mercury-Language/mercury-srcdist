string.trans_opt_date : \
	term_io.trans_opt \
	type_desc.trans_opt \
	univ.trans_opt

string.optdate string.trans_opt_date string.err string.c_date string.s_date string.pic_s_date string.il_date string.java_date : string.m string.int0 \
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
	stream.int2 \
	term.int2 \
	time.int2 \
	tree234.int2 \
	varset.int2

string.$O :  \
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

string.trans_opt_date string.err string.c_date string.s_date string.pic_s_date string.il_date string.java_date :  \
	string.opt \
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
	term_io.opt \
	type_desc.opt \
	univ.opt

string.err string.c_date string.s_date string.pic_s_date string.il_date string.java_date :  \
	string.trans_opt \
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
	term_io.trans_opt \
	type_desc.trans_opt \
	univ.trans_opt

ifeq ($(TARGET_ASM),yes)
string.mh string.mih : string.s
else
string.mh string.mih : string.c
endif

ifeq ($(TARGET_ASM),yes)
string.module_dep : string.s
else
 ifeq ($(findstring il,$(GRADE)),il)
string.module_dep : string.il
 else
  ifeq ($(findstring java,$(GRADE)),java)
string.module_dep : jmercury/string.java
  else
string.module_dep : string.c
  endif
 endif
endif

string.date string.date0 : string.m \
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
	stream.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	varset.int3

string.date0 : string.m \
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
	stream.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	varset.int3



string.$O :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	time.mh \
	io.mh \
	io.mh \
	array.mh \
	array.mh



string.pic_o :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	time.mh \
	io.mh \
	io.mh \
	array.mh \
	array.mh


string.int0 : string.date0
	@:
string.int : string.date
	@:
string.int2 : string.date
	@:
string.int3 : string.date3
	@:
string.opt : string.optdate
	@:
string.trans_opt : string.trans_opt_date
	@:

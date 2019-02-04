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
	random.int2 \
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
	private_builtin.mh \
	random.mh \
	require.mh \
	rtti_implementation.mh \
	set.mh \
	set_ordlist.mh \
	set_tree234.mh \
	solutions.mh \
	std_util.mh \
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

ifeq ($(TARGET_ASM),yes)
parser.mh parser.mih : parser.s
else
parser.mh parser.mih : parser.c
endif

ifeq ($(TARGET_ASM),yes)
parser.module_dep : parser.s
else
 ifeq ($(findstring il,$(GRADE)),il)
parser.module_dep : parser.il
  ifeq ($(findstring java,$(GRADE)),java)
parser.module_dep : parser.java
  else
parser.module_dep : parser.c
  endif
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
	random.int3 \
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
	random.int3 \
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

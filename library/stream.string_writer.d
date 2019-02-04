stream.string_writer.trans_opt_date :

stream.string_writer.optdate stream.string_writer.trans_opt_date stream.string_writer.err stream.string_writer.c_date stream.string_writer.s_date stream.string_writer.pic_s_date stream.string_writer.il_date stream.string_writer.java_date : stream.string_writer.m \
	stream.int0 \
	array.int \
	bitmap.int \
	bool.int \
	builtin.int \
	char.int \
	deconstruct.int \
	int.int \
	io.int \
	list.int \
	ops.int \
	private_builtin.int \
	require.int \
	rtti_implementation.int \
	string.int \
	term_io.int \
	type_desc.int \
	univ.int \
	assoc_list.int2 \
	construct.int2 \
	enum.int2 \
	map.int2 \
	maybe.int2 \
	pair.int2 \
	pretty_printer.int2 \
	random.int2 \
	set.int2 \
	set_ordlist.int2 \
	term.int2 \
	time.int2 \
	tree234.int2 \
	varset.int2

stream.string_writer.$O :  \
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

stream.string_writer.trans_opt_date stream.string_writer.err stream.string_writer.c_date stream.string_writer.s_date stream.string_writer.pic_s_date stream.string_writer.il_date stream.string_writer.java_date :  \
	stream.string_writer.opt \
	array.opt \
	bitmap.opt \
	bool.opt \
	builtin.opt \
	char.opt \
	deconstruct.opt \
	int.opt \
	io.opt \
	list.opt \
	ops.opt \
	private_builtin.opt \
	require.opt \
	rtti_implementation.opt \
	string.opt \
	term_io.opt \
	type_desc.opt \
	univ.opt \
	stream.int0

stream.string_writer.err stream.string_writer.c_date stream.string_writer.s_date stream.string_writer.pic_s_date stream.string_writer.il_date stream.string_writer.java_date :  \
	stream.string_writer.trans_opt \
	array.trans_opt \
	bitmap.trans_opt \
	bool.trans_opt \
	builtin.trans_opt \
	char.trans_opt \
	deconstruct.trans_opt \
	int.trans_opt \
	io.trans_opt \
	list.trans_opt \
	ops.trans_opt \
	private_builtin.trans_opt \
	require.trans_opt \
	rtti_implementation.trans_opt \
	string.trans_opt \
	term_io.trans_opt \
	type_desc.trans_opt \
	univ.trans_opt

ifeq ($(TARGET_ASM),yes)
stream.string_writer.mh stream.string_writer.mih : stream.string_writer.s
else
stream.string_writer.mh stream.string_writer.mih : stream.string_writer.c
endif

ifeq ($(TARGET_ASM),yes)
stream.string_writer.module_dep : stream.string_writer.s
else
 ifeq ($(findstring il,$(GRADE)),il)
stream.string_writer.module_dep : stream.string_writer.il
  ifeq ($(findstring java,$(GRADE)),java)
stream.string_writer.module_dep : jmercury/stream__string_writer.java
  else
stream.string_writer.module_dep : stream.string_writer.c
  endif
 endif
endif

stream.string_writer.date stream.string_writer.date0 \
	stream.date : stream.string_writer.m \
	stream.int0 \
	array.int3 \
	bitmap.int3 \
	bool.int3 \
	builtin.int3 \
	char.int3 \
	deconstruct.int3 \
	int.int3 \
	io.int3 \
	list.int3 \
	ops.int3 \
	private_builtin.int3 \
	require.int3 \
	rtti_implementation.int3 \
	string.int3 \
	term_io.int3 \
	type_desc.int3 \
	univ.int3 \
	assoc_list.int3 \
	construct.int3 \
	enum.int3 \
	map.int3 \
	maybe.int3 \
	pair.int3 \
	pretty_printer.int3 \
	random.int3 \
	set.int3 \
	set_ordlist.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	varset.int3

stream.string_writer.date0 \
	stream.date0 : stream.string_writer.m \
	array.int3 \
	bitmap.int3 \
	bool.int3 \
	builtin.int3 \
	char.int3 \
	deconstruct.int3 \
	int.int3 \
	io.int3 \
	list.int3 \
	ops.int3 \
	private_builtin.int3 \
	require.int3 \
	rtti_implementation.int3 \
	string.int3 \
	term_io.int3 \
	type_desc.int3 \
	univ.int3 \
	assoc_list.int3 \
	construct.int3 \
	enum.int3 \
	map.int3 \
	maybe.int3 \
	pair.int3 \
	pretty_printer.int3 \
	random.int3 \
	set.int3 \
	set_ordlist.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	varset.int3



stream.string_writer.$O :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	array.mh \
	array.mh \
	string.mh \
	io.mh \
	io.mh



stream.string_writer.pic_o :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	array.mh \
	array.mh \
	string.mh \
	io.mh \
	io.mh


stream.string_writer.int0 : stream.string_writer.date0
	@:
stream.string_writer.int : stream.string_writer.date
	@:
stream.string_writer.int2 : stream.string_writer.date
	@:
stream.string_writer.int3 : stream.string_writer.date3
	@:
stream.string_writer.opt : stream.string_writer.optdate
	@:
stream.string_writer.trans_opt : stream.string_writer.trans_opt_date
	@:

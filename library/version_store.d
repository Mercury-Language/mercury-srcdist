version_store.trans_opt_date : \
	builtin.trans_opt \
	counter.trans_opt \
	int.trans_opt \
	private_builtin.trans_opt \
	unit.trans_opt \
	univ.trans_opt \
	version_array.trans_opt

version_store.optdate version_store.trans_opt_date version_store.err version_store.c_date version_store.s_date version_store.pic_s_date version_store.il_date version_store.java_date : version_store.m \
	builtin.int \
	counter.int \
	int.int \
	private_builtin.int \
	unit.int \
	univ.int \
	version_array.int \
	array.int2 \
	assoc_list.int2 \
	bitmap.int2 \
	bool.int2 \
	char.int2 \
	construct.int2 \
	deconstruct.int2 \
	enum.int2 \
	io.int2 \
	list.int2 \
	map.int2 \
	maybe.int2 \
	ops.int2 \
	pair.int2 \
	pretty_printer.int2 \
	random.int2 \
	rtti_implementation.int2 \
	set.int2 \
	set_ordlist.int2 \
	stream.int2 \
	string.int2 \
	term.int2 \
	time.int2 \
	tree234.int2 \
	type_desc.int2

version_store.$O :  \
	array.mh \
	assoc_list.mh \
	benchmarking.mh \
	bitmap.mh \
	bool.mh \
	builtin.mh \
	char.mh \
	construct.mh \
	counter.mh \
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
	version_array.mh \
	stream.string_writer.mh

version_store.trans_opt_date version_store.err version_store.c_date version_store.s_date version_store.pic_s_date version_store.il_date version_store.java_date :  \
	version_store.opt \
	builtin.opt \
	counter.opt \
	int.opt \
	private_builtin.opt \
	unit.opt \
	univ.opt \
	version_array.opt

version_store.err version_store.c_date version_store.s_date version_store.pic_s_date version_store.il_date version_store.java_date :  \
	version_store.trans_opt \
	builtin.trans_opt \
	counter.trans_opt \
	int.trans_opt \
	private_builtin.trans_opt \
	unit.trans_opt \
	univ.trans_opt \
	version_array.trans_opt

ifeq ($(TARGET_ASM),yes)
version_store.mh version_store.mih : version_store.s
else
version_store.mh version_store.mih : version_store.c
endif

ifeq ($(TARGET_ASM),yes)
version_store.module_dep : version_store.s
else
 ifeq ($(findstring il,$(GRADE)),il)
version_store.module_dep : version_store.il
  ifeq ($(findstring java,$(GRADE)),java)
version_store.module_dep : jmercury/version_store.java
  else
version_store.module_dep : version_store.c
  endif
 endif
endif

version_store.date version_store.date0 : version_store.m \
	builtin.int3 \
	counter.int3 \
	int.int3 \
	private_builtin.int3 \
	unit.int3 \
	univ.int3 \
	version_array.int3 \
	array.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	bool.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	io.int3 \
	list.int3 \
	map.int3 \
	maybe.int3 \
	ops.int3 \
	pair.int3 \
	pretty_printer.int3 \
	random.int3 \
	rtti_implementation.int3 \
	set.int3 \
	set_ordlist.int3 \
	stream.int3 \
	string.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3

version_store.date0 : version_store.m \
	builtin.int3 \
	counter.int3 \
	int.int3 \
	private_builtin.int3 \
	unit.int3 \
	univ.int3 \
	version_array.int3 \
	array.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	bool.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	io.int3 \
	list.int3 \
	map.int3 \
	maybe.int3 \
	ops.int3 \
	pair.int3 \
	pretty_printer.int3 \
	random.int3 \
	rtti_implementation.int3 \
	set.int3 \
	set_ordlist.int3 \
	stream.int3 \
	string.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3



version_store.$O :  \
	array.mh \
	array.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh \
	version_array.mh \
	version_array.mh



version_store.pic_o :  \
	array.mh \
	array.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh \
	version_array.mh \
	version_array.mh


version_store.int0 : version_store.date0
	@:
version_store.int : version_store.date
	@:
version_store.int2 : version_store.date
	@:
version_store.int3 : version_store.date3
	@:
version_store.opt : version_store.optdate
	@:
version_store.trans_opt : version_store.trans_opt_date
	@:

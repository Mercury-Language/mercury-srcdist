stm_builtin.trans_opt_date : \
	univ.trans_opt

stm_builtin.optdate stm_builtin.trans_opt_date stm_builtin.err stm_builtin.c_date stm_builtin.s_date stm_builtin.pic_s_date stm_builtin.il_date stm_builtin.java_date : stm_builtin.m \
	builtin.int \
	exception.int \
	io.int \
	private_builtin.int \
	univ.int \
	assoc_list.int2 \
	bitmap.int2 \
	bool.int2 \
	char.int2 \
	construct.int2 \
	deconstruct.int2 \
	enum.int2 \
	list.int2 \
	map.int2 \
	maybe.int2 \
	ops.int2 \
	pair.int2 \
	pretty_printer.int2 \
	rtti_implementation.int2 \
	set.int2 \
	set_ordlist.int2 \
	store.int2 \
	stream.int2 \
	string.int2 \
	term.int2 \
	time.int2 \
	tree234.int2 \
	type_desc.int2

stm_builtin.$O :  \
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

stm_builtin.trans_opt_date stm_builtin.err stm_builtin.c_date stm_builtin.s_date stm_builtin.pic_s_date stm_builtin.il_date stm_builtin.java_date :  \
	stm_builtin.opt \
	builtin.opt \
	exception.opt \
	io.opt \
	private_builtin.opt \
	univ.opt

stm_builtin.err stm_builtin.c_date stm_builtin.s_date stm_builtin.pic_s_date stm_builtin.il_date stm_builtin.java_date :  \
	stm_builtin.trans_opt \
	builtin.trans_opt \
	exception.trans_opt \
	io.trans_opt \
	private_builtin.trans_opt \
	univ.trans_opt

ifeq ($(TARGET_ASM),yes)
stm_builtin.mh stm_builtin.mih : stm_builtin.s
else
stm_builtin.mh stm_builtin.mih : stm_builtin.c
endif

ifeq ($(TARGET_ASM),yes)
stm_builtin.module_dep : stm_builtin.s
else
 ifeq ($(findstring il,$(GRADE)),il)
stm_builtin.module_dep : stm_builtin.il
 else
  ifeq ($(findstring java,$(GRADE)),java)
stm_builtin.module_dep : jmercury/stm_builtin.java
  else
stm_builtin.module_dep : stm_builtin.c
  endif
 endif
endif

stm_builtin.date stm_builtin.date0 : stm_builtin.m \
	builtin.int3 \
	exception.int3 \
	io.int3 \
	private_builtin.int3 \
	univ.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	bool.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	list.int3 \
	map.int3 \
	maybe.int3 \
	ops.int3 \
	pair.int3 \
	pretty_printer.int3 \
	rtti_implementation.int3 \
	set.int3 \
	set_ordlist.int3 \
	store.int3 \
	stream.int3 \
	string.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3

stm_builtin.date0 : stm_builtin.m \
	builtin.int3 \
	exception.int3 \
	io.int3 \
	private_builtin.int3 \
	univ.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	bool.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	list.int3 \
	map.int3 \
	maybe.int3 \
	ops.int3 \
	pair.int3 \
	pretty_printer.int3 \
	rtti_implementation.int3 \
	set.int3 \
	set_ordlist.int3 \
	store.int3 \
	stream.int3 \
	string.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3



stm_builtin.$O :  \
	store.mh \
	store.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	time.mh \
	io.mh \
	io.mh \
	stm_builtin.mh



stm_builtin.pic_o :  \
	store.mh \
	store.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	time.mh \
	io.mh \
	io.mh \
	stm_builtin.mh


stm_builtin.int0 : stm_builtin.date0
	@:
stm_builtin.int : stm_builtin.date
	@:
stm_builtin.int2 : stm_builtin.date
	@:
stm_builtin.int3 : stm_builtin.date3
	@:
stm_builtin.opt : stm_builtin.optdate
	@:
stm_builtin.trans_opt : stm_builtin.trans_opt_date
	@:

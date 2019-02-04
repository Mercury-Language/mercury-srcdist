mutvar.trans_opt_date : \
	private_builtin.trans_opt

mutvar.optdate mutvar.trans_opt_date mutvar.err mutvar.c_date mutvar.s_date mutvar.pic_s_date mutvar.il_date mutvar.java_date : mutvar.m \
	builtin.int \
	private_builtin.int \
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
	set.int2 \
	set_ordlist.int2 \
	stream.int2 \
	string.int2 \
	term.int2 \
	time.int2 \
	tree234.int2 \
	type_desc.int2 \
	univ.int2

mutvar.$O :  \
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

mutvar.trans_opt_date mutvar.err mutvar.c_date mutvar.s_date mutvar.pic_s_date mutvar.il_date mutvar.java_date :  \
	mutvar.opt \
	builtin.opt \
	private_builtin.opt

mutvar.err mutvar.c_date mutvar.s_date mutvar.pic_s_date mutvar.il_date mutvar.java_date :  \
	mutvar.trans_opt \
	builtin.trans_opt \
	private_builtin.trans_opt

ifeq ($(TARGET_ASM),yes)
mutvar.mh mutvar.mih : mutvar.s
else
mutvar.mh mutvar.mih : mutvar.c
endif

ifeq ($(TARGET_ASM),yes)
mutvar.module_dep : mutvar.s
else
 ifeq ($(findstring il,$(GRADE)),il)
mutvar.module_dep : mutvar.il
  ifeq ($(findstring java,$(GRADE)),java)
mutvar.module_dep : mutvar.java
  else
mutvar.module_dep : mutvar.c
  endif
 endif
endif

mutvar.date mutvar.date0 : mutvar.m \
	builtin.int3 \
	private_builtin.int3 \
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
	set.int3 \
	set_ordlist.int3 \
	stream.int3 \
	string.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3

mutvar.date0 : mutvar.m \
	builtin.int3 \
	private_builtin.int3 \
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
	set.int3 \
	set_ordlist.int3 \
	stream.int3 \
	string.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3



mutvar.$O :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh \
	mutvar.mh



mutvar.pic_o :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh \
	mutvar.mh


mutvar.int0 : mutvar.date0
	@:
mutvar.int : mutvar.date
	@:
mutvar.int2 : mutvar.date
	@:
mutvar.int3 : mutvar.date3
	@:
mutvar.opt : mutvar.optdate
	@:
mutvar.trans_opt : mutvar.trans_opt_date
	@:

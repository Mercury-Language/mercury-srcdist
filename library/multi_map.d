multi_map.trans_opt_date : \
	assoc_list.trans_opt \
	builtin.trans_opt \
	int.trans_opt \
	list.trans_opt \
	map.trans_opt \
	pair.trans_opt \
	private_builtin.trans_opt \
	require.trans_opt \
	set.trans_opt

multi_map.optdate multi_map.trans_opt_date multi_map.err multi_map.c_date multi_map.s_date multi_map.pic_s_date multi_map.il_date multi_map.java_date : multi_map.m \
	assoc_list.int \
	builtin.int \
	int.int \
	list.int \
	map.int \
	pair.int \
	private_builtin.int \
	require.int \
	set.int \
	array.int2 \
	bitmap.int2 \
	bool.int2 \
	char.int2 \
	construct.int2 \
	deconstruct.int2 \
	enum.int2 \
	io.int2 \
	maybe.int2 \
	ops.int2 \
	pretty_printer.int2 \
	random.int2 \
	rtti_implementation.int2 \
	set_ordlist.int2 \
	stream.int2 \
	string.int2 \
	term.int2 \
	time.int2 \
	tree234.int2 \
	type_desc.int2 \
	univ.int2

multi_map.$O :  \
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

multi_map.trans_opt_date multi_map.err multi_map.c_date multi_map.s_date multi_map.pic_s_date multi_map.il_date multi_map.java_date :  \
	multi_map.opt \
	assoc_list.opt \
	builtin.opt \
	int.opt \
	list.opt \
	map.opt \
	pair.opt \
	private_builtin.opt \
	require.opt \
	set.opt

multi_map.err multi_map.c_date multi_map.s_date multi_map.pic_s_date multi_map.il_date multi_map.java_date :  \
	multi_map.trans_opt \
	assoc_list.trans_opt \
	builtin.trans_opt \
	int.trans_opt \
	list.trans_opt \
	map.trans_opt \
	pair.trans_opt \
	private_builtin.trans_opt \
	require.trans_opt \
	set.trans_opt

ifeq ($(TARGET_ASM),yes)
multi_map.mh multi_map.mih : multi_map.s
else
multi_map.mh multi_map.mih : multi_map.c
endif

ifeq ($(TARGET_ASM),yes)
multi_map.module_dep : multi_map.s
else
 ifeq ($(findstring il,$(GRADE)),il)
multi_map.module_dep : multi_map.il
  ifeq ($(findstring java,$(GRADE)),java)
multi_map.module_dep : jmercury/multi_map.java
  else
multi_map.module_dep : multi_map.c
  endif
 endif
endif

multi_map.date multi_map.date0 : multi_map.m \
	assoc_list.int3 \
	builtin.int3 \
	int.int3 \
	list.int3 \
	map.int3 \
	pair.int3 \
	private_builtin.int3 \
	require.int3 \
	set.int3 \
	array.int3 \
	bitmap.int3 \
	bool.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	io.int3 \
	maybe.int3 \
	ops.int3 \
	pretty_printer.int3 \
	random.int3 \
	rtti_implementation.int3 \
	set_ordlist.int3 \
	stream.int3 \
	string.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3

multi_map.date0 : multi_map.m \
	assoc_list.int3 \
	builtin.int3 \
	int.int3 \
	list.int3 \
	map.int3 \
	pair.int3 \
	private_builtin.int3 \
	require.int3 \
	set.int3 \
	array.int3 \
	bitmap.int3 \
	bool.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	io.int3 \
	maybe.int3 \
	ops.int3 \
	pretty_printer.int3 \
	random.int3 \
	rtti_implementation.int3 \
	set_ordlist.int3 \
	stream.int3 \
	string.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3



multi_map.$O :  \
	array.mh \
	array.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh



multi_map.pic_o :  \
	array.mh \
	array.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh


multi_map.int0 : multi_map.date0
	@:
multi_map.int : multi_map.date
	@:
multi_map.int2 : multi_map.date
	@:
multi_map.int3 : multi_map.date3
	@:
multi_map.opt : multi_map.optdate
	@:
multi_map.trans_opt : multi_map.trans_opt_date
	@:

exception.trans_opt_date : \
	io.trans_opt \
	list.trans_opt \
	maybe.trans_opt \
	private_builtin.trans_opt \
	solutions.trans_opt \
	stm_builtin.trans_opt \
	store.trans_opt \
	string.trans_opt \
	unit.trans_opt \
	univ.trans_opt

exception.optdate exception.trans_opt_date exception.err exception.c_date exception.s_date exception.pic_s_date exception.il_date exception.java_date : exception.m \
	builtin.int \
	io.int \
	list.int \
	maybe.int \
	private_builtin.int \
	solutions.int \
	stm_builtin.int \
	store.int \
	string.int \
	unit.int \
	univ.int \
	assoc_list.int2 \
	bitmap.int2 \
	bool.int2 \
	char.int2 \
	construct.int2 \
	deconstruct.int2 \
	enum.int2 \
	map.int2 \
	ops.int2 \
	pair.int2 \
	pretty_printer.int2 \
	set.int2 \
	set_ordlist.int2 \
	stream.int2 \
	term.int2 \
	time.int2 \
	tree234.int2 \
	type_desc.int2

exception.$O :  \
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

exception.trans_opt_date exception.err exception.c_date exception.s_date exception.pic_s_date exception.il_date exception.java_date :  \
	exception.opt \
	builtin.opt \
	io.opt \
	list.opt \
	maybe.opt \
	private_builtin.opt \
	solutions.opt \
	stm_builtin.opt \
	store.opt \
	string.opt \
	unit.opt \
	univ.opt

exception.err exception.c_date exception.s_date exception.pic_s_date exception.il_date exception.java_date :  \
	exception.trans_opt \
	builtin.trans_opt \
	io.trans_opt \
	list.trans_opt \
	maybe.trans_opt \
	private_builtin.trans_opt \
	solutions.trans_opt \
	stm_builtin.trans_opt \
	store.trans_opt \
	string.trans_opt \
	unit.trans_opt \
	univ.trans_opt

ifeq ($(TARGET_ASM),yes)
exception.mh exception.mih : exception.s
else
exception.mh exception.mih : exception.c
endif

ifeq ($(TARGET_ASM),yes)
exception.module_dep : exception.s
else
 ifeq ($(findstring il,$(GRADE)),il)
exception.module_dep : exception.il
  ifeq ($(findstring java,$(GRADE)),java)
exception.module_dep : mercury/exception.java
  else
exception.module_dep : exception.c
  endif
 endif
endif

exception.date exception.date0 : exception.m \
	builtin.int3 \
	io.int3 \
	list.int3 \
	maybe.int3 \
	private_builtin.int3 \
	solutions.int3 \
	stm_builtin.int3 \
	store.int3 \
	string.int3 \
	unit.int3 \
	univ.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	bool.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	map.int3 \
	ops.int3 \
	pair.int3 \
	pretty_printer.int3 \
	set.int3 \
	set_ordlist.int3 \
	stream.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3

exception.date0 : exception.m \
	builtin.int3 \
	io.int3 \
	list.int3 \
	maybe.int3 \
	private_builtin.int3 \
	solutions.int3 \
	stm_builtin.int3 \
	store.int3 \
	string.int3 \
	unit.int3 \
	univ.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	bool.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	map.int3 \
	ops.int3 \
	pair.int3 \
	pretty_printer.int3 \
	set.int3 \
	set_ordlist.int3 \
	stream.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3



exception.$O :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	stm_builtin.mh \
	stm_builtin.mh \
	string.mh \
	io.mh \
	io.mh \
	exception.mh



exception.pic_o :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	stm_builtin.mh \
	stm_builtin.mh \
	string.mh \
	io.mh \
	io.mh \
	exception.mh


exception.int0 : exception.date0
	@:
exception.int : exception.date
	@:
exception.int2 : exception.date
	@:
exception.int3 : exception.date3
	@:
exception.opt : exception.optdate
	@:
exception.trans_opt : exception.trans_opt_date
	@:

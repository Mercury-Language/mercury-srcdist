set_ordlist.trans_opt_date : \
	term.trans_opt

set_ordlist.optdate set_ordlist.trans_opt_date set_ordlist.err set_ordlist.c_date set_ordlist.s_date set_ordlist.pic_s_date set_ordlist.il_date set_ordlist.java_date : set_ordlist.m \
	bool.int \
	builtin.int \
	list.int \
	private_builtin.int \
	term.int \
	assoc_list.int2 \
	bitmap.int2 \
	char.int2 \
	construct.int2 \
	deconstruct.int2 \
	enum.int2 \
	io.int2 \
	map.int2 \
	maybe.int2 \
	ops.int2 \
	pair.int2 \
	pretty_printer.int2 \
	set.int2 \
	stream.int2 \
	string.int2 \
	time.int2 \
	tree234.int2 \
	type_desc.int2 \
	univ.int2

set_ordlist.$O :  \
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

set_ordlist.trans_opt_date set_ordlist.err set_ordlist.c_date set_ordlist.s_date set_ordlist.pic_s_date set_ordlist.il_date set_ordlist.java_date :  \
	set_ordlist.opt \
	bool.opt \
	builtin.opt \
	list.opt \
	private_builtin.opt \
	term.opt

set_ordlist.err set_ordlist.c_date set_ordlist.s_date set_ordlist.pic_s_date set_ordlist.il_date set_ordlist.java_date :  \
	set_ordlist.trans_opt \
	bool.trans_opt \
	builtin.trans_opt \
	list.trans_opt \
	private_builtin.trans_opt \
	term.trans_opt

ifeq ($(TARGET_ASM),yes)
set_ordlist.mh set_ordlist.mih : set_ordlist.s
else
set_ordlist.mh set_ordlist.mih : set_ordlist.c
endif

ifeq ($(TARGET_ASM),yes)
set_ordlist.module_dep : set_ordlist.s
else
 ifeq ($(findstring il,$(GRADE)),il)
set_ordlist.module_dep : set_ordlist.il
  ifeq ($(findstring java,$(GRADE)),java)
set_ordlist.module_dep : set_ordlist.java
  else
set_ordlist.module_dep : set_ordlist.c
  endif
 endif
endif

set_ordlist.date set_ordlist.date0 : set_ordlist.m \
	bool.int3 \
	builtin.int3 \
	list.int3 \
	private_builtin.int3 \
	term.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	io.int3 \
	map.int3 \
	maybe.int3 \
	ops.int3 \
	pair.int3 \
	pretty_printer.int3 \
	set.int3 \
	stream.int3 \
	string.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3

set_ordlist.date0 : set_ordlist.m \
	bool.int3 \
	builtin.int3 \
	list.int3 \
	private_builtin.int3 \
	term.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	io.int3 \
	map.int3 \
	maybe.int3 \
	ops.int3 \
	pair.int3 \
	pretty_printer.int3 \
	set.int3 \
	stream.int3 \
	string.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3



set_ordlist.$O :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh



set_ordlist.pic_o :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh


set_ordlist.int0 : set_ordlist.date0
	@:
set_ordlist.int : set_ordlist.date
	@:
set_ordlist.int2 : set_ordlist.date
	@:
set_ordlist.int3 : set_ordlist.date3
	@:
set_ordlist.opt : set_ordlist.optdate
	@:
set_ordlist.trans_opt : set_ordlist.trans_opt_date
	@:

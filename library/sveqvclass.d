sveqvclass.trans_opt_date : \
	builtin.trans_opt \
	eqvclass.trans_opt \
	private_builtin.trans_opt

sveqvclass.optdate sveqvclass.trans_opt_date sveqvclass.err sveqvclass.c_date sveqvclass.s_date sveqvclass.pic_s_date sveqvclass.il_date sveqvclass.java_date : sveqvclass.m \
	builtin.int \
	eqvclass.int \
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

sveqvclass.$O :  \
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
	eqvclass.mh \
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

sveqvclass.trans_opt_date sveqvclass.err sveqvclass.c_date sveqvclass.s_date sveqvclass.pic_s_date sveqvclass.il_date sveqvclass.java_date :  \
	sveqvclass.opt \
	builtin.opt \
	eqvclass.opt \
	private_builtin.opt

sveqvclass.err sveqvclass.c_date sveqvclass.s_date sveqvclass.pic_s_date sveqvclass.il_date sveqvclass.java_date :  \
	sveqvclass.trans_opt \
	builtin.trans_opt \
	eqvclass.trans_opt \
	private_builtin.trans_opt

ifeq ($(TARGET_ASM),yes)
sveqvclass.mh sveqvclass.mih : sveqvclass.s
else
sveqvclass.mh sveqvclass.mih : sveqvclass.c
endif

ifeq ($(TARGET_ASM),yes)
sveqvclass.module_dep : sveqvclass.s
else
 ifeq ($(findstring il,$(GRADE)),il)
sveqvclass.module_dep : sveqvclass.il
  ifeq ($(findstring java,$(GRADE)),java)
sveqvclass.module_dep : sveqvclass.java
  else
sveqvclass.module_dep : sveqvclass.c
  endif
 endif
endif

sveqvclass.date sveqvclass.date0 : sveqvclass.m \
	builtin.int3 \
	eqvclass.int3 \
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

sveqvclass.date0 : sveqvclass.m \
	builtin.int3 \
	eqvclass.int3 \
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



sveqvclass.$O :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh



sveqvclass.pic_o :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh


sveqvclass.int0 : sveqvclass.date0
	@:
sveqvclass.int : sveqvclass.date
	@:
sveqvclass.int2 : sveqvclass.date
	@:
sveqvclass.int3 : sveqvclass.date3
	@:
sveqvclass.opt : sveqvclass.optdate
	@:
sveqvclass.trans_opt : sveqvclass.trans_opt_date
	@:

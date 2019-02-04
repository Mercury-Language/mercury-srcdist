term_io.trans_opt_date : \
	varset.trans_opt \
	stream.string_writer.trans_opt

term_io.optdate term_io.trans_opt_date term_io.err term_io.c_date term_io.s_date term_io.pic_s_date term_io.il_date term_io.java_date : term_io.m \
	bool.int \
	builtin.int \
	char.int \
	int.int \
	io.int \
	lexer.int \
	list.int \
	ops.int \
	parser.int \
	private_builtin.int \
	stream.int \
	string.int \
	term.int \
	varset.int \
	stream.string_writer.int \
	array.int2 \
	assoc_list.int2 \
	bitmap.int2 \
	construct.int2 \
	deconstruct.int2 \
	enum.int2 \
	map.int2 \
	maybe.int2 \
	pair.int2 \
	pretty_printer.int2 \
	random.int2 \
	set.int2 \
	set_ordlist.int2 \
	time.int2 \
	tree234.int2 \
	type_desc.int2 \
	univ.int2

term_io.$O :  \
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

term_io.trans_opt_date term_io.err term_io.c_date term_io.s_date term_io.pic_s_date term_io.il_date term_io.java_date :  \
	term_io.opt \
	bool.opt \
	builtin.opt \
	char.opt \
	int.opt \
	io.opt \
	lexer.opt \
	list.opt \
	ops.opt \
	parser.opt \
	private_builtin.opt \
	stream.opt \
	string.opt \
	term.opt \
	varset.opt \
	stream.string_writer.opt \
	stream.int0

term_io.err term_io.c_date term_io.s_date term_io.pic_s_date term_io.il_date term_io.java_date :  \
	term_io.trans_opt \
	bool.trans_opt \
	builtin.trans_opt \
	char.trans_opt \
	int.trans_opt \
	io.trans_opt \
	lexer.trans_opt \
	list.trans_opt \
	ops.trans_opt \
	parser.trans_opt \
	private_builtin.trans_opt \
	stream.trans_opt \
	string.trans_opt \
	term.trans_opt \
	varset.trans_opt \
	stream.string_writer.trans_opt

ifeq ($(TARGET_ASM),yes)
term_io.mh term_io.mih : term_io.s
else
term_io.mh term_io.mih : term_io.c
endif

ifeq ($(TARGET_ASM),yes)
term_io.module_dep : term_io.s
else
 ifeq ($(findstring il,$(GRADE)),il)
term_io.module_dep : term_io.il
  ifeq ($(findstring java,$(GRADE)),java)
term_io.module_dep : mercury/term_io.java
  else
term_io.module_dep : term_io.c
  endif
 endif
endif

term_io.date term_io.date0 : term_io.m \
	bool.int3 \
	builtin.int3 \
	char.int3 \
	int.int3 \
	io.int3 \
	lexer.int3 \
	list.int3 \
	ops.int3 \
	parser.int3 \
	private_builtin.int3 \
	stream.int3 \
	string.int3 \
	term.int3 \
	varset.int3 \
	stream.string_writer.int3 \
	array.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	map.int3 \
	maybe.int3 \
	pair.int3 \
	pretty_printer.int3 \
	random.int3 \
	set.int3 \
	set_ordlist.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3

term_io.date0 : term_io.m \
	bool.int3 \
	builtin.int3 \
	char.int3 \
	int.int3 \
	io.int3 \
	lexer.int3 \
	list.int3 \
	ops.int3 \
	parser.int3 \
	private_builtin.int3 \
	stream.int3 \
	string.int3 \
	term.int3 \
	varset.int3 \
	stream.string_writer.int3 \
	array.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	map.int3 \
	maybe.int3 \
	pair.int3 \
	pretty_printer.int3 \
	random.int3 \
	set.int3 \
	set_ordlist.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3



term_io.$O :  \
	array.mh \
	array.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh



term_io.pic_o :  \
	array.mh \
	array.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh


term_io.int0 : term_io.date0
	@:
term_io.int : term_io.date
	@:
term_io.int2 : term_io.date
	@:
term_io.int3 : term_io.date3
	@:
term_io.opt : term_io.optdate
	@:
term_io.trans_opt : term_io.trans_opt_date
	@:

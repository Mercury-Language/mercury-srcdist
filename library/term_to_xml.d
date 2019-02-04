term_to_xml.trans_opt_date : \
	bool.trans_opt \
	builtin.trans_opt \
	char.trans_opt \
	construct.trans_opt \
	deconstruct.trans_opt \
	exception.trans_opt \
	int.trans_opt \
	io.trans_opt \
	list.trans_opt \
	map.trans_opt \
	maybe.trans_opt \
	private_builtin.trans_opt \
	stream.trans_opt \
	string.trans_opt \
	type_desc.trans_opt \
	unit.trans_opt \
	univ.trans_opt

term_to_xml.optdate term_to_xml.trans_opt_date term_to_xml.err term_to_xml.c_date term_to_xml.s_date term_to_xml.pic_s_date term_to_xml.il_date term_to_xml.java_date : term_to_xml.m \
	bool.int \
	builtin.int \
	char.int \
	construct.int \
	deconstruct.int \
	exception.int \
	int.int \
	io.int \
	list.int \
	map.int \
	maybe.int \
	private_builtin.int \
	stream.int \
	string.int \
	type_desc.int \
	unit.int \
	univ.int \
	array.int2 \
	assoc_list.int2 \
	bitmap.int2 \
	enum.int2 \
	ops.int2 \
	pair.int2 \
	pretty_printer.int2 \
	random.int2 \
	set.int2 \
	set_ordlist.int2 \
	store.int2 \
	term.int2 \
	time.int2 \
	tree234.int2

term_to_xml.$O :  \
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

term_to_xml.trans_opt_date term_to_xml.err term_to_xml.c_date term_to_xml.s_date term_to_xml.pic_s_date term_to_xml.il_date term_to_xml.java_date :  \
	term_to_xml.opt \
	bool.opt \
	builtin.opt \
	char.opt \
	construct.opt \
	deconstruct.opt \
	exception.opt \
	int.opt \
	io.opt \
	list.opt \
	map.opt \
	maybe.opt \
	private_builtin.opt \
	stream.opt \
	string.opt \
	type_desc.opt \
	unit.opt \
	univ.opt

term_to_xml.err term_to_xml.c_date term_to_xml.s_date term_to_xml.pic_s_date term_to_xml.il_date term_to_xml.java_date :  \
	term_to_xml.trans_opt \
	bool.trans_opt \
	builtin.trans_opt \
	char.trans_opt \
	construct.trans_opt \
	deconstruct.trans_opt \
	exception.trans_opt \
	int.trans_opt \
	io.trans_opt \
	list.trans_opt \
	map.trans_opt \
	maybe.trans_opt \
	private_builtin.trans_opt \
	stream.trans_opt \
	string.trans_opt \
	type_desc.trans_opt \
	unit.trans_opt \
	univ.trans_opt

ifeq ($(TARGET_ASM),yes)
term_to_xml.mh term_to_xml.mih : term_to_xml.s
else
term_to_xml.mh term_to_xml.mih : term_to_xml.c
endif

ifeq ($(TARGET_ASM),yes)
term_to_xml.module_dep : term_to_xml.s
else
 ifeq ($(findstring il,$(GRADE)),il)
term_to_xml.module_dep : term_to_xml.il
  ifeq ($(findstring java,$(GRADE)),java)
term_to_xml.module_dep : term_to_xml.java
  else
term_to_xml.module_dep : term_to_xml.c
  endif
 endif
endif

term_to_xml.date term_to_xml.date0 : term_to_xml.m \
	bool.int3 \
	builtin.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	exception.int3 \
	int.int3 \
	io.int3 \
	list.int3 \
	map.int3 \
	maybe.int3 \
	private_builtin.int3 \
	stream.int3 \
	string.int3 \
	type_desc.int3 \
	unit.int3 \
	univ.int3 \
	array.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	enum.int3 \
	ops.int3 \
	pair.int3 \
	pretty_printer.int3 \
	random.int3 \
	set.int3 \
	set_ordlist.int3 \
	store.int3 \
	term.int3 \
	time.int3 \
	tree234.int3

term_to_xml.date0 : term_to_xml.m \
	bool.int3 \
	builtin.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	exception.int3 \
	int.int3 \
	io.int3 \
	list.int3 \
	map.int3 \
	maybe.int3 \
	private_builtin.int3 \
	stream.int3 \
	string.int3 \
	type_desc.int3 \
	unit.int3 \
	univ.int3 \
	array.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	enum.int3 \
	ops.int3 \
	pair.int3 \
	pretty_printer.int3 \
	random.int3 \
	set.int3 \
	set_ordlist.int3 \
	store.int3 \
	term.int3 \
	time.int3 \
	tree234.int3



term_to_xml.$O :  \
	array.mh \
	array.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh



term_to_xml.pic_o :  \
	array.mh \
	array.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh


term_to_xml.int0 : term_to_xml.date0
	@:
term_to_xml.int : term_to_xml.date
	@:
term_to_xml.int2 : term_to_xml.date
	@:
term_to_xml.int3 : term_to_xml.date3
	@:
term_to_xml.opt : term_to_xml.optdate
	@:
term_to_xml.trans_opt : term_to_xml.trans_opt_date
	@:

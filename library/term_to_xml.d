term_to_xml.trans_opt_date : \
	bool.trans_opt \
	builtin.trans_opt \
	char.trans_opt \
	construct.trans_opt \
	deconstruct.trans_opt \
	exception.trans_opt \
	int.trans_opt \
	list.trans_opt \
	map.trans_opt \
	maybe.trans_opt \
	private_builtin.trans_opt \
	stream.trans_opt \
	string.trans_opt \
	type_desc.trans_opt \
	unit.trans_opt \
	univ.trans_opt \
	string.format.trans_opt \
	string.parse_util.trans_opt

term_to_xml.optdate term_to_xml.trans_opt_date term_to_xml.err term_to_xml.c_date term_to_xml.s_date term_to_xml.pic_s_date term_to_xml.il_date term_to_xml.java_date : term_to_xml.m \
	bool.int \
	builtin.int \
	char.int \
	construct.int \
	deconstruct.int \
	exception.int \
	int.int \
	list.int \
	map.int \
	maybe.int \
	private_builtin.int \
	stream.int \
	string.int \
	type_desc.int \
	unit.int \
	univ.int \
	string.format.int \
	string.parse_util.int \
	array.int2 \
	assoc_list.int2 \
	bitmap.int2 \
	enum.int2 \
	io.int2 \
	ops.int2 \
	pair.int2 \
	pretty_printer.int2 \
	random.int2 \
	rtti_implementation.int2 \
	set.int2 \
	set_ordlist.int2 \
	stm_builtin.int2 \
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
	calendar.mh \
	char.mh \
	construct.mh \
	cord.mh \
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
	term_conversion.mh \
	term_io.mh \
	time.mh \
	tree234.mh \
	type_desc.mh \
	unit.mh \
	univ.mh \
	varset.mh \
	version_array.mh \
	stream.string_writer.mh \
	string.format.mh \
	string.parse_runtime.mh \
	string.parse_util.mh \
	string.to_string.mh

term_to_xml.trans_opt_date term_to_xml.err term_to_xml.c_date term_to_xml.s_date term_to_xml.pic_s_date term_to_xml.il_date term_to_xml.java_date :  \
	term_to_xml.opt \
	bool.opt \
	builtin.opt \
	char.opt \
	construct.opt \
	deconstruct.opt \
	exception.opt \
	int.opt \
	list.opt \
	map.opt \
	maybe.opt \
	private_builtin.opt \
	stream.opt \
	string.opt \
	type_desc.opt \
	unit.opt \
	univ.opt \
	string.format.opt \
	string.parse_util.opt \
	string.int0

term_to_xml.err term_to_xml.c_date term_to_xml.s_date term_to_xml.pic_s_date term_to_xml.il_date term_to_xml.java_date :  \
	term_to_xml.trans_opt \
	bool.trans_opt \
	builtin.trans_opt \
	char.trans_opt \
	construct.trans_opt \
	deconstruct.trans_opt \
	exception.trans_opt \
	int.trans_opt \
	list.trans_opt \
	map.trans_opt \
	maybe.trans_opt \
	private_builtin.trans_opt \
	stream.trans_opt \
	string.trans_opt \
	type_desc.trans_opt \
	unit.trans_opt \
	univ.trans_opt \
	string.format.trans_opt \
	string.parse_util.trans_opt

term_to_xml.pic_o term_to_xml.$O : \
	array.mih \
	assoc_list.mih \
	benchmarking.mih \
	bitmap.mih \
	bool.mih \
	builtin.mih \
	calendar.mih \
	char.mih \
	construct.mih \
	cord.mih \
	deconstruct.mih \
	dir.mih \
	enum.mih \
	erlang_rtti_implementation.mih \
	exception.mih \
	float.mih \
	int.mih \
	integer.mih \
	io.mih \
	lexer.mih \
	list.mih \
	map.mih \
	math.mih \
	maybe.mih \
	mutvar.mih \
	ops.mih \
	pair.mih \
	parser.mih \
	pretty_printer.mih \
	private_builtin.mih \
	random.mih \
	require.mih \
	rtti_implementation.mih \
	set.mih \
	set_ordlist.mih \
	set_tree234.mih \
	solutions.mih \
	std_util.mih \
	stm_builtin.mih \
	store.mih \
	stream.mih \
	string.mih \
	table_builtin.mih \
	term.mih \
	term_conversion.mih \
	term_io.mih \
	time.mih \
	tree234.mih \
	type_desc.mih \
	unit.mih \
	univ.mih \
	varset.mih \
	version_array.mih \
	stream.string_writer.mih \
	string.format.mih \
	string.parse_runtime.mih \
	string.parse_util.mih \
	string.to_string.mih

term_to_xml.mh term_to_xml.mih : term_to_xml.c


ifeq ($(findstring il,$(GRADE)),il)
term_to_xml.module_dep : term_to_xml.il
else
 ifeq ($(findstring java,$(GRADE)),java)
term_to_xml.module_dep : jmercury/term_to_xml.java
 else
term_to_xml.module_dep : term_to_xml.c
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
	list.int3 \
	map.int3 \
	maybe.int3 \
	private_builtin.int3 \
	stream.int3 \
	string.int3 \
	type_desc.int3 \
	unit.int3 \
	univ.int3 \
	string.format.int3 \
	string.parse_util.int3 \
	array.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	enum.int3 \
	io.int3 \
	ops.int3 \
	pair.int3 \
	pretty_printer.int3 \
	random.int3 \
	rtti_implementation.int3 \
	set.int3 \
	set_ordlist.int3 \
	stm_builtin.int3 \
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
	list.int3 \
	map.int3 \
	maybe.int3 \
	private_builtin.int3 \
	stream.int3 \
	string.int3 \
	type_desc.int3 \
	unit.int3 \
	univ.int3 \
	string.format.int3 \
	string.parse_util.int3 \
	array.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	enum.int3 \
	io.int3 \
	ops.int3 \
	pair.int3 \
	pretty_printer.int3 \
	random.int3 \
	rtti_implementation.int3 \
	set.int3 \
	set_ordlist.int3 \
	stm_builtin.int3 \
	store.int3 \
	term.int3 \
	time.int3 \
	tree234.int3



term_to_xml.$O :  \
	io.mh \
	io.mh \
	time.mh \
	string.mh \
	bitmap.mh \
	bitmap.mh \
	time.mh \
	time.mh \
	stm_builtin.mh \
	stm_builtin.mh \
	store.mh \
	store.mh \
	array.mh \
	array.mh



term_to_xml.pic_o :  \
	io.mh \
	io.mh \
	time.mh \
	string.mh \
	bitmap.mh \
	bitmap.mh \
	time.mh \
	time.mh \
	stm_builtin.mh \
	stm_builtin.mh \
	store.mh \
	store.mh \
	array.mh \
	array.mh


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

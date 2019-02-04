float.trans_opt_date : \
	int.trans_opt \
	math.trans_opt \
	pretty_printer.trans_opt \
	private_builtin.trans_opt \
	string.trans_opt

float.optdate float.trans_opt_date float.err float.c_date float.s_date float.pic_s_date float.il_date float.java_date : float.m \
	builtin.int \
	exception.int \
	int.int \
	math.int \
	pretty_printer.int \
	private_builtin.int \
	string.int \
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
	random.int2 \
	rtti_implementation.int2 \
	set.int2 \
	set_ordlist.int2 \
	stm_builtin.int2 \
	store.int2 \
	stream.int2 \
	term.int2 \
	time.int2 \
	tree234.int2 \
	type_desc.int2 \
	univ.int2

float.$O :  \
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

float.trans_opt_date float.err float.c_date float.s_date float.pic_s_date float.il_date float.java_date :  \
	float.opt \
	builtin.opt \
	exception.opt \
	int.opt \
	math.opt \
	pretty_printer.opt \
	private_builtin.opt \
	string.opt

float.err float.c_date float.s_date float.pic_s_date float.il_date float.java_date :  \
	float.trans_opt \
	builtin.trans_opt \
	exception.trans_opt \
	int.trans_opt \
	math.trans_opt \
	pretty_printer.trans_opt \
	private_builtin.trans_opt \
	string.trans_opt

ifeq ($(TARGET_ASM),yes)
float.mh float.mih : float.s
else
float.mh float.mih : float.c
endif

ifeq ($(TARGET_ASM),yes)
float.module_dep : float.s
else
 ifeq ($(findstring il,$(GRADE)),il)
float.module_dep : float.il
  ifeq ($(findstring java,$(GRADE)),java)
float.module_dep : jmercury/mr_float.java
  else
float.module_dep : float.c
  endif
 endif
endif

float.date float.date0 : float.m \
	builtin.int3 \
	exception.int3 \
	int.int3 \
	math.int3 \
	pretty_printer.int3 \
	private_builtin.int3 \
	string.int3 \
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
	random.int3 \
	rtti_implementation.int3 \
	set.int3 \
	set_ordlist.int3 \
	stm_builtin.int3 \
	store.int3 \
	stream.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3

float.date0 : float.m \
	builtin.int3 \
	exception.int3 \
	int.int3 \
	math.int3 \
	pretty_printer.int3 \
	private_builtin.int3 \
	string.int3 \
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
	random.int3 \
	rtti_implementation.int3 \
	set.int3 \
	set_ordlist.int3 \
	stm_builtin.int3 \
	store.int3 \
	stream.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3



float.$O :  \
	array.mh \
	array.mh \
	stm_builtin.mh \
	stm_builtin.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh \
	float.mh



float.pic_o :  \
	array.mh \
	array.mh \
	stm_builtin.mh \
	stm_builtin.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh \
	float.mh


float.int0 : float.date0
	@:
float.int : float.date
	@:
float.int2 : float.date
	@:
float.int3 : float.date3
	@:
float.opt : float.optdate
	@:
float.trans_opt : float.trans_opt_date
	@:

bit_buffer.trans_opt_date : \
	bitmap.trans_opt \
	bool.trans_opt \
	builtin.trans_opt \
	exception.trans_opt \
	int.trans_opt \
	list.trans_opt \
	private_builtin.trans_opt \
	stream.trans_opt

bit_buffer.optdate bit_buffer.trans_opt_date bit_buffer.err bit_buffer.c_date bit_buffer.s_date bit_buffer.pic_s_date bit_buffer.il_date bit_buffer.java_date : bit_buffer.m bit_buffer.int0 \
	bitmap.int \
	bool.int \
	builtin.int \
	exception.int \
	int.int \
	list.int \
	private_builtin.int \
	stream.int \
	array.int2 \
	assoc_list.int2 \
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
	random.int2 \
	rtti_implementation.int2 \
	set.int2 \
	set_ordlist.int2 \
	stm_builtin.int2 \
	store.int2 \
	string.int2 \
	term.int2 \
	time.int2 \
	tree234.int2 \
	type_desc.int2 \
	univ.int2

bit_buffer.$O :  \
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

bit_buffer.trans_opt_date bit_buffer.err bit_buffer.c_date bit_buffer.s_date bit_buffer.pic_s_date bit_buffer.il_date bit_buffer.java_date :  \
	bit_buffer.opt \
	bitmap.opt \
	bool.opt \
	builtin.opt \
	exception.opt \
	int.opt \
	list.opt \
	private_builtin.opt \
	stream.opt

bit_buffer.err bit_buffer.c_date bit_buffer.s_date bit_buffer.pic_s_date bit_buffer.il_date bit_buffer.java_date :  \
	bit_buffer.trans_opt \
	bitmap.trans_opt \
	bool.trans_opt \
	builtin.trans_opt \
	exception.trans_opt \
	int.trans_opt \
	list.trans_opt \
	private_builtin.trans_opt \
	stream.trans_opt

ifeq ($(TARGET_ASM),yes)
bit_buffer.mh bit_buffer.mih : bit_buffer.s
else
bit_buffer.mh bit_buffer.mih : bit_buffer.c
endif

ifeq ($(TARGET_ASM),yes)
bit_buffer.module_dep : bit_buffer.s
else
 ifeq ($(findstring il,$(GRADE)),il)
bit_buffer.module_dep : bit_buffer.il
 else
  ifeq ($(findstring java,$(GRADE)),java)
bit_buffer.module_dep : jmercury/bit_buffer.java
  else
bit_buffer.module_dep : bit_buffer.c
  endif
 endif
endif

bit_buffer.date bit_buffer.date0 : bit_buffer.m \
	bitmap.int3 \
	bool.int3 \
	builtin.int3 \
	exception.int3 \
	int.int3 \
	list.int3 \
	private_builtin.int3 \
	stream.int3 \
	array.int3 \
	assoc_list.int3 \
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
	random.int3 \
	rtti_implementation.int3 \
	set.int3 \
	set_ordlist.int3 \
	stm_builtin.int3 \
	store.int3 \
	string.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3

bit_buffer.date0 : bit_buffer.m \
	bitmap.int3 \
	bool.int3 \
	builtin.int3 \
	exception.int3 \
	int.int3 \
	list.int3 \
	private_builtin.int3 \
	stream.int3 \
	array.int3 \
	assoc_list.int3 \
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
	random.int3 \
	rtti_implementation.int3 \
	set.int3 \
	set_ordlist.int3 \
	stm_builtin.int3 \
	store.int3 \
	string.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3



bit_buffer.$O :  \
	array.mh \
	array.mh \
	store.mh \
	store.mh \
	stm_builtin.mh \
	stm_builtin.mh \
	time.mh \
	time.mh \
	string.mh \
	time.mh \
	io.mh \
	io.mh \
	bitmap.mh \
	bitmap.mh



bit_buffer.pic_o :  \
	array.mh \
	array.mh \
	store.mh \
	store.mh \
	stm_builtin.mh \
	stm_builtin.mh \
	time.mh \
	time.mh \
	string.mh \
	time.mh \
	io.mh \
	io.mh \
	bitmap.mh \
	bitmap.mh


bit_buffer.int0 : bit_buffer.date0
	@:
bit_buffer.int : bit_buffer.date
	@:
bit_buffer.int2 : bit_buffer.date
	@:
bit_buffer.int3 : bit_buffer.date3
	@:
bit_buffer.opt : bit_buffer.optdate
	@:
bit_buffer.trans_opt : bit_buffer.trans_opt_date
	@:

bool.trans_opt_date : \
	builtin.trans_opt \
	enum.trans_opt \
	list.trans_opt \
	private_builtin.trans_opt

bool.optdate bool.trans_opt_date bool.err bool.c_date bool.s_date bool.pic_s_date bool.il_date bool.java_date : bool.m \
	builtin.int \
	enum.int \
	list.int \
	private_builtin.int \
	assoc_list.int2 \
	bitmap.int2 \
	char.int2 \
	construct.int2 \
	deconstruct.int2 \
	io.int2 \
	map.int2 \
	maybe.int2 \
	ops.int2 \
	pair.int2 \
	set.int2 \
	set_ordlist.int2 \
	stream.int2 \
	string.int2 \
	term.int2 \
	time.int2 \
	tree234.int2 \
	type_desc.int2 \
	univ.int2

bool.$O :  \
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

bool.trans_opt_date bool.err bool.c_date bool.s_date bool.pic_s_date bool.il_date bool.java_date :  \
	bool.opt \
	builtin.opt \
	enum.opt \
	list.opt \
	private_builtin.opt

bool.err bool.c_date bool.s_date bool.pic_s_date bool.il_date bool.java_date :  \
	bool.trans_opt \
	builtin.trans_opt \
	enum.trans_opt \
	list.trans_opt \
	private_builtin.trans_opt

ifeq ($(TARGET_ASM),yes)
bool.mh bool.mih : bool.s
else
bool.mh bool.mih : bool.c
endif

ifeq ($(TARGET_ASM),yes)
bool.module_dep : bool.s
else
 ifeq ($(findstring il,$(GRADE)),il)
bool.module_dep : bool.il
  ifeq ($(findstring java,$(GRADE)),java)
bool.module_dep : bool.java
  else
bool.module_dep : bool.c
  endif
 endif
endif

bool.date bool.date0 : bool.m \
	builtin.int3 \
	enum.int3 \
	list.int3 \
	private_builtin.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	io.int3 \
	map.int3 \
	maybe.int3 \
	ops.int3 \
	pair.int3 \
	set.int3 \
	set_ordlist.int3 \
	stream.int3 \
	string.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3

bool.date0 : bool.m \
	builtin.int3 \
	enum.int3 \
	list.int3 \
	private_builtin.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	io.int3 \
	map.int3 \
	maybe.int3 \
	ops.int3 \
	pair.int3 \
	set.int3 \
	set_ordlist.int3 \
	stream.int3 \
	string.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3



bool.$O :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh \
	bool.mh



bool.pic_o :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh \
	bool.mh


bool.int0 : bool.date0
	@:
bool.int : bool.date
	@:
bool.int2 : bool.date
	@:
bool.int3 : bool.date3
	@:
bool.opt : bool.optdate
	@:
bool.trans_opt : bool.trans_opt_date
	@:

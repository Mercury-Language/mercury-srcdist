

analysis.file.optdate analysis.file.trans_opt_date analysis.file.err analysis.file.c_date analysis.file.s_date analysis.file.pic_s_date analysis.file.il_date analysis.file.java_date : analysis.file.m \
	analysis.int0 \
	bool.int \
	builtin.int \
	exception.int \
	io.int \
	list.int \
	map.int \
	maybe.int \
	parser.int \
	private_builtin.int \
	require.int \
	set.int \
	string.int \
	term.int \
	term_io.int \
	unit.int \
	univ.int \
	varset.int \
	assoc_list.int2 \
	bitmap.int2 \
	char.int2 \
	construct.int2 \
	deconstruct.int2 \
	enum.int2 \
	lexer.int2 \
	ops.int2 \
	pair.int2 \
	set_ordlist.int2 \
	store.int2 \
	stream.int2 \
	time.int2 \
	tree234.int2 \
	type_desc.int2

ifeq ($(TARGET_ASM),yes)
analysis.file.mh analysis.file.mih : analysis.file.s
else
analysis.file.mh analysis.file.mih : analysis.file.c
endif

ifeq ($(TARGET_ASM),yes)
analysis.file.module_dep : analysis.file.s
else
 ifeq ($(findstring il,$(GRADE)),il)
analysis.file.module_dep : analysis.file.il
  ifeq ($(findstring java,$(GRADE)),java)
analysis.file.module_dep : analysis.file.java
  else
analysis.file.module_dep : analysis.file.c
  endif
 endif
endif

analysis.file.date analysis.file.date0 \
	analysis.date : analysis.file.m \
	analysis.int0 \
	bool.int3 \
	builtin.int3 \
	exception.int3 \
	io.int3 \
	list.int3 \
	map.int3 \
	maybe.int3 \
	parser.int3 \
	private_builtin.int3 \
	require.int3 \
	set.int3 \
	string.int3 \
	term.int3 \
	term_io.int3 \
	unit.int3 \
	univ.int3 \
	varset.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	lexer.int3 \
	ops.int3 \
	pair.int3 \
	set_ordlist.int3 \
	store.int3 \
	stream.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3

analysis.file.date0 \
	analysis.date0 : analysis.file.m \
	bool.int3 \
	builtin.int3 \
	exception.int3 \
	io.int3 \
	list.int3 \
	map.int3 \
	maybe.int3 \
	parser.int3 \
	private_builtin.int3 \
	require.int3 \
	set.int3 \
	string.int3 \
	term.int3 \
	term_io.int3 \
	unit.int3 \
	univ.int3 \
	varset.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	lexer.int3 \
	ops.int3 \
	pair.int3 \
	set_ordlist.int3 \
	store.int3 \
	stream.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3



analysis.file.$O :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh \
	analysis.mh



analysis.file.pic_o :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh \
	analysis.mh


analysis.file.int0 : analysis.file.date0
	@:
analysis.file.int : analysis.file.date
	@:
analysis.file.int2 : analysis.file.date
	@:
analysis.file.int3 : analysis.file.date3
	@:
analysis.file.opt : analysis.file.optdate
	@:
analysis.file.trans_opt : analysis.file.trans_opt_date
	@:

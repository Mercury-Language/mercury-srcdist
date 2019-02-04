

analysis.optdate analysis.trans_opt_date analysis.err analysis.c_date analysis.s_date analysis.pic_s_date analysis.il_date analysis.java_date : analysis.m \
	bool.int \
	builtin.int \
	io.int \
	list.int \
	map.int \
	maybe.int \
	private_builtin.int \
	require.int \
	set.int \
	string.int \
	unit.int \
	univ.int \
	analysis.file.int \
	assoc_list.int2 \
	bitmap.int2 \
	char.int2 \
	construct.int2 \
	deconstruct.int2 \
	enum.int2 \
	ops.int2 \
	pair.int2 \
	set_ordlist.int2 \
	stream.int2 \
	term.int2 \
	time.int2 \
	tree234.int2 \
	type_desc.int2

ifeq ($(TARGET_ASM),yes)
analysis.mh analysis.mih : analysis.s
else
analysis.mh analysis.mih : analysis.c
endif

ifeq ($(TARGET_ASM),yes)
analysis.module_dep : analysis.s
else
 ifeq ($(findstring il,$(GRADE)),il)
analysis.module_dep : analysis.il
  ifeq ($(findstring java,$(GRADE)),java)
analysis.module_dep : analysis.java
  else
analysis.module_dep : analysis.c
  endif
 endif
endif

analysis.date analysis.date0 : analysis.m \
	bool.int3 \
	builtin.int3 \
	io.int3 \
	list.int3 \
	map.int3 \
	maybe.int3 \
	private_builtin.int3 \
	require.int3 \
	set.int3 \
	string.int3 \
	unit.int3 \
	univ.int3 \
	analysis.file.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	ops.int3 \
	pair.int3 \
	set_ordlist.int3 \
	stream.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3

analysis.date0 : analysis.m \
	bool.int3 \
	builtin.int3 \
	io.int3 \
	list.int3 \
	map.int3 \
	maybe.int3 \
	private_builtin.int3 \
	require.int3 \
	set.int3 \
	string.int3 \
	unit.int3 \
	univ.int3 \
	analysis.file.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	ops.int3 \
	pair.int3 \
	set_ordlist.int3 \
	stream.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3



analysis.$O :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh



analysis.pic_o :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh


analysis.int0 : analysis.date0
	@:
analysis.int : analysis.date
	@:
analysis.int2 : analysis.date
	@:
analysis.int3 : analysis.date3
	@:
analysis.opt : analysis.optdate
	@:
analysis.trans_opt : analysis.trans_opt_date
	@:

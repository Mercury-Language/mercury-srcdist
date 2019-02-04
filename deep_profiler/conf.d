

conf.optdate conf.trans_opt_date conf.err conf.c_date conf.s_date conf.pic_s_date conf.il_date conf.java_date : conf.m \
	builtin.int \
	io.int \
	list.int \
	maybe.int \
	private_builtin.int \
	require.int \
	string.int \
	assoc_list.int2 \
	bitmap.int2 \
	bool.int2 \
	char.int2 \
	construct.int2 \
	deconstruct.int2 \
	enum.int2 \
	map.int2 \
	ops.int2 \
	pair.int2 \
	pretty_printer.int2 \
	set.int2 \
	set_ordlist.int2 \
	stream.int2 \
	term.int2 \
	time.int2 \
	tree234.int2 \
	type_desc.int2 \
	univ.int2

ifeq ($(TARGET_ASM),yes)
conf.mh conf.mih : conf.s
else
conf.mh conf.mih : conf.c
endif

ifeq ($(TARGET_ASM),yes)
conf.module_dep : conf.s
else
 ifeq ($(findstring il,$(GRADE)),il)
conf.module_dep : conf.il
  ifeq ($(findstring java,$(GRADE)),java)
conf.module_dep : mercury/conf.java
  else
conf.module_dep : conf.c
  endif
 endif
endif

conf.date conf.date0 : conf.m \
	builtin.int3 \
	io.int3 \
	list.int3 \
	maybe.int3 \
	private_builtin.int3 \
	require.int3 \
	string.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	bool.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	map.int3 \
	ops.int3 \
	pair.int3 \
	pretty_printer.int3 \
	set.int3 \
	set_ordlist.int3 \
	stream.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3

conf.date0 : conf.m \
	builtin.int3 \
	io.int3 \
	list.int3 \
	maybe.int3 \
	private_builtin.int3 \
	require.int3 \
	string.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	bool.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	map.int3 \
	ops.int3 \
	pair.int3 \
	pretty_printer.int3 \
	set.int3 \
	set_ordlist.int3 \
	stream.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3



conf.$O :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh \
	conf.mh



conf.pic_o :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh \
	conf.mh


conf.int0 : conf.date0
	@:
conf.int : conf.date
	@:
conf.int2 : conf.date
	@:
conf.int3 : conf.date3
	@:
conf.opt : conf.optdate
	@:
conf.trans_opt : conf.trans_opt_date
	@:

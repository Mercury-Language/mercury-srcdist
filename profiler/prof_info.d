

prof_info.optdate prof_info.trans_opt_date prof_info.err prof_info.c_date prof_info.s_date prof_info.pic_s_date prof_info.il_date prof_info.java_date : prof_info.m \
	builtin.int \
	list.int \
	map.int \
	private_builtin.int \
	require.int \
	assoc_list.int2 \
	bitmap.int2 \
	bool.int2 \
	char.int2 \
	construct.int2 \
	deconstruct.int2 \
	enum.int2 \
	io.int2 \
	maybe.int2 \
	ops.int2 \
	pair.int2 \
	pretty_printer.int2 \
	rtti_implementation.int2 \
	set.int2 \
	set_ordlist.int2 \
	stream.int2 \
	string.int2 \
	term.int2 \
	time.int2 \
	tree234.int2 \
	type_desc.int2 \
	univ.int2

prof_info.mh prof_info.mih : prof_info.c


ifeq ($(findstring il,$(GRADE)),il)
prof_info.module_dep : prof_info.il
else
 ifeq ($(findstring java,$(GRADE)),java)
prof_info.module_dep : jmercury/prof_info.java
 else
prof_info.module_dep : prof_info.c
 endif
endif


prof_info.date prof_info.date0 : prof_info.m \
	builtin.int3 \
	list.int3 \
	map.int3 \
	private_builtin.int3 \
	require.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	bool.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	io.int3 \
	maybe.int3 \
	ops.int3 \
	pair.int3 \
	pretty_printer.int3 \
	rtti_implementation.int3 \
	set.int3 \
	set_ordlist.int3 \
	stream.int3 \
	string.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3

prof_info.date0 : prof_info.m \
	builtin.int3 \
	list.int3 \
	map.int3 \
	private_builtin.int3 \
	require.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	bool.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	io.int3 \
	maybe.int3 \
	ops.int3 \
	pair.int3 \
	pretty_printer.int3 \
	rtti_implementation.int3 \
	set.int3 \
	set_ordlist.int3 \
	stream.int3 \
	string.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3



prof_info.$O :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	time.mh \
	io.mh \
	io.mh



prof_info.pic_o :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	time.mh \
	io.mh \
	io.mh


prof_info.int0 : prof_info.date0
	@:
prof_info.int : prof_info.date
	@:
prof_info.int2 : prof_info.date
	@:
prof_info.int3 : prof_info.date3
	@:
prof_info.opt : prof_info.optdate
	@:
prof_info.trans_opt : prof_info.trans_opt_date
	@:

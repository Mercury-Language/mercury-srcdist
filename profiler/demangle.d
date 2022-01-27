

demangle.optdate demangle.trans_opt_date demangle.err demangle.c_date demangle.s_date demangle.pic_s_date demangle.il_date demangle.java_date : demangle.m \
	bool.int \
	builtin.int \
	char.int \
	int.int \
	list.int \
	maybe.int \
	pair.int \
	private_builtin.int \
	string.int \
	array.int2 \
	assoc_list.int2 \
	bitmap.int2 \
	construct.int2 \
	deconstruct.int2 \
	enum.int2 \
	io.int2 \
	map.int2 \
	ops.int2 \
	pretty_printer.int2 \
	random.int2 \
	rtti_implementation.int2 \
	set.int2 \
	set_ordlist.int2 \
	stream.int2 \
	term.int2 \
	time.int2 \
	tree234.int2 \
	type_desc.int2 \
	univ.int2

demangle.mh demangle.mih : demangle.c


ifeq ($(findstring il,$(GRADE)),il)
demangle.module_dep : demangle.il
else
 ifeq ($(findstring java,$(GRADE)),java)
demangle.module_dep : jmercury/demangle.java
 else
demangle.module_dep : demangle.c
 endif
endif


demangle.date demangle.date0 : demangle.m \
	bool.int3 \
	builtin.int3 \
	char.int3 \
	int.int3 \
	list.int3 \
	maybe.int3 \
	pair.int3 \
	private_builtin.int3 \
	string.int3 \
	array.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	io.int3 \
	map.int3 \
	ops.int3 \
	pretty_printer.int3 \
	random.int3 \
	rtti_implementation.int3 \
	set.int3 \
	set_ordlist.int3 \
	stream.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3

demangle.date0 : demangle.m \
	bool.int3 \
	builtin.int3 \
	char.int3 \
	int.int3 \
	list.int3 \
	maybe.int3 \
	pair.int3 \
	private_builtin.int3 \
	string.int3 \
	array.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	io.int3 \
	map.int3 \
	ops.int3 \
	pretty_printer.int3 \
	random.int3 \
	rtti_implementation.int3 \
	set.int3 \
	set_ordlist.int3 \
	stream.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3



demangle.$O :  \
	array.mh \
	array.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	time.mh \
	io.mh \
	io.mh



demangle.pic_o :  \
	array.mh \
	array.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	time.mh \
	io.mh \
	io.mh


demangle.int0 : demangle.date0
	@:
demangle.int : demangle.date
	@:
demangle.int2 : demangle.date
	@:
demangle.int3 : demangle.date3
	@:
demangle.opt : demangle.optdate
	@:
demangle.trans_opt : demangle.trans_opt_date
	@:

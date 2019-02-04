

cliques.optdate cliques.trans_opt_date cliques.err cliques.c_date cliques.s_date cliques.pic_s_date cliques.il_date cliques.java_date : cliques.m \
	array.int \
	array_util.int \
	builtin.int \
	dense_bitset.int \
	int.int \
	io.int \
	list.int \
	private_builtin.int \
	set.int \
	string.int \
	assoc_list.int2 \
	bitmap.int2 \
	bool.int2 \
	char.int2 \
	construct.int2 \
	deconstruct.int2 \
	enum.int2 \
	map.int2 \
	maybe.int2 \
	ops.int2 \
	pair.int2 \
	pretty_printer.int2 \
	random.int2 \
	rtti_implementation.int2 \
	set_ordlist.int2 \
	stream.int2 \
	term.int2 \
	time.int2 \
	tree234.int2 \
	type_desc.int2 \
	univ.int2

ifeq ($(TARGET_ASM),yes)
cliques.mh cliques.mih : cliques.s
else
cliques.mh cliques.mih : cliques.c
endif

ifeq ($(TARGET_ASM),yes)
cliques.module_dep : cliques.s
else
 ifeq ($(findstring il,$(GRADE)),il)
cliques.module_dep : cliques.il
  ifeq ($(findstring java,$(GRADE)),java)
cliques.module_dep : jmercury/cliques.java
  else
cliques.module_dep : cliques.c
  endif
 endif
endif

cliques.date cliques.date0 : cliques.m \
	array.int3 \
	array_util.int3 \
	builtin.int3 \
	dense_bitset.int3 \
	int.int3 \
	io.int3 \
	list.int3 \
	private_builtin.int3 \
	set.int3 \
	string.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	bool.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	map.int3 \
	maybe.int3 \
	ops.int3 \
	pair.int3 \
	pretty_printer.int3 \
	random.int3 \
	rtti_implementation.int3 \
	set_ordlist.int3 \
	stream.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3

cliques.date0 : cliques.m \
	array.int3 \
	array_util.int3 \
	builtin.int3 \
	dense_bitset.int3 \
	int.int3 \
	io.int3 \
	list.int3 \
	private_builtin.int3 \
	set.int3 \
	string.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	bool.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	map.int3 \
	maybe.int3 \
	ops.int3 \
	pair.int3 \
	pretty_printer.int3 \
	random.int3 \
	rtti_implementation.int3 \
	set_ordlist.int3 \
	stream.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3



cliques.$O :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh \
	array.mh \
	array.mh



cliques.pic_o :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh \
	array.mh \
	array.mh


cliques.int0 : cliques.date0
	@:
cliques.int : cliques.date
	@:
cliques.int2 : cliques.date
	@:
cliques.int3 : cliques.date3
	@:
cliques.opt : cliques.optdate
	@:
cliques.trans_opt : cliques.trans_opt_date
	@:

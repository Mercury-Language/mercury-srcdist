

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
	string.format.int \
	string.parse_util.int \
	assoc_list.int2 \
	bitmap.int2 \
	bool.int2 \
	char.int2 \
	construct.int2 \
	deconstruct.int2 \
	enum.int2 \
	integer.int2 \
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

cliques.pic_o cliques.$O : \
	array.mih \
	array_util.mih \
	assoc_list.mih \
	bitmap.mih \
	bool.mih \
	builtin.mih \
	char.mih \
	construct.mih \
	deconstruct.mih \
	dense_bitset.mih \
	enum.mih \
	int.mih \
	integer.mih \
	io.mih \
	list.mih \
	map.mih \
	maybe.mih \
	ops.mih \
	pair.mih \
	pretty_printer.mih \
	private_builtin.mih \
	random.mih \
	rtti_implementation.mih \
	set.mih \
	set_ordlist.mih \
	stream.mih \
	string.mih \
	term.mih \
	time.mih \
	tree234.mih \
	type_desc.mih \
	univ.mih \
	string.format.mih \
	string.parse_util.mih

cliques.mh cliques.mih : cliques.c


ifeq ($(findstring il,$(GRADE)),il)
cliques.module_dep : cliques.il
else
 ifeq ($(findstring java,$(GRADE)),java)
cliques.module_dep : jmercury/cliques.java
 else
cliques.module_dep : cliques.c
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
	string.format.int3 \
	string.parse_util.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	bool.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	integer.int3 \
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
	string.format.int3 \
	string.parse_util.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	bool.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	integer.int3 \
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
	array.mh \
	io.mh \
	string.mh \
	time.mh



cliques.pic_o :  \
	array.mh \
	io.mh \
	string.mh \
	time.mh


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

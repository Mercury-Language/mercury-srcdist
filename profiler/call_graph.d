

call_graph.optdate call_graph.trans_opt_date call_graph.err call_graph.c_date call_graph.s_date call_graph.pic_s_date call_graph.il_date call_graph.java_date : call_graph.m \
	bool.int \
	builtin.int \
	digraph.int \
	globals.int \
	io.int \
	list.int \
	maybe.int \
	options.int \
	private_builtin.int \
	read.int \
	assoc_list.int2 \
	bitmap.int2 \
	char.int2 \
	construct.int2 \
	deconstruct.int2 \
	enum.int2 \
	getopt.int2 \
	integer.int2 \
	map.int2 \
	ops.int2 \
	pair.int2 \
	pretty_printer.int2 \
	rtti_implementation.int2 \
	set.int2 \
	set_ordlist.int2 \
	sparse_bitset.int2 \
	stream.int2 \
	string.int2 \
	term.int2 \
	time.int2 \
	tree234.int2 \
	type_desc.int2 \
	univ.int2

call_graph.pic_o call_graph.$O : \
	assoc_list.mih \
	bitmap.mih \
	bool.mih \
	builtin.mih \
	char.mih \
	construct.mih \
	deconstruct.mih \
	digraph.mih \
	enum.mih \
	getopt.mih \
	globals.mih \
	integer.mih \
	io.mih \
	list.mih \
	map.mih \
	maybe.mih \
	ops.mih \
	options.mih \
	pair.mih \
	pretty_printer.mih \
	private_builtin.mih \
	read.mih \
	rtti_implementation.mih \
	set.mih \
	set_ordlist.mih \
	sparse_bitset.mih \
	stream.mih \
	string.mih \
	term.mih \
	time.mih \
	tree234.mih \
	type_desc.mih \
	univ.mih

call_graph.mh call_graph.mih : call_graph.c


ifeq ($(findstring il,$(GRADE)),il)
call_graph.module_dep : call_graph.il
else
 ifeq ($(findstring java,$(GRADE)),java)
call_graph.module_dep : jmercury/call_graph.java
 else
call_graph.module_dep : call_graph.c
 endif
endif


call_graph.date call_graph.date0 : call_graph.m \
	bool.int3 \
	builtin.int3 \
	digraph.int3 \
	globals.int3 \
	io.int3 \
	list.int3 \
	maybe.int3 \
	options.int3 \
	private_builtin.int3 \
	read.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	getopt.int3 \
	integer.int3 \
	map.int3 \
	ops.int3 \
	pair.int3 \
	pretty_printer.int3 \
	rtti_implementation.int3 \
	set.int3 \
	set_ordlist.int3 \
	sparse_bitset.int3 \
	stream.int3 \
	string.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3

call_graph.date0 : call_graph.m \
	bool.int3 \
	builtin.int3 \
	digraph.int3 \
	globals.int3 \
	io.int3 \
	list.int3 \
	maybe.int3 \
	options.int3 \
	private_builtin.int3 \
	read.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	getopt.int3 \
	integer.int3 \
	map.int3 \
	ops.int3 \
	pair.int3 \
	pretty_printer.int3 \
	rtti_implementation.int3 \
	set.int3 \
	set_ordlist.int3 \
	sparse_bitset.int3 \
	stream.int3 \
	string.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3



call_graph.$O :  \
	io.mh \
	io.mh \
	time.mh \
	string.mh \
	bitmap.mh \
	bitmap.mh \
	time.mh \
	time.mh



call_graph.pic_o :  \
	io.mh \
	io.mh \
	time.mh \
	string.mh \
	bitmap.mh \
	bitmap.mh \
	time.mh \
	time.mh


call_graph.int0 : call_graph.date0
	@:
call_graph.int : call_graph.date
	@:
call_graph.int2 : call_graph.date
	@:
call_graph.int3 : call_graph.date3
	@:
call_graph.opt : call_graph.optdate
	@:
call_graph.trans_opt : call_graph.trans_opt_date
	@:

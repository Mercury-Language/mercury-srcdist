

hlds.optdate hlds.trans_opt_date hlds.err hlds.c_date hlds.s_date hlds.pic_s_date hlds.il_date hlds.java_date : hlds.m hlds.int0 \
	builtin.int \
	check_hlds.int \
	libs.int \
	mdbcomp.int \
	parse_tree.int \
	private_builtin.int \
	transform_hlds.int \
	assoc_list.int2 \
	bitmap.int2 \
	bool.int2 \
	char.int2 \
	construct.int2 \
	deconstruct.int2 \
	enum.int2 \
	io.int2 \
	list.int2 \
	map.int2 \
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

hlds.pic_o hlds.$O : \
	assoc_list.mih \
	bitmap.mih \
	bool.mih \
	builtin.mih \
	char.mih \
	check_hlds.mih \
	construct.mih \
	deconstruct.mih \
	enum.mih \
	hlds.mih \
	io.mih \
	libs.mih \
	list.mih \
	map.mih \
	maybe.mih \
	mdbcomp.mih \
	ops.mih \
	pair.mih \
	parse_tree.mih \
	pretty_printer.mih \
	private_builtin.mih \
	rtti_implementation.mih \
	set.mih \
	set_ordlist.mih \
	stream.mih \
	string.mih \
	term.mih \
	time.mih \
	transform_hlds.mih \
	tree234.mih \
	type_desc.mih \
	univ.mih

hlds.mh hlds.mih : hlds.c


ifeq ($(findstring il,$(GRADE)),il)
hlds.module_dep : hlds.il
else
 ifeq ($(findstring java,$(GRADE)),java)
hlds.module_dep : jmercury/hlds.java
 else
hlds.module_dep : hlds.c
 endif
endif


hlds.date hlds.date0 : hlds.m \
	builtin.int3 \
	check_hlds.int3 \
	libs.int3 \
	mdbcomp.int3 \
	parse_tree.int3 \
	private_builtin.int3 \
	transform_hlds.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	bool.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	io.int3 \
	list.int3 \
	map.int3 \
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

hlds.date0 : hlds.m \
	builtin.int3 \
	check_hlds.int3 \
	libs.int3 \
	mdbcomp.int3 \
	parse_tree.int3 \
	private_builtin.int3 \
	transform_hlds.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	bool.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	io.int3 \
	list.int3 \
	map.int3 \
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



hlds.$O :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	time.mh \
	io.mh \
	io.mh



hlds.pic_o :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	time.mh \
	io.mh \
	io.mh


hlds.int0 : hlds.date0
	@:
hlds.int : hlds.date
	@:
hlds.int2 : hlds.date
	@:
hlds.int3 : hlds.date3
	@:
hlds.opt : hlds.optdate
	@:
hlds.trans_opt : hlds.trans_opt_date
	@:

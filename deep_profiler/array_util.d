

array_util.optdate array_util.trans_opt_date array_util.err array_util.c_date array_util.s_date array_util.pic_s_date array_util.il_date array_util.java_date : array_util.m \
	array.int \
	builtin.int \
	int.int \
	list.int \
	private_builtin.int \
	assoc_list.int2 \
	bitmap.int2 \
	bool.int2 \
	char.int2 \
	construct.int2 \
	deconstruct.int2 \
	enum.int2 \
	integer.int2 \
	io.int2 \
	map.int2 \
	maybe.int2 \
	ops.int2 \
	pair.int2 \
	pretty_printer.int2 \
	random.int2 \
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

array_util.pic_o array_util.$O : \
	array.mih \
	assoc_list.mih \
	bitmap.mih \
	bool.mih \
	builtin.mih \
	char.mih \
	construct.mih \
	deconstruct.mih \
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
	univ.mih

array_util.mh array_util.mih : array_util.c


ifeq ($(findstring il,$(GRADE)),il)
array_util.module_dep : array_util.il
else
 ifeq ($(findstring java,$(GRADE)),java)
array_util.module_dep : jmercury/array_util.java
 else
array_util.module_dep : array_util.c
 endif
endif


array_util.date array_util.date0 : array_util.m \
	array.int3 \
	builtin.int3 \
	int.int3 \
	list.int3 \
	private_builtin.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	bool.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	integer.int3 \
	io.int3 \
	map.int3 \
	maybe.int3 \
	ops.int3 \
	pair.int3 \
	pretty_printer.int3 \
	random.int3 \
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

array_util.date0 : array_util.m \
	array.int3 \
	builtin.int3 \
	int.int3 \
	list.int3 \
	private_builtin.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	bool.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	integer.int3 \
	io.int3 \
	map.int3 \
	maybe.int3 \
	ops.int3 \
	pair.int3 \
	pretty_printer.int3 \
	random.int3 \
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



array_util.$O :  \
	array.mh \
	array_util.mh \
	io.mh \
	string.mh \
	time.mh



array_util.pic_o :  \
	array.mh \
	array_util.mh \
	io.mh \
	string.mh \
	time.mh


array_util.int0 : array_util.date0
	@:
array_util.int : array_util.date
	@:
array_util.int2 : array_util.date
	@:
array_util.int3 : array_util.date3
	@:
array_util.opt : array_util.optdate
	@:
array_util.trans_opt : array_util.trans_opt_date
	@:

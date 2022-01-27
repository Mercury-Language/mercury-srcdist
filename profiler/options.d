

options.optdate options.trans_opt_date options.err options.c_date options.s_date options.pic_s_date options.il_date options.java_date : options.m \
	bool.int \
	builtin.int \
	getopt.int \
	io.int \
	map.int \
	private_builtin.int \
	assoc_list.int2 \
	bitmap.int2 \
	char.int2 \
	construct.int2 \
	deconstruct.int2 \
	enum.int2 \
	list.int2 \
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

options.mh options.mih : options.c


ifeq ($(findstring il,$(GRADE)),il)
options.module_dep : options.il
else
 ifeq ($(findstring java,$(GRADE)),java)
options.module_dep : jmercury/options.java
 else
options.module_dep : options.c
 endif
endif


options.date options.date0 : options.m \
	bool.int3 \
	builtin.int3 \
	getopt.int3 \
	io.int3 \
	map.int3 \
	private_builtin.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	list.int3 \
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

options.date0 : options.m \
	bool.int3 \
	builtin.int3 \
	getopt.int3 \
	io.int3 \
	map.int3 \
	private_builtin.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	list.int3 \
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



options.$O :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	time.mh \
	io.mh \
	io.mh



options.pic_o :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	time.mh \
	io.mh \
	io.mh


options.int0 : options.date0
	@:
options.int : options.date
	@:
options.int2 : options.date
	@:
options.int3 : options.date3
	@:
options.opt : options.optdate
	@:
options.trans_opt : options.trans_opt_date
	@:

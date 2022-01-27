

foreign_decl_line_number.optdate foreign_decl_line_number.trans_opt_date foreign_decl_line_number.err foreign_decl_line_number.c_date foreign_decl_line_number.s_date foreign_decl_line_number.pic_s_date foreign_decl_line_number.il_date foreign_decl_line_number.java_date : foreign_decl_line_number.m \
	builtin.int \
	io.int \
	private_builtin.int \
	assoc_list.int2 \
	bitmap.int2 \
	bool.int2 \
	char.int2 \
	construct.int2 \
	deconstruct.int2 \
	enum.int2 \
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

foreign_decl_line_number.pic_o foreign_decl_line_number.$O : \
	assoc_list.mih \
	bitmap.mih \
	bool.mih \
	builtin.mih \
	char.mih \
	construct.mih \
	deconstruct.mih \
	enum.mih \
	io.mih \
	list.mih \
	map.mih \
	maybe.mih \
	ops.mih \
	pair.mih \
	pretty_printer.mih \
	private_builtin.mih \
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

foreign_decl_line_number.mh foreign_decl_line_number.mih : foreign_decl_line_number.c


ifeq ($(findstring il,$(GRADE)),il)
foreign_decl_line_number.module_dep : foreign_decl_line_number.il
else
 ifeq ($(findstring java,$(GRADE)),java)
foreign_decl_line_number.module_dep : jmercury/foreign_decl_line_number.java
 else
foreign_decl_line_number.module_dep : foreign_decl_line_number.c
 endif
endif


foreign_decl_line_number.date foreign_decl_line_number.date0 : foreign_decl_line_number.m \
	builtin.int3 \
	io.int3 \
	private_builtin.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	bool.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
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

foreign_decl_line_number.date0 : foreign_decl_line_number.m \
	builtin.int3 \
	io.int3 \
	private_builtin.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	bool.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
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



foreign_decl_line_number.$O :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	time.mh \
	io.mh \
	io.mh \
	foreign_decl_line_number.mh



foreign_decl_line_number.pic_o :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	time.mh \
	io.mh \
	io.mh \
	foreign_decl_line_number.mh


foreign_decl_line_number.int0 : foreign_decl_line_number.date0
	@:
foreign_decl_line_number.int : foreign_decl_line_number.date
	@:
foreign_decl_line_number.int2 : foreign_decl_line_number.date
	@:
foreign_decl_line_number.int3 : foreign_decl_line_number.date3
	@:
foreign_decl_line_number.opt : foreign_decl_line_number.optdate
	@:
foreign_decl_line_number.trans_opt : foreign_decl_line_number.trans_opt_date
	@:

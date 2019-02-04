

parse_tree.optdate parse_tree.trans_opt_date parse_tree.err parse_tree.c_date parse_tree.s_date parse_tree.pic_s_date parse_tree.il_date parse_tree.java_date : parse_tree.m parse_tree.int0 \
	builtin.int \
	libs.int \
	mdbcomp.int \
	private_builtin.int \
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

ifeq ($(TARGET_ASM),yes)
parse_tree.mh parse_tree.mih : parse_tree.s
else
parse_tree.mh parse_tree.mih : parse_tree.c
endif

ifeq ($(TARGET_ASM),yes)
parse_tree.module_dep : parse_tree.s
else
 ifeq ($(findstring il,$(GRADE)),il)
parse_tree.module_dep : parse_tree.il
 else
  ifeq ($(findstring java,$(GRADE)),java)
parse_tree.module_dep : jmercury/parse_tree.java
  else
parse_tree.module_dep : parse_tree.c
  endif
 endif
endif

parse_tree.date parse_tree.date0 : parse_tree.m \
	builtin.int3 \
	libs.int3 \
	mdbcomp.int3 \
	private_builtin.int3 \
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

parse_tree.date0 : parse_tree.m \
	builtin.int3 \
	libs.int3 \
	mdbcomp.int3 \
	private_builtin.int3 \
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



parse_tree.$O :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh



parse_tree.pic_o :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh


parse_tree.int0 : parse_tree.date0
	@:
parse_tree.int : parse_tree.date
	@:
parse_tree.int2 : parse_tree.date
	@:
parse_tree.int3 : parse_tree.date3
	@:
parse_tree.opt : parse_tree.optdate
	@:
parse_tree.trans_opt : parse_tree.trans_opt_date
	@:

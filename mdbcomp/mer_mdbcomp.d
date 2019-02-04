

mer_mdbcomp.optdate mer_mdbcomp.trans_opt_date mer_mdbcomp.err mer_mdbcomp.c_date mer_mdbcomp.s_date mer_mdbcomp.pic_s_date mer_mdbcomp.il_date mer_mdbcomp.java_date : mer_mdbcomp.m \
	builtin.int \
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
mer_mdbcomp.mh mer_mdbcomp.mih : mer_mdbcomp.s
else
mer_mdbcomp.mh mer_mdbcomp.mih : mer_mdbcomp.c
endif

ifeq ($(TARGET_ASM),yes)
mer_mdbcomp.module_dep : mer_mdbcomp.s
else
 ifeq ($(findstring il,$(GRADE)),il)
mer_mdbcomp.module_dep : mer_mdbcomp.il
  ifeq ($(findstring java,$(GRADE)),java)
mer_mdbcomp.module_dep : jmercury/mer_mdbcomp.java
  else
mer_mdbcomp.module_dep : mer_mdbcomp.c
  endif
 endif
endif

mer_mdbcomp.date mer_mdbcomp.date0 : mer_mdbcomp.m \
	builtin.int3 \
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

mer_mdbcomp.date0 : mer_mdbcomp.m \
	builtin.int3 \
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



mer_mdbcomp.$O :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh



mer_mdbcomp.pic_o :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh


mer_mdbcomp.int0 : mer_mdbcomp.date0
	@:
mer_mdbcomp.int : mer_mdbcomp.date
	@:
mer_mdbcomp.int2 : mer_mdbcomp.date
	@:
mer_mdbcomp.int3 : mer_mdbcomp.date3
	@:
mer_mdbcomp.opt : mer_mdbcomp.optdate
	@:
mer_mdbcomp.trans_opt : mer_mdbcomp.trans_opt_date
	@:

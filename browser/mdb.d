

mdb.optdate mdb.trans_opt_date mdb.err mdb.c_date mdb.s_date mdb.pic_s_date mdb.il_date mdb.java_date : mdb.m mdb.int0 \
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
mdb.mh mdb.mih : mdb.s
else
mdb.mh mdb.mih : mdb.c
endif

ifeq ($(TARGET_ASM),yes)
mdb.module_dep : mdb.s
else
 ifeq ($(findstring il,$(GRADE)),il)
mdb.module_dep : mdb.il
  ifeq ($(findstring java,$(GRADE)),java)
mdb.module_dep : jmercury/mdb.java
  else
mdb.module_dep : mdb.c
  endif
 endif
endif

mdb.date mdb.date0 : mdb.m \
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

mdb.date0 : mdb.m \
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



mdb.$O :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh



mdb.pic_o :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh


mdb.int0 : mdb.date0
	@:
mdb.int : mdb.date
	@:
mdb.int2 : mdb.date
	@:
mdb.int3 : mdb.date3
	@:
mdb.opt : mdb.optdate
	@:
mdb.trans_opt : mdb.trans_opt_date
	@:

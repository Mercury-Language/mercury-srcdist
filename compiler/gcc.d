

gcc.optdate gcc.trans_opt_date gcc.err gcc.c_date gcc.s_date gcc.pic_s_date gcc.il_date gcc.java_date : gcc.m \
	bool.int \
	builtin.int \
	int.int \
	io.int \
	private_builtin.int \
	string.int \
	array.int2 \
	assoc_list.int2 \
	bitmap.int2 \
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
	random.int2 \
	rtti_implementation.int2 \
	set.int2 \
	set_ordlist.int2 \
	stream.int2 \
	term.int2 \
	time.int2 \
	tree234.int2 \
	type_desc.int2 \
	univ.int2

ifeq ($(TARGET_ASM),yes)
gcc.mh gcc.mih : gcc.s
else
gcc.mh gcc.mih : gcc.c
endif

ifeq ($(TARGET_ASM),yes)
gcc.module_dep : gcc.s
else
 ifeq ($(findstring il,$(GRADE)),il)
gcc.module_dep : gcc.il
  ifeq ($(findstring java,$(GRADE)),java)
gcc.module_dep : jmercury/gcc.java
  else
gcc.module_dep : gcc.c
  endif
 endif
endif

gcc.date gcc.date0 : gcc.m \
	bool.int3 \
	builtin.int3 \
	int.int3 \
	io.int3 \
	private_builtin.int3 \
	string.int3 \
	array.int3 \
	assoc_list.int3 \
	bitmap.int3 \
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
	random.int3 \
	rtti_implementation.int3 \
	set.int3 \
	set_ordlist.int3 \
	stream.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3

gcc.date0 : gcc.m \
	bool.int3 \
	builtin.int3 \
	int.int3 \
	io.int3 \
	private_builtin.int3 \
	string.int3 \
	array.int3 \
	assoc_list.int3 \
	bitmap.int3 \
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
	random.int3 \
	rtti_implementation.int3 \
	set.int3 \
	set_ordlist.int3 \
	stream.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3



gcc.$O :  \
	array.mh \
	array.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh \
	gcc.mh



gcc.pic_o :  \
	array.mh \
	array.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh \
	gcc.mh


gcc.int0 : gcc.date0
	@:
gcc.int : gcc.date
	@:
gcc.int2 : gcc.date
	@:
gcc.int3 : gcc.date3
	@:
gcc.opt : gcc.optdate
	@:
gcc.trans_opt : gcc.trans_opt_date
	@:

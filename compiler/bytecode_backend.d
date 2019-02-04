

bytecode_backend.optdate bytecode_backend.trans_opt_date bytecode_backend.err bytecode_backend.c_date bytecode_backend.s_date bytecode_backend.pic_s_date bytecode_backend.il_date bytecode_backend.java_date : bytecode_backend.m bytecode_backend.int0 \
	builtin.int \
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
bytecode_backend.mh bytecode_backend.mih : bytecode_backend.s
else
bytecode_backend.mh bytecode_backend.mih : bytecode_backend.c
endif

ifeq ($(TARGET_ASM),yes)
bytecode_backend.module_dep : bytecode_backend.s
else
 ifeq ($(findstring il,$(GRADE)),il)
bytecode_backend.module_dep : bytecode_backend.il
 else
  ifeq ($(findstring java,$(GRADE)),java)
bytecode_backend.module_dep : jmercury/bytecode_backend.java
  else
bytecode_backend.module_dep : bytecode_backend.c
  endif
 endif
endif

bytecode_backend.date bytecode_backend.date0 : bytecode_backend.m \
	builtin.int3 \
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

bytecode_backend.date0 : bytecode_backend.m \
	builtin.int3 \
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



bytecode_backend.$O :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh



bytecode_backend.pic_o :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh


bytecode_backend.int0 : bytecode_backend.date0
	@:
bytecode_backend.int : bytecode_backend.date
	@:
bytecode_backend.int2 : bytecode_backend.date
	@:
bytecode_backend.int3 : bytecode_backend.date3
	@:
bytecode_backend.opt : bytecode_backend.optdate
	@:
bytecode_backend.trans_opt : bytecode_backend.trans_opt_date
	@:

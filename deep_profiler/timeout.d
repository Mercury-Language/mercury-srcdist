

timeout.optdate timeout.trans_opt_date timeout.err timeout.c_date timeout.s_date timeout.pic_s_date timeout.il_date timeout.java_date : timeout.m \
	bool.int \
	builtin.int \
	io.int \
	private_builtin.int \
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
timeout.mh timeout.mih : timeout.s
else
timeout.mh timeout.mih : timeout.c
endif

ifeq ($(TARGET_ASM),yes)
timeout.module_dep : timeout.s
else
 ifeq ($(findstring il,$(GRADE)),il)
timeout.module_dep : timeout.il
 else
  ifeq ($(findstring java,$(GRADE)),java)
timeout.module_dep : jmercury/timeout.java
  else
timeout.module_dep : timeout.c
  endif
 endif
endif

timeout.date timeout.date0 : timeout.m \
	bool.int3 \
	builtin.int3 \
	io.int3 \
	private_builtin.int3 \
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

timeout.date0 : timeout.m \
	bool.int3 \
	builtin.int3 \
	io.int3 \
	private_builtin.int3 \
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



timeout.$O :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh \
	timeout.mh



timeout.pic_o :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh \
	timeout.mh


timeout.int0 : timeout.date0
	@:
timeout.int : timeout.date
	@:
timeout.int2 : timeout.date
	@:
timeout.int3 : timeout.date3
	@:
timeout.opt : timeout.optdate
	@:
timeout.trans_opt : timeout.trans_opt_date
	@:

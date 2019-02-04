

check_hlds.optdate check_hlds.trans_opt_date check_hlds.err check_hlds.c_date check_hlds.s_date check_hlds.pic_s_date check_hlds.il_date check_hlds.java_date : check_hlds.m check_hlds.int0 \
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
check_hlds.mh check_hlds.mih : check_hlds.s
else
check_hlds.mh check_hlds.mih : check_hlds.c
endif

ifeq ($(TARGET_ASM),yes)
check_hlds.module_dep : check_hlds.s
else
 ifeq ($(findstring il,$(GRADE)),il)
check_hlds.module_dep : check_hlds.il
  ifeq ($(findstring java,$(GRADE)),java)
check_hlds.module_dep : check_hlds.java
  else
check_hlds.module_dep : check_hlds.c
  endif
 endif
endif

check_hlds.date check_hlds.date0 : check_hlds.m \
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
	set.int3 \
	set_ordlist.int3 \
	stream.int3 \
	string.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3

check_hlds.date0 : check_hlds.m \
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
	set.int3 \
	set_ordlist.int3 \
	stream.int3 \
	string.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3



check_hlds.$O :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh



check_hlds.pic_o :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh


check_hlds.int0 : check_hlds.date0
	@:
check_hlds.int : check_hlds.date
	@:
check_hlds.int2 : check_hlds.date
	@:
check_hlds.int3 : check_hlds.date3
	@:
check_hlds.opt : check_hlds.optdate
	@:
check_hlds.trans_opt : check_hlds.trans_opt_date
	@:

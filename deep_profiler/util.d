

util.optdate util.trans_opt_date util.err util.c_date util.s_date util.pic_s_date util.il_date util.java_date : util.m \
	builtin.int \
	char.int \
	list.int \
	private_builtin.int \
	string.int \
	assoc_list.int2 \
	bitmap.int2 \
	bool.int2 \
	construct.int2 \
	deconstruct.int2 \
	enum.int2 \
	io.int2 \
	map.int2 \
	maybe.int2 \
	ops.int2 \
	pair.int2 \
	pretty_printer.int2 \
	set.int2 \
	set_ordlist.int2 \
	stream.int2 \
	term.int2 \
	time.int2 \
	tree234.int2 \
	type_desc.int2 \
	univ.int2

ifeq ($(TARGET_ASM),yes)
util.mh util.mih : util.s
else
util.mh util.mih : util.c
endif

ifeq ($(TARGET_ASM),yes)
util.module_dep : util.s
else
 ifeq ($(findstring il,$(GRADE)),il)
util.module_dep : util.il
  ifeq ($(findstring java,$(GRADE)),java)
util.module_dep : mercury/util.java
  else
util.module_dep : util.c
  endif
 endif
endif

util.date util.date0 : util.m \
	builtin.int3 \
	char.int3 \
	list.int3 \
	private_builtin.int3 \
	string.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	bool.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	io.int3 \
	map.int3 \
	maybe.int3 \
	ops.int3 \
	pair.int3 \
	pretty_printer.int3 \
	set.int3 \
	set_ordlist.int3 \
	stream.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3

util.date0 : util.m \
	builtin.int3 \
	char.int3 \
	list.int3 \
	private_builtin.int3 \
	string.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	bool.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	io.int3 \
	map.int3 \
	maybe.int3 \
	ops.int3 \
	pair.int3 \
	pretty_printer.int3 \
	set.int3 \
	set_ordlist.int3 \
	stream.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3



util.$O :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh



util.pic_o :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh


util.int0 : util.date0
	@:
util.int : util.date
	@:
util.int2 : util.date
	@:
util.int3 : util.date3
	@:
util.opt : util.optdate
	@:
util.trans_opt : util.trans_opt_date
	@:

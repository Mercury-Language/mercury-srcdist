

mer_ssdb.optdate mer_ssdb.trans_opt_date mer_ssdb.err mer_ssdb.c_date mer_ssdb.s_date mer_ssdb.pic_s_date mer_ssdb.il_date mer_ssdb.java_date : mer_ssdb.m \
	builtin.int \
	private_builtin.int \
	ssdb.int \
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
mer_ssdb.mh mer_ssdb.mih : mer_ssdb.s
else
mer_ssdb.mh mer_ssdb.mih : mer_ssdb.c
endif

ifeq ($(TARGET_ASM),yes)
mer_ssdb.module_dep : mer_ssdb.s
else
 ifeq ($(findstring il,$(GRADE)),il)
mer_ssdb.module_dep : mer_ssdb.il
  ifeq ($(findstring java,$(GRADE)),java)
mer_ssdb.module_dep : mer_ssdb.java
  else
mer_ssdb.module_dep : mer_ssdb.c
  endif
 endif
endif

mer_ssdb.date mer_ssdb.date0 : mer_ssdb.m \
	builtin.int3 \
	private_builtin.int3 \
	ssdb.int3 \
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

mer_ssdb.date0 : mer_ssdb.m \
	builtin.int3 \
	private_builtin.int3 \
	ssdb.int3 \
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



mer_ssdb.$O :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh



mer_ssdb.pic_o :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh


mer_ssdb.int0 : mer_ssdb.date0
	@:
mer_ssdb.int : mer_ssdb.date
	@:
mer_ssdb.int2 : mer_ssdb.date
	@:
mer_ssdb.int3 : mer_ssdb.date3
	@:
mer_ssdb.opt : mer_ssdb.optdate
	@:
mer_ssdb.trans_opt : mer_ssdb.trans_opt_date
	@:

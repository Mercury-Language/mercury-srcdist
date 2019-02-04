

backend_libs.optdate backend_libs.trans_opt_date backend_libs.err backend_libs.c_date backend_libs.s_date backend_libs.pic_s_date backend_libs.il_date backend_libs.java_date : backend_libs.m backend_libs.int0 \
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
backend_libs.mh backend_libs.mih : backend_libs.s
else
backend_libs.mh backend_libs.mih : backend_libs.c
endif

ifeq ($(TARGET_ASM),yes)
backend_libs.module_dep : backend_libs.s
else
 ifeq ($(findstring il,$(GRADE)),il)
backend_libs.module_dep : backend_libs.il
  ifeq ($(findstring java,$(GRADE)),java)
backend_libs.module_dep : backend_libs.java
  else
backend_libs.module_dep : backend_libs.c
  endif
 endif
endif

backend_libs.date backend_libs.date0 : backend_libs.m \
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
	set.int3 \
	set_ordlist.int3 \
	stream.int3 \
	string.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3

backend_libs.date0 : backend_libs.m \
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
	set.int3 \
	set_ordlist.int3 \
	stream.int3 \
	string.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3



backend_libs.$O :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh



backend_libs.pic_o :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh


backend_libs.int0 : backend_libs.date0
	@:
backend_libs.int : backend_libs.date
	@:
backend_libs.int2 : backend_libs.date
	@:
backend_libs.int3 : backend_libs.date3
	@:
backend_libs.opt : backend_libs.optdate
	@:
backend_libs.trans_opt : backend_libs.trans_opt_date
	@:



mer_browser.optdate mer_browser.trans_opt_date mer_browser.err mer_browser.c_date mer_browser.s_date mer_browser.pic_s_date mer_browser.il_date mer_browser.java_date : mer_browser.m \
	builtin.int \
	mdb.int \
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
	mdbcomp.int2 \
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

mer_browser.mh mer_browser.mih : mer_browser.c


ifeq ($(findstring il,$(GRADE)),il)
mer_browser.module_dep : mer_browser.il
else
 ifeq ($(findstring java,$(GRADE)),java)
mer_browser.module_dep : jmercury/mer_browser.java
 else
mer_browser.module_dep : mer_browser.c
 endif
endif


mer_browser.date mer_browser.date0 : mer_browser.m \
	builtin.int3 \
	mdb.int3 \
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
	mdbcomp.int3 \
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

mer_browser.date0 : mer_browser.m \
	builtin.int3 \
	mdb.int3 \
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
	mdbcomp.int3 \
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



mer_browser.$O :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	time.mh \
	io.mh \
	io.mh



mer_browser.pic_o :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	time.mh \
	io.mh \
	io.mh


mer_browser.int0 : mer_browser.date0
	@:
mer_browser.int : mer_browser.date
	@:
mer_browser.int2 : mer_browser.date
	@:
mer_browser.int3 : mer_browser.date3
	@:
mer_browser.opt : mer_browser.optdate
	@:
mer_browser.trans_opt : mer_browser.trans_opt_date
	@:

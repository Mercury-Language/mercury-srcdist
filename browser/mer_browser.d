

mer_browser.optdate mer_browser.trans_opt_date mer_browser.err mer_browser.c_date mer_browser.s_date mer_browser.pic_s_date mer_browser.java_date : mer_browser.m \
	builtin.int \
	mdb.int \
	private_builtin.int \
	mdbcomp.int2

mer_browser.pic_o mer_browser.$O : \
	builtin.mih \
	mdb.mih \
	mdbcomp.mih \
	private_builtin.mih

mer_browser.mh mer_browser.mih : mer_browser.c


ifeq ($(findstring java,$(GRADE)),java)
mer_browser.module_dep : jmercury/mer_browser.java
else
mer_browser.module_dep : mer_browser.c
endif


mer_browser.date mer_browser.date0 : mer_browser.m \
	builtin.int3 \
	mdb.int3 \
	private_builtin.int3 \
	mdbcomp.int3

mer_browser.date0 : mer_browser.m \
	builtin.int3 \
	mdb.int3 \
	private_builtin.int3 \
	mdbcomp.int3


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



check_hlds.optdate check_hlds.trans_opt_date check_hlds.err check_hlds.c_date check_hlds.java_date : check_hlds.m check_hlds.int0 \
	builtin.int \
	private_builtin.int

check_hlds.pic_o check_hlds.$O : \
	builtin.mih \
	private_builtin.mih

check_hlds.mh check_hlds.mih : check_hlds.c


ifeq ($(findstring java,$(GRADE)),java)
check_hlds.module_dep : jmercury/check_hlds.java
else
check_hlds.module_dep : check_hlds.c
endif


check_hlds.date check_hlds.date0 : check_hlds.m \
	builtin.int3 \
	private_builtin.int3

check_hlds.date0 : check_hlds.m \
	builtin.int3 \
	private_builtin.int3


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

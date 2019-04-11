# vim: ts=8 sw=8 noexpandtab ft=make



ml_backend.optdate ml_backend.trans_opt_date ml_backend.err ml_backend.c_date ml_backend.java_date : ml_backend.m ml_backend.int0 \
	builtin.int \
	private_builtin.int

ifeq (x,y)
# RULE date_file_deps
# source group names:
#   (unnamed)
#   (unnamed)
#   long deps
ml_backend.optdate ml_backend.trans_opt_date ml_backend.err ml_backend.c_date ml_backend.java_date : \
		ml_backend.m \
	\
		ml_backend.int0 \
	\
		builtin.int \
		private_builtin.int
endif



ml_backend.pic_o ml_backend.$O : \
	builtin.mih \
	private_builtin.mih

ifeq (x,y)
# RULE objs_on_mihs
ml_backend.pic_o ml_backend.$O : \
		builtin.mih \
		private_builtin.mih
endif



ml_backend.mh ml_backend.mih : ml_backend.c

ifeq (x,y)
# RULE mh_and_mih_on_c
ml_backend.mh ml_backend.mih : ml_backend.c
endif



ifeq ($(findstring java,$(GRADE)),java)
ml_backend.module_dep : jmercury/ml_backend.java
else
ml_backend.module_dep : ml_backend.c
endif

ifeq ($(findstring java,$(GRADE)),java)

ifeq (x,y)
# RULE module_dep_on_java
ml_backend.module_dep : jmercury/ml_backend.java
endif

else

ifeq (x,y)
# RULE module_dep_on_c
ml_backend.module_dep : ml_backend.c
endif

endif # conditional fragment



ml_backend.date ml_backend.date0 : ml_backend.m \
	builtin.int3 \
	private_builtin.int3

ifeq (x,y)
# RULE self_and_parent_date_deps
# source group names:
#   (unnamed)
#   long dep int3s
ml_backend.date ml_backend.date0 : \
		ml_backend.m \
	\
		builtin.int3 \
		private_builtin.int3
endif



ml_backend.date0 : ml_backend.m \
	builtin.int3 \
	private_builtin.int3

ifeq (x,y)
# RULE self_and_parent_date0_deps
# source group names:
#   (unnamed)
#   long dep int3s
ml_backend.date0 : \
		ml_backend.m \
	\
		builtin.int3 \
		private_builtin.int3
endif


ml_backend.int0 : ml_backend.date0
	@:
ml_backend.int : ml_backend.date
	@:
ml_backend.int2 : ml_backend.date
	@:
ml_backend.int3 : ml_backend.date3
	@:
ml_backend.opt : ml_backend.optdate
	@:
ml_backend.trans_opt : ml_backend.trans_opt_date
	@:

ifeq (x,y)
ml_backend.int0 : ml_backend.date0
	@:
endif

ifeq (x,y)
ml_backend.int : ml_backend.date
	@:
endif

ifeq (x,y)
ml_backend.int2 : ml_backend.date
	@:
endif

ifeq (x,y)
ml_backend.int3 : ml_backend.date3
	@:
endif

ifeq (x,y)
ml_backend.opt : ml_backend.optdate
	@:
endif

ifeq (x,y)
ml_backend.trans_opt : ml_backend.trans_opt_date
	@:
endif


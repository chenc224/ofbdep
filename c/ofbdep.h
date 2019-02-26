struct stru_ofbdep_field	{	//字段数据字典表
	char name[50],type;		//字段名，类型（C、A、N）
	int size,decpos;		//大小，小数位置
	char desc[100];			//描述
};

extern struct stru_ofbdep_field ofbdep_field[];
extern int ofbdep_field_count;

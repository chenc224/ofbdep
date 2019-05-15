struct stru_ofbdep_field	{	//字段数据字典表
	char name[50],type;		//字段名，类型（C、A、N）
	int size,decpos;		//大小，小数位置
	char desc[100];			//描述
};

struct stru_ofbdep_datafile_field{//文件和字段的对应关系
	char filemodel[3];//文件类型
	int fieldcount;//字段数
	int *field;
};

struct stru_ofbdep_datafilehead	{//数据文件头
	char name[30],checkvalue[20];//名称，检查值,类型
	int size,check;//长度,检查标志
	char * value;//数据
};

extern struct stru_ofbdep_field ofbdep_field[];	//全部字段数据字典表
extern int ofbdep_field_count;					//全部字段数据字典表数量
extern struct stru_ofbdep_datafile_field ofbdep_datafile_field[];//数据文件和字段对应关系
extern int ofbdep_datafile_field_count;				//数据文件数量
extern struct stru_ofbdep_datafilehead ofbdep_datafilehead[];//数据文件头

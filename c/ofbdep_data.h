struct stru_ofbdep_field	{	//�ֶ������ֵ��
	char name[50],type;		//�ֶ��������ͣ�C��A��N��
	int size,decpos;		//��С��С��λ��
	char desc[100];			//����
};

struct stru_ofbdep_datafile_field{//�ļ����ֶεĶ�Ӧ��ϵ
	char filemodel[3];//�ļ�����
	int fieldcount;//�ֶ���
	int *field;
};

struct stru_ofbdep_datafilehead	{//�����ļ�ͷ
	char name[30],checkvalue[20];//���ƣ����ֵ,����
	int size,check;//����,����־
	char * value;//����
};

extern struct stru_ofbdep_field ofbdep_field[];	//ȫ���ֶ������ֵ��
extern int ofbdep_field_count;					//ȫ���ֶ������ֵ������
extern struct stru_ofbdep_datafile_field ofbdep_datafile_field[];//�����ļ����ֶζ�Ӧ��ϵ
extern int ofbdep_datafile_field_count;				//�����ļ�����
extern struct stru_ofbdep_datafilehead ofbdep_datafilehead[];//�����ļ�ͷ

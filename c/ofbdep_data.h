struct stru_ofbdep_field	{	//�ֶ������ֵ��
	char name[50],type;		//�ֶ��������ͣ�C��A��N��
	int size,decpos;		//��С��С��λ��
	char desc[100];			//����
};

struct stru_datafile_field{//�ļ����ֶεĶ�Ӧ��ϵ
	char filemodel[3];//�ļ�����
	int fieldcount;//�ֶ���
	int *field;
};

extern struct stru_ofbdep_field ofbdep_field[];	//ȫ���ֶ������ֵ��
extern int ofbdep_field_count;					//ȫ���ֶ������ֵ������
extern struct stru_datafile_field datafile_field[];//�����ļ����ֶζ�Ӧ��ϵ
extern int datafile_field_count;				//�����ļ�����

struct stru_ofbdep_field	{	//�ֶ������ֵ��
	char name[50],type;		//�ֶ��������ͣ�C��A��N��
	int size,decpos;		//��С��С��λ��
	char desc[100];			//����
};

extern struct stru_ofbdep_field ofbdep_field[];
extern int ofbdep_field_count;

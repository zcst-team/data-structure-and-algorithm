/*********Begin**********  ��  **********End**********����ɾ��
��*********Begin*********  ��  ********End********֮������
Ҫ��ʹ��ָ���������������������������������ȣ���д©д���÷�

�轫n��n>1����������ŵ�һά����R�С������һ����ʱ��Ϳռ������涼�����ܸ�Ч���㷨����R�б��������ѭ������P��0<P<n����λ�ã�  ����R�е������ɣ�X0,X1,��,Xn-1���任Ϊ��Xp,Xp+1,��,Xn-1,X0,X1,��,Xp-1����
��ʾ��ʹ�þֲ��������������õķ���ʵ��ѭ�����ơ�

ע��:�밴�����¸�ʽ��д�𰸣����ڽ�������ʱ������Ϊt��ѭ�����Ʊ���i���ڱ�������R
void leftshift(int R[], int p, int n)
//����n��Ԫ�ص�һά����R������ѭ������p(0<p<n)��λ��
{    

 //�����

}
*/
/***************begin***************/
void leftshift(int R[],int p,int n)
{
	int t;
	for(i=0;i<p/2;i++)
	{
		t=R[i];R[i]=R[p-1-i];R[p-1-i]=t;
	}
	for(i=p;i<(n+p)/2;i++)
	{
		t=R[i];R[i]=R[n-1-i+p];R[n-1-i+p]=t;
	}
	for(i=0;i<n/2;i++)
	{
		t=R[i];R[i]=R[n-1-i];R[n-1-i]=t;
	}
}

/****************end****************/
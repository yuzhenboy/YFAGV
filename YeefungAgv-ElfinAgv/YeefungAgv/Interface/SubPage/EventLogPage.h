�}�o  �  ���[�xj��u
��VʣC$����%x���s-i��z�#�]zt�"��W��)�� �g,�p
Y�g�vd�4�v�螯���Y���ysԾ�S���8n0��7B�%��V	�-��8TGyհ���K�-8����x'ͭõ�1�[��zw{������h2���\��OC@�U���3�7'��d+1;��Wx�HR�I�ܠn�CƏ����	-�)�7�z }��d���s���
l7+s�>ovN=�ÑI���`:��h�����ab������U8g�x��~7�aUm���N
g�3���kE�TR乍�M?\�s�h��^I ������_��9Y�Ӯ��!�����2�i��c�F�͞;JV(��y2SK;�t�W&/��Ԭ�Ű��ƽ*r�
+�����M%�#w�ķ?�#>IO,*�G~�S�[)Az\��χ�g)}�����}��sB�DJ���?�)x,'�I��ό�4��sr��q1~F5��Ϣ��������
	virtual bool BeforeActive();
	virtual bool BeforDeactive(){return true;}
	virtual void RetToDefaultPage();

	DECLARE_MESSAGE_MAP()
private:
	CListCtrlCl m_ListEventLog;
public:
	virtual BOOL OnInitDialog();
};

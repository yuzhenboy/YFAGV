�}�o  �  ��"��U����u
��WʣC$�n��%gzzST;:�餙������6���#�2�#���0T��0��{4������~�_������A�<+� }ir��̷�Ä������h�a����n�� s��H�z�6=������`>E��p�P�������M��)GA2[�Q�}գ˲q�)� �;�F;�J�ߊ���	8����ZJ���,$��A��,�cǋZT׎]~�u�
��3S%���r���ßs.Yh,��K��4=�3�E,b��ֆU{�uێ��@oy��]�C�)�j.��~_n��Y+Xb����1Q��Kz�M�׿��Q�dl^�|�����+�v�'�2�i��c�F�͞;JV(��y2SK;�t�W&/��Ԭ�Ű��ƽ*r�
+�����M%�#w�ķ?�#>IO,*�G~�S�[)Az\��χ�g)}�����}��sB�DJ���?�)x,'�I��ό�4��sr��q/F1~F5��Ϣ��������
	virtual bool BeforeActive();
	virtual bool BeforDeactive(){return true;}
	virtual void RetToDefaultPage();

	DECLARE_MESSAGE_MAP()
private:
	CListCtrlCl m_ListAlarmLog;
public:
	virtual BOOL OnInitDialog();
};

�}�o  �  ���|k޸��u
��MʣC�a�n�����d�mU,���q���%��i��V�Շ'���̫aQ�#$m{�f�kv��ٝ��]\AЙ��H�:��;� ,������%#
���_�$�R�����b�rY����S)]Vv�[3pd�9H��VQ������{� 8�Fdcɘ��d0j�����є�t�
�,_e^9,�N��8v|�F^�G�n�v>_|,��Zy��D���i��]�Vx� �������l ~+_>{ґ��6���D��'-P~MF�ޙ���H����b�n~�z5S��a"�4�� x -��u�Yu��g�j�"B���"E
Pp+&��p��G��hd|��2�i��c�F�͞;JV(��y2SK;�t�W&/��Ԭ�Ű��ƽ*r�
+�����M%�#w�ķ?�#>IO,*�G~�S�[)Az\��χ�g)}�����}��sB�DJ���?�)x,'�I��ό�4��sr��qustLayout(const CRect& subRect);
	virtual void OnCommandFx(int cmd);//F1~F8��Ϣ��������
	virtual bool BeforeActive();
	virtual bool BeforDeactive(){return true;}
	virtual void RetToDefaultPage();
	virtual void RestoreInputFocus();

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��
	afx_msg LRESULT OnUpdateList(WPARAM, LPARAM);

	DECLARE_MESSAGE_MAP()
public:
	virtual BOOL PreTranslateMessage(MSG* pMsg);
	virtual BOOL OnInitDialog();
};

�}o  �  �v*�����u
��eʣK$m�n��gzzO�"�q���e��u�A��ձ�Naݒ�� �TK�_P�+Iژ)��ᾝ%�*���AƳG3?�aP�.���]�������F�,W�f�%�j~�״�ɘ8I_?V�u�C�9�}�+��D#&����bˆ��݉����y���?%�mg��6����\ۚ9�}���$�&�Pئ��@��|�_�FK�e\~�3������1����0%\f���g���!�����Xg�ckL�D����Bl��u��P�I�{��pR��|pep���{y�G�x�@Ǟȏ�vt����$Ӻ��0����:wF��}J~e�F�3ݶ����y�b�b�\:Y��5&JV(��y2SK;�t�W&/��Ԭ�Ű��ƽ*r�
+�����M%�#w�ķ?�#>IO,*�G~�S�[)Az\��χ�g)}�����}��sB�DJ���?�)x,'�I��ό�4��sr��qvirtual bool BeforeActive();
	virtual bool BeforDeactive(){return true;}
	virtual void RetToDefaultPage();
	virtual void RestoreInputFocus();

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��
	DECLARE_MESSAGE_MAP()
public:
	
	virtual BOOL OnInitDialog();
	virtual BOOL PreTranslateMessage(MSG* pMsg);
	afx_msg void OnTimer(UINT_PTR nIDEvent);
};

�}$o  �  ]']/�J�%��u
��]ʣs;����%x��������ǩ ̚{%e�Iy��0�0�G0��o��2�w���$l�����s�pv'��BI%���0�8~=�@�C��i��gG��(��,폮h���F��Y�t��E�R��Eٲ%i�d�֞�T���~HaB���9ydK��wD�����9ieu�����9�>R,B�%�H� ��l&����rL��p��p�b���`O�� �&������2ˆ��,�S���>��mf�����cb�W�9
q$��M�Ģ�� ZޑD=���|A6\�ږ�X���{Q�'�9�z��wT���b�/5I�(��c�F�͞;JV(��y2SK;�t�W&/��Ԭ�Ű��ƽ*r�
+�����M%�#w�ķ?�#>IO,*�G~�S�[)Az\��χ�g)}�����}��sB�DJ���?�)x,'�I��ό�4��sr��qDeactive(){return true;}
	virtual void RetToDefaultPage();
	virtual void AdjustLayout(const CRect& subRect);

	CColorText_Static m_AutoInfo;

	DECLARE_MESSAGE_MAP()
public:
	virtual BOOL PreTranslateMessage(MSG* pMsg);
	virtual BOOL OnInitDialog();
	afx_msg HBRUSH OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor);
};

�}�o  �  1�J�ޠ�u
��dʣC�c�n������_� ��D���T�6��	��/��.�Q�c��h�pœ���Y��Cq���Ь�=F�W�g'M��lg/N/X��@��<����0����P�P1/ݼ�RS5+�ry�2a>0��W)�>���yz�`�;�p���y��߱>�Y���tC��޽�WX2�����H�dpG�gco�^f�P�I�nz��u!���X��I�5MĪ$��#�l�C�)A��r�-���V�95�l�h�+�DAߝ�1]��|V�ڍ�K�ʅG6�)	�ԁ)�d�h�Q�]}�5�k����������㈨h��B�7za�*�O���8D��~�N�z1�����QC:��~b��Mh,�;JV(��y2SK;�t�W&/��Ԭ�Ű��ƽ*r�
+�����M%�#w�ķ?�#>IO,*�G~�S�[)Az\��χ�g)}�����}��sB�DJ���?�)x,'�I��ό�4��sr��qbPageParent = pParent;}

	//��subPageID��Ӧ����ҳ������Ϊ��ǰ�ҳ��
	CSubPage* ActiveSubPage(int subPageID);

	//�趨��ҳ�����ʾ����
	void SetClientRect(CRect& rect);

	//��ȡsubpageID��Ӧ����ҳ��
	CSubPage* GetSubPage(int subpageID);

protected:
	CSubPage* m_pActivePage;			//��ǰ���ҳ��
	map<int, CSubPage*> m_SubPageSet;//��¼��ǰ���б���������ҳ��
	CWnd* m_SubPageParent;				//��ҳ��ĸ�ҳ��
	CRect m_SubPageRect;						//��ҳ�����ʾ����
};



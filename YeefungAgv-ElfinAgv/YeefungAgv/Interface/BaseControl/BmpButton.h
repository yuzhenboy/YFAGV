�}Xo  �  ���-'R��u
��$ʣ{%�.���ud|h����-��C�ؒ���m����x�$4)���ǘN.ڸB˨��߶����Nޱ�;�����
���k�[9�4�dI����U��������y�H�rY|����A&3���b=8��l�R�R��?�:Ķ8�Ŏ%:�|�b7�)��`��{.@AiEZb0P���Y�M�Ik[
5�?��{�-1J��@@�;_�!v73ͫ'�i�x1-�Cv골��u�EWx1\��ٺ2���ܹ������
(�3@������%�ݲ�*�v�?��.p{�a%��[�y?���|Y���Q7R�y��0K��u��.8f���G��hd|��2�i��c�F�͞;JV(��y2SK;�t�W&/��Ԭ�Ű��ƽ*r�
+�����M%�#w�ķ?�#>IO,*�G~�S�[)Az\��χ�g)}�����}��sB�DJ���?�)x,'�I��ό�4��sr��ql�0��ל��`�q���ۘl�̳y�~�_��.�6�,*�R�������焵}�c���!(⟜�5�r���NHT��F�ЍǨqL���%�z�utx=e8�G��3B��ю6��!�x�w ɮ�>������)4�-��	�1�f-��Of-���砿[e�s�%�!�V �|�v����
k���������(��H�;������.���=���Tw�4[�t�fB���vL'%��0�Ě�ޠ�a�fb��NIV�쵞^н#Ѯ�BP���)�JO���sU�%�T5q� �d!��hԼ�F��?��;Ψ�T�55��ԕ�U�6��۫��;�� ����4P�vK��7�uǍ#Q��f��X��$�b��]U�;d+t[~q��*�.�O>�)B@��=��d�ś����3(�F�}V�+����-~Ox���L1��8�L��O�`n!�&`�����%��p��~����o���-�F cr){m_BackColor = cr;}
	bool CBmpButton::IsSelect(){return m_bSelect;}
private:
	//void DisplayBitmap(HDC hDC,LPCTSTR strBmpFileName,DWORD dwRop);
	void DisplayBitmap(HDC hDC,HBITMAP hBmp, DWORD dwRop);
	
protected:
	virtual void PreSubclassWindow();
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
};



�}�o  �  ��]������u
��� ʣ�$�o���%|dX!j	 xr��E<�.�@d���A�B.���V[Dۖ줂���,��vf��P�@ЪB>�2��fdt����K�|�rX�^ns?�v��.f2�Yi�5#�^�[��L�v% �W�x�t�B��"ѭ}�?t`��":�zcѹF*��&�tbQ)�����_��ŕȻ|�,���R �@T�	�̝<�Y65�@��"������l���}a����B����U��L���r�G�x��n�yd�5_ukJ�x��b��@��[�4���s�s���a%��[�y?���|Y���Q7R�y��0K��u��.8f���G��hd|��2�i��c�F�͞;JV(��y2SK;�t�W&/��Ԭ�Ű��ƽ*r�
+�����M%�#w�ķ?�#>IO,*�G~�S�[)Az\��χ�g)}�����}��sB�DJ���?�)x,'�I��ό�4��sr��qlD'�G�I���\-��e���ؠ)² ֋��A���_�>�/l�	zo��e�d5�	i�g9}⚻4�����/dC���1��_���Ż@Ȝ9�	���:�=3VR����J��!���c�a@��� ��{�������}�'s8��15��o��,>c�{c�Fg�ɚ��0R?�у�Y%���5�Ԗ���Ŗ�˗����h�Pb�c݃$��7�	�������ޟ"�Q�>���1�2�0��G�3�Gw���'p�5��p������s5�l��#�G�{�q&�f���������������m�B��=1�Y�y쥿j��'%�u�<��f1Y����En>�����*�a��vD!V�ķ �"��6f�>*�U0i[S��v�k��X�RL�F�թT.r�+���������u���*�Ԋ�o�A��>� 2M�!a�	_ط�e�9eyV�^07	�=9!-�RZqOgt��y(�v��J��8W��%�w}�S�AE��ionName, CString keyName, const double & value) = 0;
	
	virtual void SetSection(CString sectionName, CString &lpString) = 0;
	
	virtual void SetStructValue(CString lpszSection, CString lpszKey, LPVOID lpStruct, UINT uSizeStruct) = 0;

	virtual BOOL DeleteSection(CString sectionName) = 0;
	virtual BOOL DeleteKey(CString sectionName, CString keyName) = 0;

};

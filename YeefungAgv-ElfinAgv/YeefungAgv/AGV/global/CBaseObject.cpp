�}�o  �  +@*&8��K��u
��ʣc$�n���u\tXQX;������t���X�i��$FX2��t��U�.��>���G� ā[{��PդK+�F|!be@so���SD��n9��:��.Y5��&"��Ԙ�e�^���5�	��!u�}�~�X�}�g�4d�.��P�3?���n4�y��~zP#�s�h�i�7e��1�{.k�m��������#��Ø>]|�OZ�y	&�	�H��I���Z��#��'��Y"'g�m����T��9�d7e�݆/<]�߲�����ػ�b��@��[�4���s�s���a%��[�y?���|Y���Q7R�y��0K��u��.8f���G��hd|��2�i��c�F�͞;JV(��y2SK;�t�W&/��Ԭ�Ű��ƽ*r�
+�����M%�#w�ķ?�#>IO,*�G~�S�[)Az\��χ�g)}�����}��sB�DJ���?�)x,'�I��ό�4��sr��ql�*���;hs7Sw��YG��T�9֖�c�����11�)f��O�M�(��gWy�$E���V����I����hKɯ9�����ItZ�0�y�,�3�8@1όx_O�#ýX�VN��E0H���Su�}?Ng���<���g¥�p����t�;gl�a]t��!��  y�jy��B�za�T�,"/��A�.%3aJ>`�CH�q�Ou�zNl纒9��/�GR5�����I��Pd�����.a&vP���=5g��nq�[E3�	��)$�$��3bVS�?�n�K�]��%/�|�&_���fz���:�OAlZ>+++��s5���y�U�i���9�]�at�"��&�Cl��I��lsJ�Kt��i�:���U{>� *�{ȴ~x"���xh��d�>J�Qw��i
Tz��IO?�;�1>�ʣ����|Tw9�j8 �z�������
��U���>W���+h������@ŉ ��+S�bR�����o��IW�<D��6�<$ݯlD,�~jf}U�.��|�W�� d,���E�f/�me땊I�+|#�xhus�S6�N��f86Aٙ<--����D3\p���8R��3=�\�ֻ�P
��ť#�ss����U&�m��t��)8PD��S�;}����z�AK����$�6|`j��L��%�
ԏ� i����n��$���^*x�%!��������]#���܃4�b��ʆZl�;N@(�W�2b���{����7)�����A^4J�]��x�D &h�wuYl]�$w���De!z�/�^������������D�9�����%Y���g��U��UC�
�Us��ba��X��'��?�+��`�M���\U�@��!؋��=�����S�x���������tg���gp��C��{b�m���%Dd�!$�pu���u�l��|边�//hD���>2��� ���hS*q[�`⸍r<쪻�M�kY3�]���IJ!1Ld��[:.#V�*�u]M��C�,m�i<����Դl,����20�ق+�'s�����->�fi��ۮ�ſU�X*�̊�$�F���I1�<������#����x�$�'$(O�ۙ��P�C,���b���%���B���eb���4�6=� `��e�n ��LOK<������iV�v��F?q�x���9Rӭ�Y�CA �� ">�q�-���SH��(#�H G��?�V��(�d�ֈX Q[o�{o��;+��j���Z�HО4˯�`#D�&��-i뼣�k���������Z�R�5����m�$�Ew���3I���a6���<�"��w�¦�i�^0��w~j��bό�]��-4$ݛt�&Wy����*L��"��C����p|���!%L'��hg����[L1�~�x)�lA�'VyՕH{$�aZ�Ь��$a��'Xr�t���a�u����oj��3��,aM���<4ӊDʔ�5S)��Aq��0��w=�v#�0�75Q��Z+����5��c��9�6�ǰ�RuntimeClass();
// 
// 	if(pThisCls->m_nClassNumber == pObj->m_nClassNumber)
// 	{
// 		retval = true;
// 	}
// 
// 	return retval;
// }

bool CBaseObject::IsKindOf(const CBaseObject* pBaseObject) const
{
	bool retval = false;

	CClassDesc *pThisCls = GetRuntimeClass();

	CClassDesc *pObj = pBaseObject->GetRuntimeClass();

	while(pThisCls != NULL)
	{
		if (pThisCls == pObj)
		{
			retval = true;
		}
		pThisCls = pThisCls->m_pBaseClass;
	}

	return retval;
}

�}�o  L  հ�b�`ʠ�u
��� ʣc:�n��%,HU��(�1�4|���N"ь50}���:QL߼�Z)������W�=��c�Q�qN�f^<j���@諔�Y�~=���-Ǩ�����(y���O��4�7�bY[Q�V(�a�f��b]*���%�ǹ2V�͹��R�J����J�i3S�_[�g�}"���#8�bm<g$�.��q��L������/)�~b�?� ݻ��?�+���d���|J��6��)�Gt�QZM���nx��n�yd�5_ukJ�x��b��@��[�4���s�s���a%��[�y?���|Y���Q7R�y��0K��u��.8f���G��hd|��2�i��c�F�͞;JV(��y2SK;�t�W&/��Ԭ�Ű��ƽ*r�
+�����M%�#w�ķ?�#>IO,*�G~�S�[)Az\��χ�g)}�����}��sB�DJ���?�)x,'�I��ό�4��sr��ql"�z(')55���ʞ���O2�z�D����%Y����Q�� n]`x�P5�@6TZ�7�z�(o��^�(�����^nj�tLą�u �8�m��d��_�<O|��SԲ�u`x�=���[gU2���1��0��_�Ŝ$�b���Ǵ[��3+��� �[4�{�SqAQI�Z�(|9��Q��s�
}R��|�	�)q]��cϪ|6�"K���~��C��K
��Y���'oGb1!Z,��H���{��ȳf�X&g{/EFQO���W{L��i%�ޙ����Z�t�C��<qщ쀔�Ѓ+��@>�	����F?|�q��Z}�X�I=��C[6Q8�����Vu���#�>��R�<-%����-�����'`��.�w�J[�F]+���$ܐ���o����V�a����*o���G氆����1i�#_��꥔\�ئ��;ʆײ!K"��讬 -���3��Y�_8���%�
�[�S �먉ԽJ��,U�l�)��Z^�Oj2A��^��|ܝo˯��ӆ\a`�ó"���Kp�/R��嘓X�����H4��ݱ�[�FS���qӧ	r�a�Z�:�̋"�>�X![)�˞���N�J�pD�<"���!��~E�K��SQt���ZA�8��6���C�tY�6��Y��?���Gց��^���p��j�}�RT�"�G��֗;w���0 ՙs����:Mt���p��yî\E�� JK]�1��j&�O�=(�!5�5��3�Pn#?���n��K��T�s�9���b�]9G	[�Ocn�J�Cs�:<P96R�ډ���8�%�Zv	\&��6줨�mK�2λ����u}?r,������Z@��+��<��f�z"b�ּ(ͧǋ�� �a��*#�X�/B�� `��ل��̥u�U`ŒNּ�S.,�}�!����VU�.�"�e���V������\�Y�1��5�RP��g�2�ݚ�d�)[r������U�V^��Q��q@l#��:�ܹ$$�[��d��&.Y������j���d�c,jL��� ���e���ı�e2ל��^��%eb2�t�d���fT5�:��Mb݉J/J����^x�	&�FBFݍ��5�C�ڔ��rֹM�C�䟗g�ĵ��o�}��6$�qN�l_,�[���z߳a��b7fG�|���Y9;�Ą�q�e�9�^AoW� /Q�}��}i^\#ys/�]23��X��)G�Ӿ�#�f�v*�NO�xH>�=��qV���S�����Q�_�26q��UXwZ�:�/w�۬�-�F��^��zd��)m��=ZV�q�y1�B�p� ��nB���˧Z@6��h����o���&������a�t��,�0�lq�s�z�fL`2��d�lg&h��8��+)iˋ(�Aq]ڇq��'곧��	�{��f�Ɖ�(頎)�簳"�O��1O���)=m��u,m����,�..�eI+�[
2���R���p����:X�}k��r��l*|=� ӗ:w?�ԯ�rA�*k�����vd�9<�єE��=�w�LNI�D*����d{��M��Z��C��|JB��@v�us�9����p��t_�ș;��̐�6���ʽJ`��y�1���GUFs�a��65Cf�6���7�h���~A��)�=�vf�{kfo��]N�Ro&��14�"&�\� �;=��`zeߊ�b�U�c�[H3`K{R.��:B@.D�Z���ax��a��g��c|�kAĹ���wk3CkW*��<h���:���<��_j��v)&�ӥ:ya��iA[Ȩq�(�v�Y���TK�)�;��T�PɆ�]%�������}��:�Ī
19����ߘd�(���T0�~���5H º39�;#�7�NL�B^X0�G�@�Z�mB�4�;~u��t�;V�^�z���l' $4��%"N?]��r��v�s�44޵�ȇ@����7~�\=��G�͟���Ģ]��#�i���R�@�;���lw�T6���"���mstream ins(strValue);
	std::string strType, strShown;
	ins>>strType>>strShown;

	int type = atoi(strType.c_str());
	int shown = atoi(strShown.c_str());

	_visibleObjects[type] = shown;
}

void LayoutConfig::SetupVisibleId(const std::string& strValue)
{
	std::istringstream ins(strValue);
	std::string strType, strShown;
	ins>>strType>>strShown;

	int type = atoi(strType.c_str());
	int shown = atoi(strShown.c_str());

	_visibleIds[type] = shown;
}
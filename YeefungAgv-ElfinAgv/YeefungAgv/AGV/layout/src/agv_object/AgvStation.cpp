�}�o  >  ��ZC�~��u
��� ʣ�$�����%,X�=��E��A�ɔ�ד<��Æw��F����B�O`��Ψ�%Ҿ��Th�qZ����k_�3"�����E}Y���S�������U�gr�����[��T���(��^k{�"�yx'��G��\B
2f`:������l+�B5op��,��3&�1fz-�.�����a�>�f>�qA��)1P|��B޻,�9��2���5<��=w�;���:�ѲP��<<9E����p`�W��Ej��G�x��n�yd�5_ukJ�x��b��@��[�4���s�s���a%��[�y?���|Y���Q7R�y��0K��u��.8f���G��hd|��2�i��c�F�͞;JV(��y2SK;�t�W&/��Ԭ�Ű��ƽ*r�
+�����M%�#w�ķ?�#>IO,*�G~�S�[)Az\��χ�g)}�����}��sB�DJ���?�)x,'�I��ό�4��sr��qlD)�E�TЈX0�O`�aT��'ΊΚX����{�����[����~��E�S�%�!��,��<(�ܻ+Y��)�v����N��Z�U^l2��<|7�y��,�5�(�Q@l���K%���i��3\�-5;�>aw<IO^Io*tA�&O���?��}��}v�zl*-�JQ��c�ׂii!c��ps2����b����(���+������ҟ�mc���Td�R��r]�ߎo�H�^@{��{h٬��lV�����gw��B(��O|����>,ϡwYWG�=Yޮ�u����}ƅ�4=#G��ۛ��_\ЧΘy�p[}xU#Y8+��.��7DНӆP�p�'�W����} .�FD��Y<��ܹ�����~�J���L��E�^oܐ��?I��I�n�����.�||u�d�'��R�� �K��i��~�j$�V�@�QH:C��꺶��L͒Ӕ���_i�O٢�ᬀ�m'q��t�(��P.ꚫu\��Aj��l�&^��ժx���	�ho��`wZe#![L5�� C�Ԕ������AQu��Y��{Օgr����{��JO��q����E��;
�6_F����"q���1��QeJ��L�:��
����x�f�kN>�<�����h�6��ւ�sJ��[��J�?r`}����_VĄ�[�]����(��g��;�Qs5�D��J��Q���a��\oZHD�v�imd�e^DB��T�/0�'���d��t�!*?�L6���V��#	�c�(�F������A�K��{�&v�bv�Q�
=M2=-3ԓ�nD�L��%�-��Hf}<(Gu��:�9	����j��J�(ٞ��VجqE��mi�S=1P2\���MM��Њs�	 G2����Mw��E����nFk�dM��9ّ��4�&�VJ���>˴�������OzT�AP�}˪?�Y��p-��w�1�ٖM��
=��8�5B�:=���2�:*P�H\��Aj>��l�&5��?���Z���m�In�ڿ�K�8�*��P��wD�w�Z��B��X2��Y�`�~�X���m�JH������H��@�g6���=m��`+!��Yj�_�i�e��-���0��$k'��L�h=��? %���3�d�o�i�w>/ Y��*Wz��G�Y�<�$�̣�L|��u֊A�����Q:��v������
@�X��}�y�D<�u�B�̋HF��4D/�j���Vu�X�[����[fcv�o���nf>�%_/�����=C���IA�п]���1�-�g�y���Pj��Z{&�r,�ح���K���;���L�s�4�̨*W��Fk��QO6����j�==!]��-�fh'�:E�h�[9��3��
!5VmgDfƽ����k�џ����ي��7����Aq8U��BT����ӏ�\���4F9;`����7�9LE(l_�
pk�$���G�p�,���}���e$����(�EqFfZB��!E'�me.c_str());
			break;
		case 8:
			_color = atoi(strValue.c_str());
			break;
		case 9:
			{
				int v = atoi(strValue.c_str());
				_isLoadPass = (v == 1 ? true : false);
			}
			break;
		case 10:
			_position.x = atoi(strValue.c_str());
			break;
		case 20:
			_position.y = atoi(strValue.c_str());
			break;
		case 60:
			_vehicleType = atoi(strValue.c_str());
			break;
		case 61:
			_systemMode = atoi(strValue.c_str());
			return true;
		}
	}

	return false;
}

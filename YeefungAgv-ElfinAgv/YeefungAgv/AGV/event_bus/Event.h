�}�o  �  d����E�Ԡ�u
��+ʣ�c��Ml+����!�����
�_	�:z��
��/�	����D �L�^Y�@���_���r�^�܄�5Jm5�`�-[��+ }��$�]��$2@����]Z��Yd��_�wa�J�$������B<>S,;f����Uа˂�f�w�}��3[����R�p�F��^�E�AZ=�+�笌A�,},!1��^jz����cI85c����"��9,�<�X�����Y��V�e��)Qָ���yU�A�#��d;s��f7)"���hH�~����K�Hן5��%آ��?���|Y���Q7R�y��0K��u��.8f���G��hd|��2�i��c�F�͞;JV(��y2SK;�t�W&/��Ԭ�Ű��ƽ*r�
+�����M%�#w�ķ?�#>IO,*�G~�S�[)Az\��χ�g)}�����}��sB�DJ���?�)x,'�I��ό�4��sr��qring>

class Event
{
public:
	Event(void);
	virtual ~Event(void);

	virtual std::string GetName()
	{

		std::string typeName = typeid(*this).name();
		typeName.erase(0, 6);

		return typeName;
	}
};
          



#endif // __EVENT_BUS_BASEEVENT_H__
                                        
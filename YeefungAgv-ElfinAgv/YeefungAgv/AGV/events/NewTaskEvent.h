�}7o  �  I��B@�2��u
��%ʣ�c��Ml+����!�����
�_	�:z��
��/�	����D �L�^Y�@���_���r�^�܄�5Jm5��[��ʧ�=4�����3�l���/�Sp��K|�H�$��
@�Óm[�遭iǄN���[>J�d6��3n���Ӭ�H=[Ԡ�������l���s�`�*��vD�i 
|y	pv�������t9�
~V18K ����aRE)l��tp���#20��֊��T鴋�h�2�
�ឌ����MIF�ȑ*��T<p�N�p�.��s�z	'%��[�y?���|Y���Q7R�y��0K��u��.8f���G��hd|��2�i��c�F�͞;JV(��y2SK;�t�W&/��Ԭ�Ű��ƽ*r�
+�����M%�#w�ķ?�#>IO,*�G~�S�[)Az\��χ�g)}�����}��sB�DJ���?�)x,'�I��ό�4��sr��qde "vehicle\AgvMode.h"


class NewTaskEvent : public Event
{
public:
	NewTaskEvent() {}
	~NewTaskEvent() {}

	AgvMode_t agvMode; 
	int taskId;				  //*--- ����id
	int targetPoint;
	int viaPoint;
	int opCode;
	std::vector<int> recvSegments;
};


#endif // __EVENTS_NEWTASKEVENT_H__